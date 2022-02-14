
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bRequest; } ;
struct igorplugusb {int dev; TYPE_2__* urb; TYPE_1__ request; } ;
struct TYPE_4__ {scalar_t__ transfer_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct igorplugusb *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_1->request.bRequest = VAR_2;
 VAR_1->urb->transfer_flags = 0;
 VAR_3 = FUNC_1(VAR_1->urb, VAR_0);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "submit urb failed: %d", VAR_3);
}
