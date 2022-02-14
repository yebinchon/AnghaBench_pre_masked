
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct usb_cdc_ncm_ndp16 {int wLength; } ;
struct usb_cdc_ncm_dpe16 {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct usbnet* FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int ,int ,char*,int) ;
 int VAR_2 ;

int FUNC_3(struct sk_buff *VAR_3, int VAR_4)
{
 struct usbnet *VAR_5 = FUNC_1(VAR_3->dev);
 struct usb_cdc_ncm_ndp16 *VAR_6;
 int VAR_7 = -VAR_0;

 if ((VAR_4 + sizeof(struct usb_cdc_ncm_ndp16)) > VAR_3->len) {
  FUNC_2(VAR_5, VAR_2, VAR_5->net, "invalid NDP offset  <%u>\n",
     VAR_4);
  goto error;
 }
 VAR_6 = (struct usb_cdc_ncm_ndp16 *)(VAR_3->data + VAR_4);

 if (FUNC_0(VAR_6->wLength) < VAR_1) {
  FUNC_2(VAR_5, VAR_2, VAR_5->net, "invalid DPT16 length <%u>\n",
     FUNC_0(VAR_6->wLength));
  goto error;
 }

 VAR_7 = ((FUNC_0(VAR_6->wLength) -
     sizeof(struct usb_cdc_ncm_ndp16)) /
     sizeof(struct usb_cdc_ncm_dpe16));
 VAR_7--;

 if ((sizeof(struct usb_cdc_ncm_ndp16) +
      VAR_7 * (sizeof(struct usb_cdc_ncm_dpe16))) > VAR_3->len) {
  FUNC_2(VAR_5, VAR_2, VAR_5->net, "Invalid nframes = %d\n", VAR_7);
  VAR_7 = -VAR_0;
 }

error:
 return VAR_7;
}
