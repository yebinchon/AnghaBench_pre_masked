
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cdns3_endpoint {int const type; int num; int dir; int interval; int trb_burst_size; int name; struct cdns3_device* cdns3_dev; } ;
struct TYPE_3__ {int speed; } ;
struct cdns3_device {int dev; TYPE_2__* regs; TYPE_1__ gadget; int dev_ver; } ;
struct TYPE_4__ {int ep_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;


 int const VAR_5 ;



 int FUNC_5 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_6 (struct cdns3_device*,int,int) ;
 int FUNC_7 (struct cdns3_device*,int) ;
 int FUNC_8 (int ,char*,int ,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int,int *) ;

void FUNC_11(struct cdns3_endpoint *VAR_6)
{
 bool VAR_7 = (VAR_6->type == VAR_5);
 struct cdns3_device *VAR_8 = VAR_6->cdns3_dev;
 u32 VAR_9 = VAR_6->num | VAR_6->dir;
 u32 VAR_10 = 0;
 u8 VAR_11 = 0;
 u32 VAR_12 = 0;
 u8 VAR_13;
 u8 VAR_14 = 0;
 int VAR_15;

 VAR_13 = VAR_0 - 1;

 FUNC_5(VAR_8, VAR_6);

 switch (VAR_6->type) {
 case 131:
  VAR_12 = FUNC_1(131);

  if ((VAR_8->dev_ver == VAR_3 && !VAR_6->dir) ||
      VAR_8->dev_ver > VAR_3)
   VAR_12 |= VAR_4;
  break;
 case 132:
  VAR_12 = FUNC_1(132);

  if ((VAR_8->dev_ver == VAR_3 && !VAR_6->dir) ||
      VAR_8->dev_ver > VAR_3)
   VAR_12 |= VAR_4;
  break;
 default:
  VAR_12 = FUNC_1(VAR_5);
  VAR_14 = VAR_1 - 1;
  VAR_13 = VAR_14 + 1;
 }

 switch (VAR_8->gadget.speed) {
 case 130:
  VAR_10 = VAR_7 ? 1023 : 64;
  break;
 case 129:
  VAR_10 = VAR_7 ? 1024 : 512;
  break;
 case 128:

  VAR_14 = 0;
  VAR_10 = 1024;
  if (VAR_6->type == VAR_5) {
   VAR_11 = VAR_2 - 1;
   VAR_13 = (VAR_14 + 1) *
        (VAR_11 + 1);

   if (VAR_6->interval > 1)
    VAR_13++;
  } else {
   VAR_11 = VAR_0 - 1;
  }
  break;
 default:

  return;
 }

 if (VAR_10 == 1024)
  VAR_6->trb_burst_size = 128;
 else if (VAR_10 >= 512)
  VAR_6->trb_burst_size = 64;
 else
  VAR_6->trb_burst_size = 16;

 VAR_15 = FUNC_6(VAR_8, VAR_13 + 1,
          !!VAR_6->dir);
 if (VAR_15) {
  FUNC_9(VAR_8->dev, "onchip mem is full, ep is invalid\n");
  return;
 }

 VAR_12 |= FUNC_3(VAR_10) |
    FUNC_4(VAR_14) |
    FUNC_0(VAR_13) |
    FUNC_2(VAR_11);

 FUNC_7(VAR_8, VAR_9);
 FUNC_10(VAR_12, &VAR_8->regs->ep_cfg);

 FUNC_8(VAR_8->dev, "Configure %s: with val %08x\n",
  VAR_6->name, VAR_12);
}
