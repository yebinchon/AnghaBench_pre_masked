
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfe_output {int state; int ** buf; TYPE_4__* last_buffer; int reg_update; scalar_t__ wait_reg_update; } ;
struct vfe_device {int output_lock; TYPE_2__* line; TYPE_1__* ops; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;
struct TYPE_7__ {int vb2_buf; } ;
struct TYPE_8__ {TYPE_3__ vb; } ;
struct TYPE_6__ {struct vfe_output output; } ;
struct TYPE_5__ {int (* reg_update_clear ) (struct vfe_device*,int) ;} ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vfe_device*,int) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (struct vfe_output*) ;
 int FUNC_6 (struct vfe_device*,struct vfe_output*,int) ;
 int FUNC_7 (struct vfe_device*,struct vfe_output*,int) ;

__attribute__((used)) static void FUNC_8(struct vfe_device *VAR_3, enum vfe_line_id VAR_4)
{
 struct vfe_output *VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_3->output_lock, VAR_6);
 VAR_3->ops->reg_update_clear(VAR_3, VAR_4);

 VAR_5 = &VAR_3->line[VAR_4].output;

 if (VAR_5->wait_reg_update) {
  VAR_5->wait_reg_update = 0;
  FUNC_0(&VAR_5->reg_update);
  FUNC_2(&VAR_3->output_lock, VAR_6);
  return;
 }

 if (VAR_5->state == VAR_2) {

  if (VAR_5->last_buffer) {
   FUNC_4(&VAR_5->last_buffer->vb.vb2_buf,
     VAR_0);
   VAR_5->last_buffer = ((void*)0);
  }
  VAR_5->state = VAR_1;




  VAR_5->buf[0] = FUNC_5(VAR_5);
  VAR_5->buf[1] = FUNC_5(VAR_5);

  if (!VAR_5->buf[0] && VAR_5->buf[1]) {
   VAR_5->buf[0] = VAR_5->buf[1];
   VAR_5->buf[1] = ((void*)0);
  }

  if (VAR_5->buf[0])
   VAR_5->state = 128;

  if (VAR_5->buf[1])
   VAR_5->state = 129;

  switch (VAR_5->state) {
  case 128:
   FUNC_6(VAR_3, VAR_5, 2);
   break;
  case 129:
   FUNC_6(VAR_3, VAR_5, 3);
   break;
  default:
   FUNC_6(VAR_3, VAR_5, 0);
   break;
  }

  FUNC_7(VAR_3, VAR_5, 1);
 }

 FUNC_2(&VAR_3->output_lock, VAR_6);
}
