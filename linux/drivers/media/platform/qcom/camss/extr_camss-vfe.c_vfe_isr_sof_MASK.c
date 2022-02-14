
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_output {int sof; scalar_t__ wait_sof; } ;
struct vfe_device {int output_lock; TYPE_1__* line; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;
struct TYPE_2__ {struct vfe_output output; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_0, enum vfe_line_id VAR_1)
{
 struct vfe_output *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->output_lock, VAR_3);
 VAR_2 = &VAR_0->line[VAR_1].output;
 if (VAR_2->wait_sof) {
  VAR_2->wait_sof = 0;
  FUNC_0(&VAR_2->sof);
 }
 FUNC_2(&VAR_0->output_lock, VAR_3);
}
