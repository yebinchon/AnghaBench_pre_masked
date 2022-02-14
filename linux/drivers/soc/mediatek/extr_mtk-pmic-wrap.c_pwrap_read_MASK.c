
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmic_wrapper {TYPE_1__* slave; } ;
struct TYPE_2__ {int (* pwrap_read ) (struct pmic_wrapper*,int ,int *) ;} ;


 int FUNC_0 (struct pmic_wrapper*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct pmic_wrapper *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 return VAR_0->slave->pwrap_read(VAR_0, VAR_1, VAR_2);
}
