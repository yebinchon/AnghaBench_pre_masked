
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_ctrlrequest {int bRequestType; int wIndex; } ;
struct mv_udc {int remote_wakeup; int ep0_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct mv_udc*) ;
 int FUNC_1 (struct mv_udc*,int,int) ;
 int FUNC_2 (struct mv_udc*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct mv_udc *VAR_15, u8 VAR_16,
 struct usb_ctrlrequest *VAR_17)
{
 u16 VAR_18 = 0;
 int VAR_19;

 if ((VAR_17->bRequestType & (VAR_5 | VAR_13))
  != (VAR_5 | VAR_14))
  return;

 if ((VAR_17->bRequestType & VAR_12) == VAR_9) {
  VAR_18 = 1 << VAR_4;
  VAR_18 |= VAR_15->remote_wakeup << VAR_3;
 } else if ((VAR_17->bRequestType & VAR_12)
   == VAR_11) {

  VAR_18 = 0;
 } else if ((VAR_17->bRequestType & VAR_12)
   == VAR_10) {
  u8 VAR_20, VAR_21;

  VAR_20 = VAR_17->wIndex & VAR_8;
  VAR_21 = (VAR_17->wIndex & VAR_6)
    ? VAR_1 : VAR_2;
  VAR_18 = FUNC_1(VAR_15, VAR_20, VAR_21)
    << VAR_7;
 }

 VAR_19 = FUNC_2(VAR_15, VAR_1, VAR_18, 0);
 if (VAR_19)
  FUNC_0(VAR_15);
 else
  VAR_15->ep0_state = VAR_0;
}
