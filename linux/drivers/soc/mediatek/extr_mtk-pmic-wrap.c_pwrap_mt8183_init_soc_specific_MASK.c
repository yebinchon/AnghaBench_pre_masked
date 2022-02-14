
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmic_wrapper {TYPE_1__* slave; } ;
struct TYPE_2__ {int * dew_regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pmic_wrapper*,int ,int) ;
 int FUNC_1 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pmic_wrapper *VAR_9)
{
 FUNC_1(VAR_9, 0xf5, VAR_6);

 FUNC_0(VAR_9, VAR_9->slave->dew_regs[VAR_1], 0x1);
 FUNC_1(VAR_9, 1, VAR_0);
 FUNC_1(VAR_9, 0x416, VAR_5);
 FUNC_1(VAR_9, 0x42e, VAR_2);

 FUNC_1(VAR_9, 1, VAR_8);
 FUNC_1(VAR_9, 1, VAR_7);
 FUNC_1(VAR_9, 1, VAR_4);
 FUNC_1(VAR_9, 1, VAR_3);

 return 0;
}
