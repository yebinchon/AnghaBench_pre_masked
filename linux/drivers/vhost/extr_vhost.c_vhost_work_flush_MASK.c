
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_work {int dummy; } ;
struct vhost_flush_struct {int wait_event; int work; } ;
struct vhost_dev {scalar_t__ worker; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct vhost_dev*,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct vhost_dev *VAR_1, struct vhost_work *VAR_2)
{
 struct vhost_flush_struct VAR_3;

 if (VAR_1->worker) {
  FUNC_0(&VAR_3.wait_event);
  FUNC_1(&VAR_3.work, VAR_0);

  FUNC_2(VAR_1, &VAR_3.work);
  FUNC_3(&VAR_3.wait_event);
 }
}
