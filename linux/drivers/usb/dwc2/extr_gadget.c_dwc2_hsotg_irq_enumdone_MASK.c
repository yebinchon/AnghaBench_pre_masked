
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int speed; } ;
struct dwc2_hsotg {int num_of_eps; int dev; scalar_t__* eps_out; scalar_t__* eps_in; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*,int,int,int ,int) ;
 int FUNC_4 (struct dwc2_hsotg*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_9)
{
 u32 VAR_10 = FUNC_4(VAR_9, VAR_2);
 int VAR_11 = 0, VAR_12 = 8;







 FUNC_0(VAR_9->dev, "EnumDone (DSTS=0x%08x)\n", VAR_10);
 switch ((VAR_10 & VAR_3) >> VAR_4) {
 case 131:
 case 130:
  VAR_9->gadget.speed = VAR_6;
  VAR_11 = VAR_5;
  VAR_12 = 1023;
  break;

 case 129:
  VAR_9->gadget.speed = VAR_7;
  VAR_11 = VAR_5;
  VAR_12 = 1024;
  break;

 case 128:
  VAR_9->gadget.speed = VAR_8;
  VAR_11 = 8;
  VAR_12 = 8;





  break;
 }
 FUNC_1(VAR_9->dev, "new device is %s\n",
   FUNC_5(VAR_9->gadget.speed));






 if (VAR_11) {
  int VAR_13;

  FUNC_3(VAR_9, 0, VAR_11, 0, 1);
  FUNC_3(VAR_9, 0, VAR_11, 0, 0);
  for (VAR_13 = 1; VAR_13 < VAR_9->num_of_eps; VAR_13++) {
   if (VAR_9->eps_in[VAR_13])
    FUNC_3(VAR_9, VAR_13, VAR_12,
           0, 1);
   if (VAR_9->eps_out[VAR_13])
    FUNC_3(VAR_9, VAR_13, VAR_12,
           0, 0);
  }
 }



 FUNC_2(VAR_9);

 FUNC_0(VAR_9->dev, "EP0: DIEPCTL0=0x%08x, DOEPCTL0=0x%08x\n",
  FUNC_4(VAR_9, VAR_0),
  FUNC_4(VAR_9, VAR_1));
}
