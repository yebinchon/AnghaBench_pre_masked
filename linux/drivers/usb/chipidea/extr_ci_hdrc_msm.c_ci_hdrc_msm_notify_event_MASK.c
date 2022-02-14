
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct ci_hdrc_msm {int hsic; scalar_t__ base; int secondary_phy; } ;
struct ci_hdrc {int phy; TYPE_3__* platdata; TYPE_1__* dev; } ;
struct TYPE_5__ {int edev; } ;
struct TYPE_6__ {TYPE_2__ vbus_extcon; } ;
struct TYPE_4__ {struct device* parent; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*) ;
 struct ci_hdrc_msm* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ci_hdrc*) ;
 int FUNC_4 (struct ci_hdrc*,int ,int ,int ) ;
 int FUNC_5 (struct ci_hdrc*,int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ci_hdrc *VAR_10, unsigned VAR_11)
{
 struct device *VAR_12 = VAR_10->dev->parent;
 struct ci_hdrc_msm *VAR_13 = FUNC_2(VAR_12);
 int VAR_14;

 switch (VAR_11) {
 case 129:
  FUNC_1(VAR_12, "CI_HDRC_CONTROLLER_RESET_EVENT received\n");

  FUNC_3(VAR_10);
  if (VAR_13->secondary_phy) {
   u32 VAR_15 = FUNC_10(VAR_13->base + VAR_5);
   VAR_15 |= VAR_2;
   FUNC_11(VAR_15, VAR_13->base + VAR_5);
  }

  VAR_14 = FUNC_7(VAR_10->phy);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_9(VAR_10->phy);
  if (VAR_14) {
   FUNC_6(VAR_10->phy);
   return VAR_14;
  }


  FUNC_5(VAR_10, VAR_1, 0xffffffff, 0x8);


  FUNC_5(VAR_10, VAR_3,
    VAR_7, 0);

  if (!VAR_13->hsic)
   FUNC_5(VAR_10, VAR_4,
     VAR_8, 0);

  if (!FUNC_0(VAR_10->platdata->vbus_extcon.edev)) {
   FUNC_5(VAR_10, VAR_4,
     VAR_6,
     VAR_6);
   FUNC_4(VAR_10, VAR_9, VAR_0,
     VAR_0);

  }
  break;
 case 128:
  FUNC_1(VAR_12, "CI_HDRC_CONTROLLER_STOPPED_EVENT received\n");
  FUNC_8(VAR_10->phy);
  FUNC_6(VAR_10->phy);
  break;
 default:
  FUNC_1(VAR_12, "unknown ci_hdrc event\n");
  break;
 }

 return 0;
}
