
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_entity {int dummy; } ;
struct file {int dummy; } ;
struct camif_vp {void* owner; int vb_queue; int id; struct camif_dev* camif; } ;
struct TYPE_4__ {TYPE_1__* sd; } ;
struct camif_dev {int m_pipeline; TYPE_2__ sensor; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {struct media_entity entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct camif_dev*) ;
 int FUNC_1 (struct media_entity*,int ) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (struct camif_vp*) ;
 int FUNC_5 (int *,int) ;
 struct camif_vp* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, void *VAR_4,
         enum v4l2_buf_type VAR_5)
{
 struct camif_vp *VAR_6 = FUNC_6(VAR_3);
 struct camif_dev *VAR_7 = VAR_6->camif;
 struct media_entity *VAR_8 = &VAR_7->sensor.sd->entity;
 int VAR_9;

 FUNC_3("[vp%d]\n", VAR_6->id);

 if (VAR_5 != VAR_2)
  return -VAR_1;

 if (VAR_6->owner && VAR_6->owner != VAR_4)
  return -VAR_0;

 if (FUNC_4(VAR_6))
  return 0;

 VAR_9 = FUNC_1(VAR_8, VAR_7->m_pipeline);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(VAR_8);
  return VAR_9;
 }

 return FUNC_5(&VAR_6->vb_queue, VAR_5);
}
