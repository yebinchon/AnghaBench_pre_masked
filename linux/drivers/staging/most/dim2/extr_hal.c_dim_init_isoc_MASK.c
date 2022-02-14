
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dim_channel {int dbr_size; scalar_t__ dbr_addr; int addr; } ;
struct TYPE_2__ {int dim_is_initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int,int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (struct dim_channel*,int,int) ;

u8 FUNC_5(struct dim_channel *VAR_9, u8 VAR_10, u16 VAR_11,
   u16 VAR_12)
{
 if (!VAR_8.dim_is_initialized || !VAR_9)
  return VAR_3;

 if (!FUNC_1(VAR_11))
  return VAR_4;

 if (!FUNC_2(VAR_12))
  return VAR_2;

 if (!VAR_9->dbr_size)
  VAR_9->dbr_size = VAR_12 * VAR_7;
 VAR_9->dbr_addr = FUNC_0(VAR_9->dbr_size);
 if (VAR_9->dbr_addr >= VAR_1)
  return VAR_5;

 FUNC_4(VAR_9, VAR_11 / 2, VAR_12);

 FUNC_3(VAR_9->addr, VAR_0, VAR_10, VAR_9->dbr_addr,
          VAR_9->dbr_size, VAR_12);

 return VAR_6;
}
