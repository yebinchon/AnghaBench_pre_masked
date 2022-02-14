
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271 {TYPE_1__* ops; int mbox_size; int mbox; int * mbox_ptr; } ;
struct TYPE_2__ {int (* process_mailbox_events ) (struct wl1271*) ;int (* ack_event ) (struct wl1271*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1271*) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct wl1271*,int ,int ,int ,int) ;

int FUNC_4(struct wl1271 *VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_0, "EVENT on mbox %d", VAR_3);

 if (VAR_3 > 1)
  return -VAR_1;


 VAR_4 = FUNC_3(VAR_2, VAR_2->mbox_ptr[VAR_3], VAR_2->mbox,
     VAR_2->mbox_size, 0);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = VAR_2->ops->process_mailbox_events(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;





 VAR_4 = VAR_2->ops->ack_event(VAR_2);

 return VAR_4;
}
