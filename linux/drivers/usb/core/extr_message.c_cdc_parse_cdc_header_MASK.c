
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct usb_cdc_union_desc {int dummy; } ;
struct usb_cdc_parsed_header {int phonet_magic_present; struct usb_cdc_ether_desc* usb_cdc_ether_desc; struct usb_cdc_mdlm_desc* usb_cdc_mdlm_desc; struct usb_cdc_mdlm_detail_desc* usb_cdc_mdlm_detail_desc; struct usb_cdc_header_desc* usb_cdc_header_desc; struct usb_cdc_union_desc* usb_cdc_union_desc; struct usb_cdc_mbim_extended_desc* usb_cdc_mbim_extended_desc; struct usb_cdc_mbim_desc* usb_cdc_mbim_desc; struct usb_cdc_ncm_desc* usb_cdc_ncm_desc; struct usb_cdc_dmm_desc* usb_cdc_dmm_desc; struct usb_cdc_call_mgmt_descriptor* usb_cdc_call_mgmt_descriptor; struct usb_cdc_acm_descriptor* usb_cdc_acm_descriptor; struct usb_cdc_country_functional_desc* usb_cdc_country_functional_desc; } ;
struct usb_cdc_ncm_desc {int dummy; } ;
struct usb_cdc_mdlm_detail_desc {int dummy; } ;
struct usb_cdc_mdlm_desc {int dummy; } ;
struct usb_cdc_mbim_extended_desc {int dummy; } ;
struct usb_cdc_mbim_desc {int dummy; } ;
struct usb_cdc_header_desc {int dummy; } ;
struct usb_cdc_ether_desc {int dummy; } ;
struct usb_cdc_dmm_desc {int dummy; } ;
struct usb_cdc_country_functional_desc {int dummy; } ;
struct usb_cdc_call_mgmt_descriptor {int dummy; } ;
struct usb_cdc_acm_descriptor {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,unsigned int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usb_cdc_parsed_header*,int,int) ;

int FUNC_3(struct usb_cdc_parsed_header *VAR_2,
    struct usb_interface *VAR_3,
    u8 *VAR_4,
    int VAR_5)
{

 struct usb_cdc_union_desc *VAR_6 = ((void*)0);


 struct usb_cdc_header_desc *VAR_7 = ((void*)0);
 struct usb_cdc_ether_desc *VAR_8 = ((void*)0);
 struct usb_cdc_mdlm_detail_desc *VAR_9 = ((void*)0);
 struct usb_cdc_mdlm_desc *VAR_10 = ((void*)0);

 unsigned int VAR_11;
 int VAR_12 = 0;

 FUNC_2(VAR_2, 0x00, sizeof(struct usb_cdc_parsed_header));
 VAR_2->phonet_magic_present = 0;
 while (VAR_5 > 0) {
  VAR_11 = VAR_4[0];
  if (!VAR_11) {
   FUNC_1(&VAR_3->dev, "skipping garbage byte\n");
   VAR_11 = 1;
   goto next_desc;
  }
  if ((VAR_5 < VAR_11) || (VAR_11 < 3)) {
   FUNC_1(&VAR_3->dev, "invalid descriptor buffer length\n");
   break;
  }
  if (VAR_4[1] != VAR_1) {
   FUNC_1(&VAR_3->dev, "skipping garbage\n");
   goto next_desc;
  }

  switch (VAR_4[2]) {
  case 128:
   if (VAR_11 < sizeof(struct usb_cdc_union_desc))
    goto next_desc;
   if (VAR_6) {
    FUNC_1(&VAR_3->dev, "More than one union descriptor, skipping ...\n");
    goto next_desc;
   }
   VAR_6 = (struct usb_cdc_union_desc *)VAR_4;
   break;
  case 137:
   if (VAR_11 < sizeof(struct usb_cdc_country_functional_desc))
    goto next_desc;
   VAR_2->usb_cdc_country_functional_desc =
    (struct usb_cdc_country_functional_desc *)VAR_4;
   break;
  case 134:
   if (VAR_11 != sizeof(struct usb_cdc_header_desc))
    goto next_desc;
   if (VAR_7)
    return -VAR_0;
   VAR_7 = (struct usb_cdc_header_desc *)VAR_4;
   break;
  case 139:
   if (VAR_11 < sizeof(struct usb_cdc_acm_descriptor))
    goto next_desc;
   VAR_2->usb_cdc_acm_descriptor =
    (struct usb_cdc_acm_descriptor *)VAR_4;
   break;
  case 135:
   if (VAR_11 != sizeof(struct usb_cdc_ether_desc))
    goto next_desc;
   if (VAR_8)
    return -VAR_0;
   VAR_8 = (struct usb_cdc_ether_desc *)VAR_4;
   break;
  case 138:
   if (VAR_11 < sizeof(struct usb_cdc_call_mgmt_descriptor))
    goto next_desc;
   VAR_2->usb_cdc_call_mgmt_descriptor =
    (struct usb_cdc_call_mgmt_descriptor *)VAR_4;
   break;
  case 136:
   if (VAR_11 < sizeof(struct usb_cdc_dmm_desc))
    goto next_desc;
   VAR_2->usb_cdc_dmm_desc =
    (struct usb_cdc_dmm_desc *)VAR_4;
   break;
  case 130:
   if (VAR_11 < sizeof(struct usb_cdc_mdlm_desc))
    goto next_desc;
   if (VAR_10)
    return -VAR_0;
   VAR_10 = (struct usb_cdc_mdlm_desc *)VAR_4;
   break;
  case 131:
   if (VAR_11 < sizeof(struct usb_cdc_mdlm_detail_desc))
    goto next_desc;
   if (VAR_9)
    return -VAR_0;
   VAR_9 = (struct usb_cdc_mdlm_detail_desc *)VAR_4;
   break;
  case 129:
   if (VAR_11 < sizeof(struct usb_cdc_ncm_desc))
    goto next_desc;
   VAR_2->usb_cdc_ncm_desc = (struct usb_cdc_ncm_desc *)VAR_4;
   break;
  case 132:
   if (VAR_11 < sizeof(struct usb_cdc_mbim_desc))
    goto next_desc;

   VAR_2->usb_cdc_mbim_desc = (struct usb_cdc_mbim_desc *)VAR_4;
   break;
  case 133:
   if (VAR_11 < sizeof(struct usb_cdc_mbim_extended_desc))
    break;
   VAR_2->usb_cdc_mbim_extended_desc =
    (struct usb_cdc_mbim_extended_desc *)VAR_4;
   break;
  case 140:
   VAR_2->phonet_magic_present = 1;
   break;
  default:




   FUNC_0(&VAR_3->dev, "Ignoring descriptor: type %02x, length %ud\n",
     VAR_4[2], VAR_11);
   goto next_desc;
  }
  VAR_12++;
next_desc:
  VAR_5 -= VAR_11;
  VAR_4 += VAR_11;
 }
 VAR_2->usb_cdc_union_desc = VAR_6;
 VAR_2->usb_cdc_header_desc = VAR_7;
 VAR_2->usb_cdc_mdlm_detail_desc = VAR_9;
 VAR_2->usb_cdc_mdlm_desc = VAR_10;
 VAR_2->usb_cdc_ether_desc = VAR_8;
 return VAR_12;
}
