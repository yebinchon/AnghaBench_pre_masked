
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct fb_fix_screeninfo {int mmio_len; int mmio_start; int smem_len; int smem_start; } ;
struct carmine_hw {int v_regs; int screen_mem; TYPE_1__** fb; } ;
struct TYPE_2__ {struct fb_fix_screeninfo fix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct carmine_hw*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct carmine_hw*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct carmine_hw* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_6)
{
 struct carmine_hw *VAR_7 = FUNC_5(VAR_6);
 struct fb_fix_screeninfo VAR_8;
 int VAR_9;


 if (VAR_7->fb[0])
  VAR_8 = VAR_7->fb[0]->fix;
 else
  VAR_8 = VAR_7->fb[1]->fix;


 FUNC_0(VAR_7, VAR_2 + VAR_4, 0);
 FUNC_0(VAR_7, VAR_3 + VAR_4, 0);
 FUNC_0(VAR_7, VAR_0 + VAR_1, 0);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  FUNC_1(VAR_7->fb[VAR_9]);

 FUNC_2(VAR_7->screen_mem);
 FUNC_6(VAR_8.smem_start, VAR_8.smem_len);
 FUNC_2(VAR_7->v_regs);
 FUNC_6(VAR_8.mmio_start, VAR_8.mmio_len);

 FUNC_4(VAR_6);
 FUNC_3(VAR_7);
}
