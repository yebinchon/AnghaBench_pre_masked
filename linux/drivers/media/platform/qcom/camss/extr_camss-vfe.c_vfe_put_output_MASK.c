
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_output {unsigned int wm_num; int state; int * wm_idx; } ;
struct vfe_line {struct vfe_output output; } ;
struct vfe_device {int output_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vfe_device* FUNC_2 (struct vfe_line*) ;
 int FUNC_3 (struct vfe_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct vfe_line *VAR_1)
{
 struct vfe_device *VAR_2 = FUNC_2(VAR_1);
 struct vfe_output *VAR_3 = &VAR_1->output;
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_0(&VAR_2->output_lock, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_3->wm_num; VAR_5++)
  FUNC_3(VAR_2, VAR_3->wm_idx[VAR_5]);

 VAR_3->state = VAR_0;

 FUNC_1(&VAR_2->output_lock, VAR_4);
 return 0;
}
