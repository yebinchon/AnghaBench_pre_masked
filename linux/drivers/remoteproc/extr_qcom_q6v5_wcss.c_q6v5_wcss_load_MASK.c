
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int firmware; struct q6v5_wcss* priv; } ;
struct q6v5_wcss {int mem_reloc; int mem_size; int mem_phys; int mem_region; int dev; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int ,struct firmware const*,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_0, const struct firmware *VAR_1)
{
 struct q6v5_wcss *VAR_2 = VAR_0->priv;

 return FUNC_0(VAR_2->dev, VAR_1, VAR_0->firmware,
         0, VAR_2->mem_region, VAR_2->mem_phys,
         VAR_2->mem_size, &VAR_2->mem_reloc);
}
