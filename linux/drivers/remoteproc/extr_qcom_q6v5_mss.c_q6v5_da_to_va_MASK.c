
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rproc {struct q6v5* priv; } ;
struct q6v5 {int mpss_reloc; int mpss_size; void* mpss_region; } ;



__attribute__((used)) static void *FUNC_0(struct rproc *VAR_0, u64 VAR_1, int VAR_2)
{
 struct q6v5 *VAR_3 = VAR_0->priv;
 int VAR_4;

 VAR_4 = VAR_1 - VAR_3->mpss_reloc;
 if (VAR_4 < 0 || VAR_4 + VAR_2 > VAR_3->mpss_size)
  return ((void*)0);

 return VAR_3->mpss_region + VAR_4;
}
