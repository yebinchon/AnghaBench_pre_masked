
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int firmware; scalar_t__ priv; } ;
struct qcom_wcnss {int mem_reloc; int mem_size; int mem_phys; int mem_region; int dev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct firmware const*,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_1, const struct firmware *VAR_2)
{
 struct qcom_wcnss *VAR_3 = (struct qcom_wcnss *)VAR_1->priv;

 return FUNC_0(VAR_3->dev, VAR_2, VAR_1->firmware, VAR_0,
        VAR_3->mem_region, VAR_3->mem_phys,
        VAR_3->mem_size, &VAR_3->mem_reloc);
}
