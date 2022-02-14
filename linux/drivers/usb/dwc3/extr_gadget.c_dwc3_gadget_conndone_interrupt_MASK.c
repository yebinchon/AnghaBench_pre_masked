
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int maxpacket; } ;
struct dwc3_ep {int name; TYPE_1__ endpoint; } ;
struct TYPE_7__ {TYPE_2__* ep0; int speed; } ;
struct dwc3 {int speed; scalar_t__ revision; int hird_threshold; int is_utmi_l1_suspend; int dev; struct dwc3_ep** eps; int regs; int lpm_nyet_threshold; scalar_t__ has_lpm_erratum; TYPE_3__ gadget; } ;
struct TYPE_8__ {void* wMaxPacketSize; } ;
struct TYPE_6__ {int maxpacket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dwc3_ep*,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ) ;
 TYPE_4__ VAR_16 ;
 int FUNC_6 (struct dwc3*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static void FUNC_9(struct dwc3 *VAR_17)
{
 struct dwc3_ep *VAR_18;
 int VAR_19;
 u32 VAR_20;
 u8 VAR_21;

 VAR_20 = FUNC_7(VAR_17->regs, VAR_6);
 VAR_21 = VAR_20 & VAR_7;
 VAR_17->speed = VAR_21;
 switch (VAR_21) {
 case 128:
  VAR_16.wMaxPacketSize = FUNC_4(512);
  VAR_17->gadget.ep0->maxpacket = 512;
  VAR_17->gadget.speed = VAR_15;
  break;
 case 129:
  if (VAR_17->revision < VAR_8)
   FUNC_6(VAR_17);

  VAR_16.wMaxPacketSize = FUNC_4(512);
  VAR_17->gadget.ep0->maxpacket = 512;
  VAR_17->gadget.speed = VAR_14;
  break;
 case 131:
  VAR_16.wMaxPacketSize = FUNC_4(64);
  VAR_17->gadget.ep0->maxpacket = 64;
  VAR_17->gadget.speed = VAR_12;
  break;
 case 132:
  VAR_16.wMaxPacketSize = FUNC_4(64);
  VAR_17->gadget.ep0->maxpacket = 64;
  VAR_17->gadget.speed = VAR_11;
  break;
 case 130:
  VAR_16.wMaxPacketSize = FUNC_4(8);
  VAR_17->gadget.ep0->maxpacket = 8;
  VAR_17->gadget.speed = VAR_13;
  break;
 }

 VAR_17->eps[1]->endpoint.maxpacket = VAR_17->gadget.ep0->maxpacket;



 if ((VAR_17->revision > VAR_9) &&
     (VAR_21 != 129) &&
     (VAR_21 != 128)) {
  VAR_20 = FUNC_7(VAR_17->regs, VAR_0);
  VAR_20 |= VAR_1;
  FUNC_8(VAR_17->regs, VAR_0, VAR_20);

  VAR_20 = FUNC_7(VAR_17->regs, VAR_2);
  VAR_20 &= ~(VAR_3 | VAR_4);

  VAR_20 |= FUNC_0(VAR_17->hird_threshold |
         (VAR_17->is_utmi_l1_suspend << 4));







  FUNC_2(VAR_17->revision < VAR_10
    && VAR_17->has_lpm_erratum,
    "LPM Erratum not available on dwc3 revisions < 2.40a\n");

  if (VAR_17->has_lpm_erratum && VAR_17->revision >= VAR_10)
   VAR_20 |= FUNC_1(VAR_17->lpm_nyet_threshold);

  FUNC_8(VAR_17->regs, VAR_2, VAR_20);
 } else {
  VAR_20 = FUNC_7(VAR_17->regs, VAR_2);
  VAR_20 &= ~VAR_3;
  FUNC_8(VAR_17->regs, VAR_2, VAR_20);
 }

 VAR_18 = VAR_17->eps[0];
 VAR_19 = FUNC_3(VAR_18, VAR_5);
 if (VAR_19) {
  FUNC_5(VAR_17->dev, "failed to enable %s\n", VAR_18->name);
  return;
 }

 VAR_18 = VAR_17->eps[1];
 VAR_19 = FUNC_3(VAR_18, VAR_5);
 if (VAR_19) {
  FUNC_5(VAR_17->dev, "failed to enable %s\n", VAR_18->name);
  return;
 }
}
