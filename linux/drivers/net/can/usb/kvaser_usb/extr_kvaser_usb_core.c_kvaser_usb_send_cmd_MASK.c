
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvaser_usb {TYPE_1__* bulk_out; int udev; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*,int,int*,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const struct kvaser_usb *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;

 return FUNC_0(VAR_1->udev,
       FUNC_1(VAR_1->udev,
         VAR_1->bulk_out->bEndpointAddress),
       VAR_2, VAR_3, &VAR_4, VAR_0);
}
