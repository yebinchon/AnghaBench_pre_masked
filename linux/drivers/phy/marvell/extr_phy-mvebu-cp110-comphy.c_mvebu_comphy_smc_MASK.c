
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smccc_res {int a0; } ;


 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
       unsigned long VAR_2, unsigned long VAR_3)
{
 struct arm_smccc_res VAR_4;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0, 0, 0, 0, &VAR_4);

 return VAR_4.a0;
}
