
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_usb_pipe {int urb_alloc; int usb_pipe_handle; int logical_pipe_num; int urb_submitted; int urb_list_head; } ;
struct ath6kl_urb_context {struct ath6kl_usb_pipe* pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct ath6kl_usb_pipe*,struct ath6kl_urb_context*) ;
 int FUNC_3 (int *) ;
 struct ath6kl_urb_context* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_usb_pipe *VAR_3,
        int VAR_4)
{
 struct ath6kl_urb_context *VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_0(&VAR_3->urb_list_head);
 FUNC_3(&VAR_3->urb_submitted);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5 = FUNC_4(sizeof(struct ath6kl_urb_context),
          VAR_2);
  if (VAR_5 == ((void*)0)) {
   VAR_6 = -VAR_1;
   goto fail_alloc_pipe_resources;
  }

  VAR_5->pipe = VAR_3;





  VAR_3->urb_alloc++;
  FUNC_2(VAR_3, VAR_5);
 }

 FUNC_1(VAR_0,
     "ath6kl usb: alloc resources lpipe:%d hpipe:0x%X urbs:%d\n",
     VAR_3->logical_pipe_num, VAR_3->usb_pipe_handle,
     VAR_3->urb_alloc);

fail_alloc_pipe_resources:
 return VAR_6;
}
