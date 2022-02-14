
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct smtcfb_info {int chip_id; TYPE_3__* fb; int lfb; } ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {int smem_start; int id; int smem_len; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_6__ {TYPE_2__ fix; int screen_base; TYPE_1__ var; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct smtcfb_info *VAR_2,
    struct pci_dev *VAR_3, u_long VAR_4)
{
 VAR_2->fb->fix.smem_start = FUNC_1(VAR_3, 0);

 if (VAR_2->chip_id == 0x720)

  VAR_2->fb->fix.smem_start += 0x00200000;


 if (VAR_2->fb->var.bits_per_pixel == 32)
  VAR_2->fb->fix.smem_start += VAR_1;

 VAR_2->fb->fix.smem_len = VAR_4;

 VAR_2->fb->screen_base = VAR_2->lfb;

 if (!VAR_2->fb->screen_base) {
  FUNC_0(&VAR_3->dev,
   "%s: unable to map screen memory\n", VAR_2->fb->fix.id);
  return -VAR_0;
 }

 return 0;
}
