
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int firmware; scalar_t__ priv; } ;
struct qcom_adsp {int mem_reloc; int mem_size; int mem_phys; int mem_region; int pas_id; int dev; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int ,struct firmware const*,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_0, const struct firmware *VAR_1)
{
 struct qcom_adsp *VAR_2 = (struct qcom_adsp *)VAR_0->priv;

 return FUNC_0(VAR_2->dev, VAR_1, VAR_0->firmware, VAR_2->pas_id,
        VAR_2->mem_region, VAR_2->mem_phys, VAR_2->mem_size,
        &VAR_2->mem_reloc);

}
