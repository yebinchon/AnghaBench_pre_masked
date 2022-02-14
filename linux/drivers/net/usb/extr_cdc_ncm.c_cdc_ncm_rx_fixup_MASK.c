
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; scalar_t__* data; } ;
struct usb_cdc_ncm_ndp16 {scalar_t__ dwSignature; int wNextNdpIndex; struct usb_cdc_ncm_dpe16* dpe16; } ;
struct usb_cdc_ncm_dpe16 {int wDatagramLength; int wDatagramIndex; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct cdc_ncm_ctx {int rx_max; int rx_ntbs; int rx_overhead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct cdc_ncm_ctx*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 struct sk_buff* FUNC_5 (int ,int) ;
 int FUNC_6 (struct usbnet*,int ,int ,char*,int,...) ;
 int VAR_2 ;
 int FUNC_7 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_8 (struct usbnet*,struct sk_buff*) ;

int FUNC_9(struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 struct cdc_ncm_ctx *VAR_6 = (struct cdc_ncm_ctx *)VAR_3->data[0];
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct usb_cdc_ncm_ndp16 *VAR_11;
 struct usb_cdc_ncm_dpe16 *VAR_12;
 int VAR_13;
 int VAR_14 = 50;
 u32 VAR_15 = 0;

 VAR_13 = FUNC_1(VAR_6, VAR_4);
 if (VAR_13 < 0)
  goto error;

next_ndp:
 VAR_8 = FUNC_0(VAR_4, VAR_13);
 if (VAR_8 < 0)
  goto error;

 VAR_11 = (struct usb_cdc_ncm_ndp16 *)(VAR_4->data + VAR_13);

 if (VAR_11->dwSignature != FUNC_2(VAR_1)) {
  FUNC_6(VAR_3, VAR_2, VAR_3->net,
     "invalid DPT16 signature <%#010x>\n",
     FUNC_4(VAR_11->dwSignature));
  goto err_ndp;
 }
 VAR_12 = VAR_11->dpe16;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_12++) {
  VAR_10 = FUNC_3(VAR_12->wDatagramIndex);
  VAR_7 = FUNC_3(VAR_12->wDatagramLength);





  if ((VAR_10 == 0) || (VAR_7 == 0)) {
   if (!VAR_9)
    goto err_ndp;
   break;
  }


  if (((VAR_10 + VAR_7) > VAR_4->len) ||
    (VAR_7 > VAR_6->rx_max) || (VAR_7 < VAR_0)) {
   FUNC_6(VAR_3, VAR_2, VAR_3->net,
      "invalid frame detected (ignored) offset[%u]=%u, length=%u, skb=%p\n",
      VAR_9, VAR_10, VAR_7, VAR_4);
   if (!VAR_9)
    goto err_ndp;
   break;

  } else {

   VAR_5 = FUNC_5(VAR_3->net, VAR_7);
   if (!VAR_5)
    goto error;
   FUNC_7(VAR_5, VAR_4->data + VAR_10, VAR_7);
   FUNC_8(VAR_3, VAR_5);
   VAR_15 += VAR_7;
  }
 }
err_ndp:

 VAR_13 = FUNC_3(VAR_11->wNextNdpIndex);
 if (VAR_13 && VAR_14--)
  goto next_ndp;


 VAR_6->rx_overhead += VAR_4->len - VAR_15;
 VAR_6->rx_ntbs++;

 return 1;
error:
 return 0;
}
