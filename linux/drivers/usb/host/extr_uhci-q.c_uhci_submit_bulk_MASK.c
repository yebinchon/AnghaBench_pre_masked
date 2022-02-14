
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; } ;
struct uhci_qh {scalar_t__ state; int skel; } ;
struct uhci_hcd {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct uhci_hcd*,struct urb*) ;
 int FUNC_1 (struct uhci_hcd*,struct urb*,struct uhci_qh*) ;

__attribute__((used)) static int FUNC_2(struct uhci_hcd *VAR_4, struct urb *VAR_5,
  struct uhci_qh *VAR_6)
{
 int VAR_7;


 if (VAR_5->dev->speed == VAR_3)
  return -VAR_0;

 if (VAR_6->state != VAR_1)
  VAR_6->skel = VAR_2;
 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7 == 0)
  FUNC_0(VAR_4, VAR_5);
 return VAR_7;
}
