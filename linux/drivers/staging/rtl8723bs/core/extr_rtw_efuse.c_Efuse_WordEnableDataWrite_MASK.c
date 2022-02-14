
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* Efuse_WordEnableDataWrite ) (struct adapter*,int ,int ,int *,int) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int ,int ,int *,int) ;

u8
FUNC_1(struct adapter *VAR_0,
      u16 VAR_1,
      u8 VAR_2,
      u8 *VAR_3,
      bool VAR_4)
{
 return VAR_0->HalFunc.Efuse_WordEnableDataWrite(VAR_0, VAR_1,
          VAR_2, VAR_3,
          VAR_4);
}
