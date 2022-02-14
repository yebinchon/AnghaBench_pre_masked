
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int bRequestType; int wLength; int wIndex; int wValue; } ;
struct nbu2ss_udc {int ep0_buf; TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct nbu2ss_udc*,int ,int ) ;
 int FUNC_1 (struct nbu2ss_udc*,scalar_t__) ;
 int FUNC_2 (struct nbu2ss_udc*,scalar_t__,int) ;
 int FUNC_3 (struct nbu2ss_udc*,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct nbu2ss_udc *VAR_6, bool VAR_7)
{
 u8 VAR_8 = (u8)(VAR_6->ctrl.bRequestType & VAR_5);
 u8 VAR_9 = (u8)(VAR_6->ctrl.bRequestType & VAR_2);
 u16 VAR_10 = FUNC_4(VAR_6->ctrl.wValue);
 u16 VAR_11 = FUNC_4(VAR_6->ctrl.wIndex);
 u8 VAR_12;
 int VAR_13 = -VAR_1;

 if ((VAR_6->ctrl.wLength != 0x0000) ||
     (VAR_9 != VAR_3)) {
  return -VAR_0;
 }

 switch (VAR_8) {
 case 129:
  if (VAR_7)
   VAR_13 =
   FUNC_3(VAR_6, VAR_10, VAR_11);
  break;

 case 128:
  if (0x0000 == (VAR_11 & 0xFF70)) {
   if (VAR_10 == VAR_4) {
    VAR_12 = VAR_11 & 0xFF;
    if (!VAR_7) {
     FUNC_1(VAR_6,
              VAR_12);
    }

    FUNC_2(VAR_6, VAR_12, VAR_7);

    VAR_13 = 0;
   }
  }
  break;

 default:
  break;
 }

 if (VAR_13 >= 0)
  FUNC_0(VAR_6, VAR_6->ep0_buf, 0);

 return VAR_13;
}
