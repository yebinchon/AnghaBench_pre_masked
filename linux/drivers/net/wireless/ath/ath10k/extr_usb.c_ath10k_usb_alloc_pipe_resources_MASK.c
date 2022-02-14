
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_usb_pipe {int urb_alloc; int usb_pipe_handle; int logical_pipe_num; int urb_submitted; int urb_list_head; } ;
struct ath10k_urb_context {struct ath10k_usb_pipe* pipe; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct ath10k_usb_pipe*,struct ath10k_urb_context*) ;
 int FUNC_3 (int *) ;
 struct ath10k_urb_context* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_3,
        struct ath10k_usb_pipe *VAR_4,
        int VAR_5)
{
 struct ath10k_urb_context *VAR_6;
 int VAR_7;

 FUNC_0(&VAR_4->urb_list_head);
 FUNC_3(&VAR_4->urb_submitted);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
  if (!VAR_6)
   return -VAR_1;

  VAR_6->pipe = VAR_4;




  VAR_4->urb_alloc++;
  FUNC_2(VAR_4, VAR_6);
 }

 FUNC_1(VAR_3, VAR_0,
     "usb alloc resources lpipe %d hpipe 0x%x urbs %d\n",
     VAR_4->logical_pipe_num, VAR_4->usb_pipe_handle,
     VAR_4->urb_alloc);

 return 0;
}
