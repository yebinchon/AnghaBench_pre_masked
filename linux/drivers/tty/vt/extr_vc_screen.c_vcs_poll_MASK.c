
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcs_poll_data {int event; int waitq; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct file*,int *,int *) ;
 struct vcs_poll_data* FUNC_1 (struct file*) ;

__attribute__((used)) static __poll_t
FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct vcs_poll_data *VAR_6 = FUNC_1(VAR_4);
 __poll_t VAR_7 = VAR_0|VAR_1;

 if (VAR_6) {
  FUNC_0(VAR_4, &VAR_6->waitq, VAR_5);
  switch (VAR_6->event) {
  case 128:
   VAR_7 = VAR_0|VAR_3;
   break;
  case 129:
   VAR_7 = VAR_0|VAR_2|VAR_1;
   break;
  case 0:
   VAR_7 = VAR_0;
   break;
  }
 }
 return VAR_7;
}
