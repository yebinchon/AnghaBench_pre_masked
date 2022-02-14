
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_pmu {int ccl_id; int sccl_id; } ;


 int FUNC_0 (int*,int*) ;

__attribute__((used)) static bool FUNC_1(struct hisi_pmu *VAR_0)
{
 int VAR_1, VAR_2;

 if (VAR_0->ccl_id == -1) {

  FUNC_0(&VAR_1, ((void*)0));

  return VAR_1 == VAR_0->sccl_id;
 }

 FUNC_0(&VAR_1, &VAR_2);

 return VAR_1 == VAR_0->sccl_id && VAR_2 == VAR_0->ccl_id;
}
