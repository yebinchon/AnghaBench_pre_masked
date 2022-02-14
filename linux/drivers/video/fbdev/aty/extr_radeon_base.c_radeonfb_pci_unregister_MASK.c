
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeonfb_info {scalar_t__ mon1_modedb; scalar_t__ mon2_EDID; scalar_t__ mon1_EDID; int fb_base; int mmio_base; int wc_cookie; int lvds_timer; int init_state; TYPE_2__* pdev; } ;
struct pci_dev {int dummy; } ;
struct fb_info {int cmap; struct radeonfb_info* par; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 struct fb_info* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct radeonfb_info*) ;
 int FUNC_10 (struct radeonfb_info*,int *,int) ;
 int FUNC_11 (struct radeonfb_info*) ;
 int FUNC_12 (struct radeonfb_info*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct fb_info*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_2)
{
        struct fb_info *VAR_3 = FUNC_7(VAR_2);
        struct radeonfb_info *VAR_4 = VAR_3->par;

        if (!VAR_4)
                return;

 FUNC_12(VAR_4);

 if (VAR_4->mon1_EDID)
  FUNC_13(&VAR_4->pdev->dev.kobj, &VAR_0);
 if (VAR_4->mon2_EDID)
  FUNC_13(&VAR_4->pdev->dev.kobj, &VAR_1);
 FUNC_1(&VAR_4->lvds_timer);
 FUNC_0(VAR_4->wc_cookie);
        FUNC_14(VAR_3);

        FUNC_11(VAR_4);

        FUNC_5(VAR_4->mmio_base);
        FUNC_5(VAR_4->fb_base);

 FUNC_8(VAR_2, 2);
 FUNC_8(VAR_2, 0);

 FUNC_6(VAR_4->mon1_EDID);
 FUNC_6(VAR_4->mon2_EDID);
 if (VAR_4->mon1_modedb)
  FUNC_3(VAR_4->mon1_modedb);



 FUNC_2(&VAR_3->cmap);
        FUNC_4(VAR_3);
}
