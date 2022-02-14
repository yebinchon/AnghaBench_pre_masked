
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdoa_data {int dev; } ;
struct vdoa_ctx {scalar_t__ submitted_job; scalar_t__ completed_job; int completion; struct vdoa_data* vdoa; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct vdoa_ctx *VAR_1)
{
 struct vdoa_data *VAR_2 = VAR_1->vdoa;

 if (VAR_1->submitted_job == VAR_1->completed_job)
  return 0;

 if (!FUNC_2(&VAR_1->completion,
      FUNC_1(300))) {
  FUNC_0(VAR_2->dev,
   "Timeout waiting for transfer result\n");
  return -VAR_0;
 }

 return 0;
}
