
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vbg_session {scalar_t__ cancel_waiters; } ;
struct TYPE_5__ {scalar_t__ events; } ;
struct TYPE_4__ {scalar_t__ timeout_ms; scalar_t__ events; } ;
struct TYPE_6__ {TYPE_2__ out; TYPE_1__ in; } ;
struct vbg_ioctl_wait_for_events {TYPE_3__ u; int hdr; } ;
struct vbg_dev {int event_spinlock; int event_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct vbg_dev*,struct vbg_session*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (struct vbg_dev*,struct vbg_session*,scalar_t__) ;
 long FUNC_6 (int ,int ,long) ;

__attribute__((used)) static int FUNC_7(struct vbg_dev *VAR_5,
         struct vbg_session *VAR_6,
         struct vbg_ioctl_wait_for_events *VAR_7)
{
 u32 VAR_8 = VAR_7->u.in.timeout_ms;
 u32 VAR_9 = VAR_7->u.in.events;
 unsigned long VAR_10;
 long VAR_11;
 int VAR_12 = 0;

 if (FUNC_4(&VAR_7->hdr, sizeof(VAR_7->u.in), sizeof(VAR_7->u.out)))
  return -VAR_1;

 if (VAR_8 == VAR_4)
  VAR_11 = VAR_3;
 else
  VAR_11 = FUNC_0(VAR_8);

 VAR_7->u.out.events = 0;
 do {
  VAR_11 = FUNC_6(
    VAR_5->event_wq,
    FUNC_5(VAR_5, VAR_6, VAR_9),
    VAR_11);

  FUNC_1(&VAR_5->event_spinlock, VAR_10);

  if (VAR_11 < 0 || VAR_6->cancel_waiters) {
   VAR_12 = -VAR_0;
  } else if (VAR_11 == 0) {
   VAR_12 = -VAR_2;
  } else {
   VAR_7->u.out.events =
      FUNC_3(VAR_5, VAR_6, VAR_9);
  }

  FUNC_2(&VAR_5->event_spinlock, VAR_10);





 } while (VAR_12 == 0 && VAR_7->u.out.events == 0);

 return VAR_12;
}
