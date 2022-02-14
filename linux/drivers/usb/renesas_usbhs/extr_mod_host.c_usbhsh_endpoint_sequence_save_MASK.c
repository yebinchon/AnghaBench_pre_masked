
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsh_hpriv {int dummy; } ;
struct usbhs_pkt {scalar_t__ zero; } ;
struct urb {int actual_length; int pipe; int dev; TYPE_1__* ep; } ;
struct TYPE_2__ {int desc; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usbhsh_hpriv *VAR_0,
       struct urb *VAR_1,
       struct usbhs_pkt *VAR_2)
{
 int VAR_3 = VAR_1->actual_length;
 int VAR_4 = FUNC_1(&VAR_1->ep->desc);
 int VAR_5 = 0;


 if (FUNC_2(VAR_1->pipe))
  return;
 VAR_5 = VAR_3 / VAR_4;
 if (VAR_3 % VAR_4)
  VAR_5++;
 if (VAR_2->zero)
  VAR_5++;
 VAR_5 %= 2;

 if (VAR_5)
  FUNC_0(VAR_1->dev,
        FUNC_3(VAR_1->pipe),
        FUNC_4(VAR_1->pipe));
}
