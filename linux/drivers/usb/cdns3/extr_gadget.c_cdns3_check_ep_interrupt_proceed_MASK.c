
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int address; } ;
struct cdns3_endpoint {int flags; scalar_t__ type; int wa1_set; int dir; TYPE_1__ endpoint; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {scalar_t__ dev_ver; TYPE_2__* regs; } ;
struct TYPE_4__ {int ep_cfg; int ep_sts; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct cdns3_endpoint*) ;
 int FUNC_1 (struct cdns3_endpoint*,int ) ;
 int FUNC_2 (struct cdns3_device*,int ) ;
 int FUNC_3 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_4 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_5 (struct cdns3_endpoint*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct cdns3_endpoint *VAR_13)
{
 struct cdns3_device *VAR_14 = VAR_13->cdns3_dev;
 u32 VAR_15;

 FUNC_2(VAR_14, VAR_13->endpoint.address);

 FUNC_7(VAR_14, VAR_13);

 VAR_15 = FUNC_6(&VAR_14->regs->ep_sts);
 FUNC_8(VAR_15, &VAR_14->regs->ep_sts);

 if (VAR_15 & VAR_11) {
  if (VAR_13->flags & VAR_7 &&
      !(VAR_15 & VAR_8 &&
      VAR_14->dev_ver < VAR_0)) {
   FUNC_0(VAR_13);
  }
  if (VAR_13->type == VAR_12 &&
      !VAR_13->wa1_set) {
   if (!VAR_13->dir) {
    u32 VAR_16 = FUNC_6(&VAR_14->regs->ep_cfg);

    VAR_16 &= ~VAR_1;
    FUNC_8(VAR_16, &VAR_14->regs->ep_cfg);
    VAR_13->flags &= ~VAR_5;
   }
   FUNC_4(VAR_14, VAR_13);
  } else if (!(VAR_13->flags & VAR_6) &&
     !(VAR_13->flags & VAR_7)) {
   if (VAR_13->flags & VAR_2) {
    VAR_13->flags &= ~VAR_2;
    FUNC_3(VAR_14, VAR_13);
   } else {
    FUNC_1(VAR_13,
           VAR_13->wa1_set);
   }
  }
 }

 if ((VAR_15 & VAR_9) || (VAR_15 & VAR_10)) {
  if (VAR_13->flags & VAR_4) {
   if (VAR_15 & VAR_10)
    VAR_13->flags |= VAR_3;
   else
    VAR_13->flags &= ~VAR_3;
  }

  FUNC_4(VAR_14, VAR_13);
 }







 if (VAR_15 & VAR_8 && VAR_14->dev_ver < VAR_0 &&
     !(VAR_13->flags & VAR_6))
  FUNC_5(VAR_13);

 return 0;
}
