
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_cdc_ncm_nth16 {void* wNdpIndex; } ;
struct usb_cdc_ncm_ndp16 {scalar_t__ dwSignature; void* wLength; void* wNextNdpIndex; } ;
struct usb_cdc_ncm_dpe16 {int dummy; } ;
struct sk_buff {size_t len; scalar_t__ data; } ;
struct cdc_ncm_ctx {int drvflags; size_t tx_curr_size; size_t max_ndp_size; struct usb_cdc_ncm_ndp16* delayed_ndp16; int tx_ndp_modulus; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ,size_t) ;
 void* FUNC_1 (int) ;
 size_t FUNC_2 (void*) ;
 struct usb_cdc_ncm_ndp16* FUNC_3 (struct sk_buff*,size_t) ;

__attribute__((used)) static struct usb_cdc_ncm_ndp16 *FUNC_4(struct cdc_ncm_ctx *VAR_1, struct sk_buff *VAR_2, __le32 VAR_3, size_t VAR_4)
{
 struct usb_cdc_ncm_ndp16 *VAR_5 = ((void*)0);
 struct usb_cdc_ncm_nth16 *VAR_6 = (void *)VAR_2->data;
 size_t VAR_7 = FUNC_2(VAR_6->wNdpIndex);





 if (VAR_1->drvflags & VAR_0) {
  if (VAR_1->delayed_ndp16->dwSignature == VAR_3)
   return VAR_1->delayed_ndp16;





  else if (VAR_1->delayed_ndp16->dwSignature)
   return ((void*)0);
 }


 while (VAR_7) {
  VAR_5 = (struct usb_cdc_ncm_ndp16 *)(VAR_2->data + VAR_7);
  if (VAR_5->dwSignature == VAR_3)
   return VAR_5;
  VAR_7 = FUNC_2(VAR_5->wNextNdpIndex);
 }


 if (!(VAR_1->drvflags & VAR_0))
  FUNC_0(VAR_2, VAR_1->tx_ndp_modulus, 0, VAR_1->tx_curr_size);


 if ((VAR_1->tx_curr_size - VAR_2->len - VAR_4) < VAR_1->max_ndp_size)
  return ((void*)0);


 if (VAR_5)
  VAR_5->wNextNdpIndex = FUNC_1(VAR_2->len);
 else
  VAR_6->wNdpIndex = FUNC_1(VAR_2->len);


 if (!(VAR_1->drvflags & VAR_0))
  VAR_5 = FUNC_3(VAR_2, VAR_1->max_ndp_size);
 else
  VAR_5 = VAR_1->delayed_ndp16;

 VAR_5->dwSignature = VAR_3;
 VAR_5->wLength = FUNC_1(sizeof(struct usb_cdc_ncm_ndp16) + sizeof(struct usb_cdc_ncm_dpe16));
 return VAR_5;
}
