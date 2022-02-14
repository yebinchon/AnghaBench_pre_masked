
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdp1_job {int dummy; } ;
struct fdp1_dev {int free_job_list; } ;


 struct fdp1_job* FUNC_0 (struct fdp1_dev*,int *) ;

__attribute__((used)) static struct fdp1_job *FUNC_1(struct fdp1_dev *VAR_0)
{
 return FUNC_0(VAR_0, &VAR_0->free_job_list);
}
