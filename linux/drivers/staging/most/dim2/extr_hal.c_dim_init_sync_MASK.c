
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dim_channel {int dbr_size; scalar_t__ dbr_addr; int addr; } ;
struct TYPE_2__ {int fcnt; int dim_is_initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,int,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (struct dim_channel*,int,int) ;

u8 FUNC_6(struct dim_channel *VAR_8, u8 VAR_9, u16 VAR_10,
   u16 VAR_11)
{
 u16 VAR_12 = VAR_7.fcnt + 2;

 if (!VAR_7.dim_is_initialized || !VAR_8)
  return VAR_3;

 if (!FUNC_2(VAR_10))
  return VAR_4;

 if (!FUNC_1(VAR_11))
  return VAR_2;

 if (!VAR_8->dbr_size)
  VAR_8->dbr_size = VAR_11 << VAR_12;
 VAR_8->dbr_addr = FUNC_0(VAR_8->dbr_size);
 if (VAR_8->dbr_addr >= VAR_1)
  return VAR_5;

 FUNC_5(VAR_8, VAR_10 / 2, VAR_11);

 FUNC_3(VAR_8->dbr_addr, VAR_8->dbr_size);
 FUNC_4(VAR_8->addr, VAR_0, VAR_9,
          VAR_8->dbr_addr, VAR_8->dbr_size, 0);

 return VAR_6;
}
