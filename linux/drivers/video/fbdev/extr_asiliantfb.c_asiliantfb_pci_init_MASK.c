
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; TYPE_1__* resource; } ;
struct fb_info {int * screen_base; int * par; int * pseudo_palette; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info* FUNC_0 (int,int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,unsigned long) ;
 int * FUNC_3 (unsigned long,int) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct pci_dev*,int ) ;
 unsigned long FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,struct fb_info*) ;
 int FUNC_8 (struct pci_dev*,int,int) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (unsigned long,unsigned long,char*) ;
 int FUNC_11 (int,int *) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_4,
          const struct pci_device_id *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 struct fb_info *VAR_8;
 int VAR_9;

 if ((VAR_4->resource[0].flags & VAR_3) == 0)
  return -VAR_1;
 VAR_6 = FUNC_6(VAR_4, 0);
 VAR_7 = FUNC_5(VAR_4, 0);
 if (VAR_6 == 0)
  return -VAR_1;
 if (!FUNC_10(VAR_6, VAR_7, "asiliantfb"))
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(u32) * 16, &VAR_4->dev);
 if (!VAR_8) {
  FUNC_9(VAR_6, VAR_7);
  return -VAR_2;
 }
 VAR_8->pseudo_palette = VAR_8->par;
 VAR_8->par = ((void*)0);

 VAR_8->screen_base = FUNC_3(VAR_6, 0x800000);
 if (VAR_8->screen_base == ((void*)0)) {
  FUNC_9(VAR_6, VAR_7);
  FUNC_1(VAR_8);
  return -VAR_2;
 }

 FUNC_8(VAR_4, 4, 0x02800083);
 FUNC_11(3, VAR_8->screen_base + 0x400784);

 VAR_9 = FUNC_2(VAR_8, VAR_6);
 if (VAR_9) {
  FUNC_4(VAR_8->screen_base);
  FUNC_9(VAR_6, VAR_7);
  FUNC_1(VAR_8);
  return VAR_9;
 }

 FUNC_7(VAR_4, VAR_8);
 return 0;
}
