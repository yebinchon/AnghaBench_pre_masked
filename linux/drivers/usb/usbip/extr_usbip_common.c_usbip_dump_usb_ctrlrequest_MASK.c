
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wIndex; int wValue; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct usb_ctrlrequest *VAR_5)
{
 if (!VAR_5) {
  FUNC_0("       : null pointer\n");
  return;
 }

 FUNC_0("       ");
 FUNC_0("bRequestType(%02X) bRequest(%02X) wValue(%04X) wIndex(%04X) wLength(%04X) ",
   VAR_5->bRequestType, VAR_5->bRequest,
   VAR_5->wValue, VAR_5->wIndex, VAR_5->wLength);
 FUNC_0("\n       ");

 if ((VAR_5->bRequestType & VAR_1) == VAR_3) {
  FUNC_0("STANDARD ");
  switch (VAR_5->bRequest) {
  case 134:
   FUNC_0("GET_STATUS\n");
   break;
  case 138:
   FUNC_0("CLEAR_FEAT\n");
   break;
  case 130:
   FUNC_0("SET_FEAT\n");
   break;
  case 133:
   FUNC_0("SET_ADDRRS\n");
   break;
  case 136:
   FUNC_0("GET_DESCRI\n");
   break;
  case 131:
   FUNC_0("SET_DESCRI\n");
   break;
  case 137:
   FUNC_0("GET_CONFIG\n");
   break;
  case 132:
   FUNC_0("SET_CONFIG\n");
   break;
  case 135:
   FUNC_0("GET_INTERF\n");
   break;
  case 129:
   FUNC_0("SET_INTERF\n");
   break;
  case 128:
   FUNC_0("SYNC_FRAME\n");
   break;
  default:
   FUNC_0("REQ(%02X)\n", VAR_5->bRequest);
   break;
  }
  FUNC_1(VAR_5->bRequestType);
 } else if ((VAR_5->bRequestType & VAR_1) == VAR_0) {
  FUNC_0("CLASS\n");
 } else if ((VAR_5->bRequestType & VAR_1) == VAR_4) {
  FUNC_0("VENDOR\n");
 } else if ((VAR_5->bRequestType & VAR_1) == VAR_2) {
  FUNC_0("RESERVED\n");
 }
}
