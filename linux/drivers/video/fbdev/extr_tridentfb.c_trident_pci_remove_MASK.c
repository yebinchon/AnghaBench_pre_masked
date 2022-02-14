
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tridentfb_par {int io_virt; int ddc_adapter; scalar_t__ ddc_registered; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int addr; } ;
struct fb_info {int cmap; TYPE_1__ pixmap; int screen_base; struct tridentfb_par* par; } ;
struct TYPE_4__ {int mmio_len; int mmio_start; int smem_len; int smem_start; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct fb_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_5(VAR_1);
 struct tridentfb_par *VAR_3 = VAR_2->par;

 FUNC_7(VAR_2);
 if (VAR_3->ddc_registered)
  FUNC_2(&VAR_3->ddc_adapter);
 FUNC_3(VAR_3->io_virt);
 FUNC_3(VAR_2->screen_base);
 FUNC_6(VAR_0.smem_start, VAR_0.smem_len);
 FUNC_6(VAR_0.mmio_start, VAR_0.mmio_len);
 FUNC_4(VAR_2->pixmap.addr);
 FUNC_0(&VAR_2->cmap);
 FUNC_1(VAR_2);
}
