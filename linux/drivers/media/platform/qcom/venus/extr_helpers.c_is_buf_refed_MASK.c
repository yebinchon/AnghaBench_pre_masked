
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int delayed_process_work; int delayed_process; } ;
struct venus_buffer {int flags; int ref_list; } ;
struct vb2_v4l2_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 struct venus_buffer* FUNC_2 (struct vb2_v4l2_buffer*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_1, struct vb2_v4l2_buffer *VAR_2)
{
 struct venus_buffer *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->flags & VAR_0) {
  FUNC_0(&VAR_3->ref_list, &VAR_1->delayed_process);
  FUNC_1(&VAR_1->delayed_process_work);
  return 1;
 }

 return 0;
}
