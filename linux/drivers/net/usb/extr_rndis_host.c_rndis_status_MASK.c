
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct urb {int status; int actual_length; } ;


 int FUNC_0 (int ,char*,int ,int ) ;

void FUNC_1(struct usbnet *VAR_0, struct urb *VAR_1)
{
 FUNC_0(VAR_0->net, "rndis status urb, len %d stat %d\n",
     VAR_1->actual_length, VAR_1->status);


}
