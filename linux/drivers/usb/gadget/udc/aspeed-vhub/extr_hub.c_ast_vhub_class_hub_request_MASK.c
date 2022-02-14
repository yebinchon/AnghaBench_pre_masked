
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wIndex; int wValue; } ;
struct ast_vhub_ep {int dummy; } ;
typedef enum std_req_rc { ____Placeholder_std_req_rc } std_req_rc ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ast_vhub_ep*,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct ast_vhub_ep*,int,int) ;
 int FUNC_2 (struct ast_vhub_ep*,int) ;
 int FUNC_3 (struct ast_vhub_ep*,int,int) ;
 int FUNC_4 (struct ast_vhub_ep*,int,int) ;
 int FUNC_5 (struct ast_vhub_ep*,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

enum std_req_rc FUNC_7(struct ast_vhub_ep *VAR_5,
        struct usb_ctrlrequest *VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_6(VAR_6->wValue);
 VAR_8 = FUNC_6(VAR_6->wIndex);
 VAR_9 = FUNC_6(VAR_6->wLength);

 switch ((VAR_6->bRequestType << 8) | VAR_6->bRequest) {
 case 134:
  FUNC_0(VAR_5, "GetHubStatus\n");
  return FUNC_5(VAR_5, 0, 0, 0, 0);
 case 133:
  FUNC_0(VAR_5, "GetPortStatus(%d)\n", VAR_8 & 0xff);
  return FUNC_2(VAR_5, VAR_8 & 0xf);
 case 135:
  if (VAR_7 != (VAR_2 << 8))
   return VAR_4;
  FUNC_0(VAR_5, "GetHubDescriptor(%d)\n", VAR_8 & 0xff);
  return FUNC_3(VAR_5, VAR_2, VAR_9);
 case 130:
 case 138:
  FUNC_0(VAR_5, "Get/SetHubFeature(%d)\n", VAR_7);

  if (VAR_7 == VAR_0 ||
      VAR_7 == VAR_1)
   return VAR_3;
  return VAR_4;
 case 129:
  FUNC_0(VAR_5, "SetPortFeature(%d,%d)\n", VAR_8 & 0xf, VAR_7);
  return FUNC_4(VAR_5, VAR_8 & 0xf, VAR_7);
 case 137:
  FUNC_0(VAR_5, "ClearPortFeature(%d,%d)\n", VAR_8 & 0xf, VAR_7);
  return FUNC_1(VAR_5, VAR_8 & 0xf, VAR_7);
 case 136:
 case 131:
 case 128:
  return VAR_3;
 case 132:
  return FUNC_5(VAR_5, 0, 0, 0, 0);
 default:
  FUNC_0(VAR_5, "Unknown class request\n");
 }
 return VAR_4;
}
