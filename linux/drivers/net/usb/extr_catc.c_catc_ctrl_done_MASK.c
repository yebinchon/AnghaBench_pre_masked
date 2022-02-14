
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int actual_length; TYPE_1__* dev; struct catc* context; } ;
struct ctrl_queue {int (* callback ) (struct catc*,struct ctrl_queue*) ;scalar_t__ buf; scalar_t__ len; scalar_t__ dir; } ;
struct catc {int ctrl_tail; scalar_t__ ctrl_head; int ctrl_lock; int flags; scalar_t__ ctrl_buf; struct ctrl_queue* ctrl_queue; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct catc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct catc*,struct ctrl_queue*) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_2)
{
 struct catc *VAR_3 = VAR_2->context;
 struct ctrl_queue *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = VAR_2->status;

 if (VAR_6)
  FUNC_2(&VAR_2->dev->dev, "ctrl_done, status %d, len %d.\n",
   VAR_6, VAR_2->actual_length);

 FUNC_4(&VAR_3->ctrl_lock, VAR_5);

 VAR_4 = VAR_3->ctrl_queue + VAR_3->ctrl_tail;

 if (VAR_4->dir) {
  if (VAR_4->buf && VAR_4->len)
   FUNC_3(VAR_4->buf, VAR_3->ctrl_buf, VAR_4->len);
  else
   VAR_4->buf = VAR_3->ctrl_buf;
 }

 if (VAR_4->callback)
  VAR_4->callback(VAR_3, VAR_4);

 VAR_3->ctrl_tail = (VAR_3->ctrl_tail + 1) & (VAR_0 - 1);

 if (VAR_3->ctrl_head != VAR_3->ctrl_tail)
  FUNC_0(VAR_3);
 else
  FUNC_1(VAR_1, &VAR_3->flags);

 FUNC_5(&VAR_3->ctrl_lock, VAR_5);
}
