
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbg_session {scalar_t__ cancel_waiters; } ;
struct vbg_dev {int pending_events; int event_spinlock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct vbg_dev *VAR_0,
    struct vbg_session *VAR_1,
    u32 VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;
 u32 VAR_5;

 FUNC_0(&VAR_0->event_spinlock, VAR_3);

 VAR_5 = VAR_0->pending_events & VAR_2;
 VAR_4 = VAR_5 || VAR_1->cancel_waiters;

 FUNC_1(&VAR_0->event_spinlock, VAR_3);

 return VAR_4;
}
