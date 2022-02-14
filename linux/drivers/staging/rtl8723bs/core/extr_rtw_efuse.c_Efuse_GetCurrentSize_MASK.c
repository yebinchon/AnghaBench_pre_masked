
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* EfuseGetCurrentSize ) (struct adapter*,int ,int) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int ,int) ;

u16
FUNC_1(
 struct adapter *VAR_0,
 u8 VAR_1,
 bool VAR_2)
{
 return VAR_0->HalFunc.EfuseGetCurrentSize(VAR_0, VAR_1,
           VAR_2);
}
