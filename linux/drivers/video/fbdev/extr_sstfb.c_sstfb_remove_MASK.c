
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sstfb_par {int mmio_vbase; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int mmio_len; int mmio_start; int smem_start; } ;
struct fb_info {int cmap; TYPE_1__ fix; int screen_base; int dev; struct sstfb_par* par; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ) ;
 struct fb_info* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct sstfb_par *VAR_2;
 struct fb_info *VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 VAR_2 = VAR_3->par;

 FUNC_0(VAR_3->dev, &VAR_0[0]);
 FUNC_6(VAR_3);
 FUNC_3(VAR_3->screen_base);
 FUNC_3(VAR_2->mmio_vbase);
 FUNC_5(VAR_3->fix.smem_start, 0x400000);
 FUNC_5(VAR_3->fix.mmio_start, VAR_3->fix.mmio_len);
 FUNC_1(&VAR_3->cmap);
 FUNC_7(VAR_3);
 FUNC_2(VAR_3);
}
