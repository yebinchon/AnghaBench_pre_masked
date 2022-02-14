
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_selftest_irq_input {int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_selftest_irq_input*,int ,int ,int) ;
 int FUNC_1 (struct bnxt*,struct hwrm_selftest_irq_input*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_2, u16 VAR_3)
{
 struct hwrm_selftest_irq_input VAR_4 = {0};

 FUNC_0(VAR_2, &VAR_4, VAR_1, VAR_3, -1);
 return FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4), VAR_0);
}
