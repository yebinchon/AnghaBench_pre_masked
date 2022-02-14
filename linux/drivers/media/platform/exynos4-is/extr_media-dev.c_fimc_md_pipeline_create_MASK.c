
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_media_pipeline {int * ops; } ;
struct fimc_pipeline {struct exynos_media_pipeline ep; int list; } ;
struct fimc_md {int pipelines; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fimc_pipeline* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct exynos_media_pipeline *FUNC_2(
      struct fimc_md *VAR_2)
{
 struct fimc_pipeline *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->list, &VAR_2->pipelines);

 VAR_3->ep.ops = &VAR_1;
 return &VAR_3->ep;
}
