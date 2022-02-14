
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbg_session {int cancel_waiters; } ;
struct vbg_ioctl_hdr {int size_in; int size_out; } ;
struct vbg_dev {int event_wq; int event_spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vbg_dev *VAR_1,
            struct vbg_session *VAR_2,
            struct vbg_ioctl_hdr *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->size_in != sizeof(*VAR_3) || VAR_3->size_out != sizeof(*VAR_3))
  return -VAR_0;

 FUNC_0(&VAR_1->event_spinlock, VAR_4);
 VAR_2->cancel_waiters = 1;
 FUNC_1(&VAR_1->event_spinlock, VAR_4);

 FUNC_2(&VAR_1->event_wq);

 return 0;
}
