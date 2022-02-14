
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct usb_cdc_ncm_nth16 {scalar_t__ dwSignature; int wNdpIndex; int wSequence; int wBlockLength; } ;
struct usb_cdc_ncm_ndp16 {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; int dev; } ;
struct cdc_ncm_ctx {int rx_max; int rx_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct usbnet* FUNC_3 (int ) ;
 int FUNC_4 (struct usbnet*,int ,int ,char*,...) ;
 int VAR_2 ;

int FUNC_5(struct cdc_ncm_ctx *VAR_3, struct sk_buff *VAR_4)
{
 struct usbnet *VAR_5 = FUNC_3(VAR_4->dev);
 struct usb_cdc_ncm_nth16 *VAR_6;
 int VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_3 == ((void*)0))
  goto error;

 if (VAR_4->len < (sizeof(struct usb_cdc_ncm_nth16) +
     sizeof(struct usb_cdc_ncm_ndp16))) {
  FUNC_4(VAR_5, VAR_2, VAR_5->net, "frame too short\n");
  goto error;
 }

 VAR_6 = (struct usb_cdc_ncm_nth16 *)VAR_4->data;

 if (VAR_6->dwSignature != FUNC_0(VAR_1)) {
  FUNC_4(VAR_5, VAR_2, VAR_5->net,
     "invalid NTH16 signature <%#010x>\n",
     FUNC_2(VAR_6->dwSignature));
  goto error;
 }

 VAR_7 = FUNC_1(VAR_6->wBlockLength);
 if (VAR_7 > VAR_3->rx_max) {
  FUNC_4(VAR_5, VAR_2, VAR_5->net,
     "unsupported NTB block length %u/%u\n", VAR_7,
     VAR_3->rx_max);
  goto error;
 }

 if ((VAR_3->rx_seq + 1) != FUNC_1(VAR_6->wSequence) &&
     (VAR_3->rx_seq || FUNC_1(VAR_6->wSequence)) &&
     !((VAR_3->rx_seq == 0xffff) && !FUNC_1(VAR_6->wSequence))) {
  FUNC_4(VAR_5, VAR_2, VAR_5->net,
     "sequence number glitch prev=%d curr=%d\n",
     VAR_3->rx_seq, FUNC_1(VAR_6->wSequence));
 }
 VAR_3->rx_seq = FUNC_1(VAR_6->wSequence);

 VAR_8 = FUNC_1(VAR_6->wNdpIndex);
error:
 return VAR_8;
}
