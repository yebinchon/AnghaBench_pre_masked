
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_usb_pipe {TYPE_1__* ar_usb; int urb_list_head; int urb_cnt; } ;
struct ath10k_urb_context {int link; } ;
struct TYPE_2__ {int cs_lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ath10k_usb_pipe *VAR_0,
     struct ath10k_urb_context *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->ar_usb->cs_lock, VAR_2);

 VAR_0->urb_cnt++;
 FUNC_0(&VAR_1->link, &VAR_0->urb_list_head);

 FUNC_2(&VAR_0->ar_usb->cs_lock, VAR_2);
}
