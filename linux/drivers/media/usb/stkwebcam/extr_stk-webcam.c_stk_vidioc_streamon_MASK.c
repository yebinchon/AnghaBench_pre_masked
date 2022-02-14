
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {scalar_t__ sequence; int * sio_bufs; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (struct stk_camera*) ;
 struct stk_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1,
  void *VAR_2, enum v4l2_buf_type VAR_3)
{
 struct stk_camera *VAR_4 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_4))
  return 0;
 if (VAR_4->sio_bufs == ((void*)0))
  return -VAR_0;
 VAR_4->sequence = 0;
 return FUNC_1(VAR_4);
}
