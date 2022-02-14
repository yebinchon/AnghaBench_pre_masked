
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int data; } ;
struct wusb_cbaf_cc_data {TYPE_2__ CDID; TYPE_1__ CHID; int BandGroups; int CK; } ;
struct device {int dummy; } ;
struct cbaf {TYPE_5__* usb_iface; int usb_dev; int host_band_groups; int ck; TYPE_2__ cdid; TYPE_1__ chid; struct wusb_cbaf_cc_data* buffer; } ;
struct TYPE_10__ {TYPE_4__* cur_altsetting; struct device dev; } ;
struct TYPE_8__ {int bInterfaceNumber; } ;
struct TYPE_9__ {TYPE_3__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wusb_cbaf_cc_data VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,struct wusb_cbaf_cc_data*,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cbaf *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_6->usb_iface->dev;
 struct wusb_cbaf_cc_data *VAR_9;

 VAR_9 = VAR_6->buffer;
 *VAR_9 = VAR_5;
 VAR_9->CHID = VAR_6->chid;
 VAR_9->CDID = VAR_6->cdid;
 VAR_9->CK = VAR_6->ck;
 VAR_9->BandGroups = FUNC_0(VAR_6->host_band_groups);

 FUNC_1(VAR_8, "Trying to upload CC:\n");
 FUNC_1(VAR_8, "  CHID       %16ph\n", VAR_9->CHID.data);
 FUNC_1(VAR_8, "  CDID       %16ph\n", VAR_9->CDID.data);
 FUNC_1(VAR_8, "  Bandgroups 0x%04x\n", VAR_6->host_band_groups);

 VAR_7 = FUNC_2(
  VAR_6->usb_dev, FUNC_3(VAR_6->usb_dev, 0),
  VAR_0,
  VAR_2 | VAR_4 | VAR_3,
  0x0201, VAR_6->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  VAR_9, sizeof(*VAR_9), VAR_1);

 return VAR_7;
}
