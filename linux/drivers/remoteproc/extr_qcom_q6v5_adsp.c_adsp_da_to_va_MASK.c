
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rproc {scalar_t__ priv; } ;
struct qcom_adsp {int mem_reloc; int mem_size; void* mem_region; } ;



__attribute__((used)) static void *FUNC_0(struct rproc *VAR_0, u64 VAR_1, int VAR_2)
{
 struct qcom_adsp *VAR_3 = (struct qcom_adsp *)VAR_0->priv;
 int VAR_4;

 VAR_4 = VAR_1 - VAR_3->mem_reloc;
 if (VAR_4 < 0 || VAR_4 + VAR_2 > VAR_3->mem_size)
  return ((void*)0);

 return VAR_3->mem_region + VAR_4;
}
