
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sstfb_par {int vgapass; struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;
struct fb_info {struct sstfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fb_info*,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5( struct fb_info *VAR_4, int VAR_5 )
{
 struct sstfb_par *VAR_6 = VAR_4->par;
 struct pci_dev *VAR_7 = VAR_6->dev;
 u32 VAR_8, VAR_9;

 VAR_5 = VAR_5 ? 1:0;
 if (VAR_6->vgapass == VAR_5)
  return;
 VAR_6->vgapass = VAR_5;

 FUNC_1(VAR_7, VAR_3, &VAR_9);
 FUNC_2(VAR_7, VAR_3,
          VAR_9 | VAR_2 );
 VAR_8 = FUNC_3 (VAR_1);
 if (VAR_6->vgapass) {
  FUNC_4(VAR_1, VAR_8 & ~VAR_0);
  FUNC_0(VAR_4, "Enabling VGA pass-through\n");
 } else {
  FUNC_4(VAR_1, VAR_8 | VAR_0);
  FUNC_0(VAR_4, "Disabling VGA pass-through\n");
 }
 FUNC_2(VAR_7, VAR_3, VAR_9);
}
