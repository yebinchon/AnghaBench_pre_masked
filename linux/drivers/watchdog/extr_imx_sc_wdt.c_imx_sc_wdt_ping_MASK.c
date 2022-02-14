
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct arm_smccc_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_2)
{
 struct arm_smccc_res VAR_3;

 FUNC_0(VAR_0, VAR_1,
        0, 0, 0, 0, 0, 0, &VAR_3);

 return 0;
}
