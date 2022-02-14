
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dim_channel {scalar_t__ dbr_addr; scalar_t__ dbr_size; int addr; } ;
struct TYPE_2__ {int dim_is_initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dim_channel*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static u8 FUNC_5(struct dim_channel *VAR_7, u8 VAR_8, u8 VAR_9,
     u16 VAR_10, u16 VAR_11)
{
 if (!VAR_6.dim_is_initialized || !VAR_7)
  return VAR_2;

 if (!FUNC_3(VAR_10))
  return VAR_3;

 if (!VAR_7->dbr_size)
  VAR_7->dbr_size = FUNC_0(VAR_11, VAR_0);
 VAR_7->dbr_addr = FUNC_1(VAR_7->dbr_size);
 if (VAR_7->dbr_addr >= VAR_1)
  return VAR_4;

 FUNC_2(VAR_7, VAR_10 / 2);

 FUNC_4(VAR_7->addr, VAR_8, VAR_9,
          VAR_7->dbr_addr, VAR_7->dbr_size, 0);

 return VAR_5;
}
