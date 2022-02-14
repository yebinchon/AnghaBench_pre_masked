
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int sio_full; int wait_frame; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct file*,int *) ;
 struct stk_camera* FUNC_4 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_3, poll_table *VAR_4)
{
 struct stk_camera *VAR_5 = FUNC_4(VAR_3);
 __poll_t VAR_6 = FUNC_3(VAR_3, VAR_4);

 FUNC_2(VAR_3, &VAR_5->wait_frame, VAR_4);

 if (!FUNC_0(VAR_5))
  return VAR_0;

 if (!FUNC_1(&VAR_5->sio_full))
  return VAR_6 | VAR_1 | VAR_2;

 return VAR_6;
}
