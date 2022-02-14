
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_1__* intf; scalar_t__* data; } ;
struct cdc_ncm_ctx {TYPE_3__* ether_desc; TYPE_2__* mbim_desc; } ;
struct TYPE_6__ {int wMaxSegmentSize; } ;
struct TYPE_5__ {int wMaxSegmentSize; } ;
struct TYPE_4__ {int cur_altsetting; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct usbnet *VAR_1)
{
 struct cdc_ncm_ctx *VAR_2 = (struct cdc_ncm_ctx *)VAR_1->data[0];

 if (FUNC_0(VAR_1->intf->cur_altsetting) && VAR_2->mbim_desc)
  return FUNC_1(VAR_2->mbim_desc->wMaxSegmentSize);
 if (VAR_2->ether_desc)
  return FUNC_1(VAR_2->ether_desc->wMaxSegmentSize);
 return VAR_0;
}
