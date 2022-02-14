
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_host_endpoint {struct r8a66597_pipe* hcpriv; } ;
struct urb {int pipe; } ;
struct TYPE_2__ {int pipenum; } ;
struct r8a66597_pipe {TYPE_1__ info; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct urb *VAR_0, struct usb_host_endpoint *VAR_1)
{
 struct r8a66597_pipe *VAR_2 = VAR_1->hcpriv;

 if (FUNC_0(VAR_0->pipe) == 0)
  return 0;
 else
  return VAR_2->info.pipenum;
}
