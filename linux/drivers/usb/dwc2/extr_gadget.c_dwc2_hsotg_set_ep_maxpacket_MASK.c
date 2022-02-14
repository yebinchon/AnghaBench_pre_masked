
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int maxpacket; } ;
struct dwc2_hsotg_ep {int mc; TYPE_1__ ep; } ;
struct dwc2_hsotg {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct dwc2_hsotg*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,unsigned int,int ) ;
 struct dwc2_hsotg_ep* FUNC_6 (struct dwc2_hsotg*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 struct dwc2_hsotg_ep *VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_5);
 if (!VAR_6)
  return;

 if (VAR_2 == 0) {
  u32 VAR_8 = VAR_3;


  VAR_3 = FUNC_3(VAR_8);
  if (VAR_3 > 3)
   goto bad_mps;
  VAR_6->ep.maxpacket = VAR_8;
  VAR_6->mc = 1;
 } else {
  if (VAR_3 > 1024)
   goto bad_mps;
  VAR_6->mc = VAR_4;
  if (VAR_4 > 3)
   goto bad_mps;
  VAR_6->ep.maxpacket = VAR_3;
 }

 if (VAR_5) {
  VAR_7 = FUNC_4(VAR_1, FUNC_0(VAR_2));
  VAR_7 &= ~VAR_0;
  VAR_7 |= VAR_3;
  FUNC_5(VAR_1, VAR_7, FUNC_0(VAR_2));
 } else {
  VAR_7 = FUNC_4(VAR_1, FUNC_1(VAR_2));
  VAR_7 &= ~VAR_0;
  VAR_7 |= VAR_3;
  FUNC_5(VAR_1, VAR_7, FUNC_1(VAR_2));
 }

 return;

bad_mps:
 FUNC_2(VAR_1->dev, "ep%d: bad mps of %d\n", VAR_2, VAR_3);
}
