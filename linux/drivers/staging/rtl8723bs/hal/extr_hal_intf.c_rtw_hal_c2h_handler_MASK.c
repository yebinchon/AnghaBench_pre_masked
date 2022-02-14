
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* c2h_handler ) (struct adapter*,int *) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int *) ;

s32 FUNC_1(struct adapter *VAR_1, u8 *VAR_2)
{
 s32 VAR_3 = VAR_0;
 if (VAR_1->HalFunc.c2h_handler)
  VAR_3 = VAR_1->HalFunc.c2h_handler(VAR_1, VAR_2);
 return VAR_3;
}
