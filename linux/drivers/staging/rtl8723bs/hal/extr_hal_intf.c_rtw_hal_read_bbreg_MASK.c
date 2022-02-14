
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* read_bbreg ) (struct adapter*,int ,int ) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int ,int ) ;

u32 FUNC_1(struct adapter *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;
 if (VAR_0->HalFunc.read_bbreg)
   VAR_3 = VAR_0->HalFunc.read_bbreg(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
