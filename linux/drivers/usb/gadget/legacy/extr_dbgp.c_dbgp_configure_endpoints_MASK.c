
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_16__ {int bDebugOutEndpoint; int bDebugInEndpoint; } ;
struct TYPE_15__ {TYPE_4__* gadget; TYPE_3__* serial; TYPE_2__* o_ep; TYPE_1__* i_ep; } ;
struct TYPE_14__ {int bEndpointAddress; void* wMaxPacketSize; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_12__ {TYPE_2__* out; TYPE_1__* in; } ;
struct TYPE_11__ {TYPE_5__* desc; } ;
struct TYPE_10__ {TYPE_5__* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 TYPE_9__ VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 TYPE_5__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 void* FUNC_2 (struct usb_gadget*,TYPE_5__*) ;
 int FUNC_3 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_6);

 VAR_3.i_ep = FUNC_2(VAR_6, &VAR_4);
 if (!VAR_3.i_ep) {
  VAR_7 = 1;
  goto fail_1;
 }

 VAR_4.wMaxPacketSize =
  FUNC_0(VAR_1);

 VAR_3.o_ep = FUNC_2(VAR_6, &VAR_5);
 if (!VAR_3.o_ep) {
  VAR_7 = 2;
  goto fail_1;
 }

 VAR_5.wMaxPacketSize =
  FUNC_0(VAR_1);

 VAR_2.bDebugInEndpoint = VAR_4.bEndpointAddress;
 VAR_2.bDebugOutEndpoint = VAR_5.bEndpointAddress;
 return 0;

fail_1:
 FUNC_1(&VAR_3.gadget->dev, "ep config: failure (%d)\n", VAR_7);
 return -VAR_0;
}
