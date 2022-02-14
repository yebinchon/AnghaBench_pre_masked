
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_1__* intf; scalar_t__* data; } ;
struct cdc_ncm_ctx {TYPE_3__* func_desc; TYPE_2__* mbim_desc; } ;
struct TYPE_6__ {int bmNetworkCapabilities; } ;
struct TYPE_5__ {int bmNetworkCapabilities; } ;
struct TYPE_4__ {int cur_altsetting; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct usbnet *VAR_0)
{
 struct cdc_ncm_ctx *VAR_1 = (struct cdc_ncm_ctx *)VAR_0->data[0];

 if (FUNC_0(VAR_0->intf->cur_altsetting) && VAR_1->mbim_desc)
  return VAR_1->mbim_desc->bmNetworkCapabilities;
 if (VAR_1->func_desc)
  return VAR_1->func_desc->bmNetworkCapabilities;
 return 0;
}
