
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct ath10k_urb_context* context; } ;
struct sk_buff {int dummy; } ;
struct ath10k_usb_pipe {int io_complete_work; int io_comp_queue; int logical_pipe_num; TYPE_1__* ar_usb; } ;
struct ath10k_urb_context {struct ath10k_usb_pipe* pipe; struct sk_buff* skb; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {struct ath10k* ar; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ) ;
 int FUNC_1 (struct ath10k_usb_pipe*,struct ath10k_urb_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct ath10k_urb_context *VAR_2 = VAR_1->context;
 struct ath10k_usb_pipe *VAR_3 = VAR_2->pipe;
 struct ath10k *VAR_4 = VAR_3->ar_usb->ar;
 struct sk_buff *VAR_5;

 if (VAR_1->status != 0) {
  FUNC_0(VAR_4, VAR_0,
      "pipe: %d, failed:%d\n",
      VAR_3->logical_pipe_num, VAR_1->status);
 }

 VAR_5 = VAR_2->skb;
 VAR_2->skb = ((void*)0);
 FUNC_1(VAR_2->pipe, VAR_2);


 FUNC_3(&VAR_3->io_comp_queue, VAR_5);
 FUNC_2(&VAR_3->io_complete_work);
}
