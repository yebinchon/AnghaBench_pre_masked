
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct port100 {int out_urb_lock; TYPE_2__* out_urb; TYPE_1__* in_urb; scalar_t__ cmd_cancel; } ;
struct TYPE_5__ {int transfer_buffer_length; int transfer_buffer; } ;
struct TYPE_4__ {int transfer_buffer_length; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct port100*,int ) ;
 int FUNC_3 (char*,int ,int,int,int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct port100 *VAR_3, struct sk_buff *VAR_4,
        struct sk_buff *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_3->out_urb_lock);




 if (VAR_3->cmd_cancel) {
  VAR_7 = -VAR_1;
  goto exit;
 }

 VAR_3->out_urb->transfer_buffer = VAR_4->data;
 VAR_3->out_urb->transfer_buffer_length = VAR_4->len;

 VAR_3->in_urb->transfer_buffer = VAR_5->data;
 VAR_3->in_urb->transfer_buffer_length = VAR_6;

 FUNC_3("PORT100 TX: ", VAR_0, 16, 1,
        VAR_4->data, VAR_4->len, 0);

 VAR_7 = FUNC_4(VAR_3->out_urb, VAR_2);
 if (VAR_7)
  goto exit;

 VAR_7 = FUNC_2(VAR_3, VAR_2);
 if (VAR_7)
  FUNC_5(VAR_3->out_urb);

exit:
 FUNC_1(&VAR_3->out_urb_lock);

 return VAR_7;
}
