
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_request {int pkt; } ;
struct usbhsh_hpriv {int dummy; } ;
struct usbhs_pipe {int * handler; } ;
struct urb {int transfer_flags; int transfer_buffer_length; int transfer_buffer; int pipe; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct usbhs_pipe*,int *,int ,int ,int ,int,int) ;
 int VAR_4 ;
 struct usbhsh_request* FUNC_3 (struct usbhsh_hpriv*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_4(struct usbhsh_hpriv *VAR_5,
      struct urb *VAR_6,
      struct usbhs_pipe *VAR_7,
      gfp_t VAR_8)

{
 struct usbhsh_request *VAR_9;


 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_8);
 if (FUNC_0(!VAR_9))
  return -VAR_0;

 if (FUNC_1(VAR_6->pipe))
  VAR_7->handler = &VAR_2;
 else
  VAR_7->handler = &VAR_3;

 FUNC_2(VAR_7, &VAR_9->pkt,
         VAR_4,
         VAR_6->transfer_buffer,
         VAR_6->transfer_buffer_length,
         (VAR_6->transfer_flags & VAR_1),
         -1);

 return 0;
}
