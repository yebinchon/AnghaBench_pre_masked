
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userfaultfd_ctx {int state; int event_wqh; int fault_pending_wqh; int fd_wqh; } ;
struct file {int f_flags; struct userfaultfd_ctx* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_3, poll_table *VAR_4)
{
 struct userfaultfd_ctx *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6;

 FUNC_1(VAR_3, &VAR_5->fd_wqh, VAR_4);

 switch (VAR_5->state) {
 case 128:
  return VAR_0;
 case 129:




  if (FUNC_3(!(VAR_3->f_flags & VAR_2)))
   return VAR_0;
  VAR_6 = 0;
  FUNC_2();
  if (FUNC_4(&VAR_5->fault_pending_wqh))
   VAR_6 = VAR_1;
  else if (FUNC_4(&VAR_5->event_wqh))
   VAR_6 = VAR_1;

  return VAR_6;
 default:
  FUNC_0(1);
  return VAR_0;
 }
}
