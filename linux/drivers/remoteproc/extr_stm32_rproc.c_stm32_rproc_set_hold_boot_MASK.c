
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_syscon {int mask; int reg; int map; } ;
struct stm32_rproc {scalar_t__ secured_soc; struct stm32_syscon hold_boot; } ;
struct rproc {int dev; struct stm32_rproc* priv; } ;
struct arm_smccc_res {int a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ,struct arm_smccc_res*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rproc *VAR_5, bool VAR_6)
{
 struct stm32_rproc *VAR_7 = VAR_5->priv;
 struct stm32_syscon VAR_8 = VAR_7->hold_boot;
 struct arm_smccc_res VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = VAR_6 ? VAR_1 : VAR_2;

 if (FUNC_0(VAR_0) && VAR_7->secured_soc) {
  FUNC_1(VAR_3, VAR_4,
         VAR_8.reg, VAR_10, 0, 0, 0, 0, &VAR_9);
  VAR_11 = VAR_9.a0;
 } else {
  VAR_11 = FUNC_3(VAR_8.map, VAR_8.reg,
      VAR_8.mask, VAR_10);
 }

 if (VAR_11)
  FUNC_2(&VAR_5->dev, "failed to set hold boot\n");

 return VAR_11;
}
