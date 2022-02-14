
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_request {int pkt; } ;
struct usbhsh_hpriv {int dummy; } ;
struct usbhs_pipe {int * handler; } ;
struct urb {int transfer_buffer_length; int pipe; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct usbhs_pipe*,int *,int ,int *,int ,int ,int) ;
 int VAR_3 ;
 struct usbhsh_request* FUNC_3 (struct usbhsh_hpriv*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_4(struct usbhsh_hpriv *VAR_4,
         struct urb *VAR_5,
         struct usbhs_pipe *VAR_6,
         gfp_t VAR_7)
{
 struct usbhsh_request *VAR_8;


 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_7);
 if (FUNC_0(!VAR_8))
  return -VAR_0;

 if (FUNC_1(VAR_5->pipe))
  VAR_6->handler = &VAR_1;
 else
  VAR_6->handler = &VAR_2;

 FUNC_2(VAR_6, &VAR_8->pkt,
         VAR_3,
         ((void*)0),
         VAR_5->transfer_buffer_length,
         0, -1);

 return 0;
}
