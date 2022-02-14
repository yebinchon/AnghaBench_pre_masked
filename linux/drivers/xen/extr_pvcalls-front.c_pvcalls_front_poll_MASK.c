
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock_mapping {scalar_t__ active_socket; } ;
struct pvcalls_bedata {int dummy; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 struct pvcalls_bedata* FUNC_1 (int *) ;
 struct sock_mapping* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (struct file*,struct pvcalls_bedata*,struct sock_mapping*,int *) ;
 int FUNC_5 (struct file*,struct pvcalls_bedata*,struct sock_mapping*,int *) ;

__poll_t FUNC_6(struct file *VAR_2, struct socket *VAR_3,
          poll_table *VAR_4)
{
 struct pvcalls_bedata *VAR_5;
 struct sock_mapping *VAR_6;
 __poll_t VAR_7;

 VAR_6 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_6))
  return VAR_0;
 VAR_5 = FUNC_1(&VAR_1->dev);

 if (VAR_6->active_socket)
  VAR_7 = FUNC_4(VAR_2, VAR_5, VAR_6, VAR_4);
 else
  VAR_7 = FUNC_5(VAR_2, VAR_5, VAR_6, VAR_4);
 FUNC_3(VAR_3);
 return VAR_7;
}
