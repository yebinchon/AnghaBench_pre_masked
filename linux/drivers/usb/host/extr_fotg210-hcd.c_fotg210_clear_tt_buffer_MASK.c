
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_device {int dev; } ;
struct urb {TYPE_2__* dev; int pipe; } ;
struct fotg210_qh {int clearing_tt; } ;
struct fotg210_hcd {int dummy; } ;
struct TYPE_7__ {struct usb_device* root_hub; } ;
struct TYPE_8__ {TYPE_3__ self; } ;
struct TYPE_6__ {TYPE_1__* tt; int devnum; int ttport; } ;
struct TYPE_5__ {struct usb_device* hub; } ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_1 (struct fotg210_hcd*) ;
 scalar_t__ FUNC_2 (struct urb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fotg210_hcd *VAR_0,
  struct fotg210_qh *VAR_1, struct urb *VAR_2, u32 VAR_3)
{







 if (VAR_2->dev->tt && !FUNC_4(VAR_2->pipe) && !VAR_1->clearing_tt) {
  struct usb_device *VAR_4 = VAR_2->dev->tt->hub;

  FUNC_0(&VAR_4->dev,
    "clear tt buffer port %d, a%d ep%d t%08x\n",
    VAR_2->dev->ttport, VAR_2->dev->devnum,
    FUNC_3(VAR_2->pipe), VAR_3);

  if (VAR_2->dev->tt->hub !=
    FUNC_1(VAR_0)->self.root_hub) {
   if (FUNC_2(VAR_2) == 0)
    VAR_1->clearing_tt = 1;
  }
 }
}
