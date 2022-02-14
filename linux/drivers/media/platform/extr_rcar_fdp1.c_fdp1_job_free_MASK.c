
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdp1_job {int dummy; } ;
struct fdp1_dev {int free_job_list; } ;


 int FUNC_0 (struct fdp1_dev*,int *,struct fdp1_job*) ;
 int FUNC_1 (struct fdp1_job*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fdp1_dev *VAR_0, struct fdp1_job *VAR_1)
{

 FUNC_1(VAR_1, 0, sizeof(struct fdp1_job));

 FUNC_0(VAR_0, &VAR_0->free_job_list, VAR_1);
}
