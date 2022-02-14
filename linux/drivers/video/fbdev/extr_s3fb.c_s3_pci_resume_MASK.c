
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fb_info {scalar_t__ ref_count; int open_lock; } ;
struct pci_dev {int dummy; } ;
struct fb_info {int device; struct s3fb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct fb_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 struct fb_info* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct fb_info*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev* VAR_1)
{
 struct fb_info *VAR_2 = FUNC_8(VAR_1);
 struct s3fb_info *VAR_3 = VAR_2->par;
 int VAR_4;

 FUNC_3(VAR_2->device, "resume\n");

 FUNC_0();
 FUNC_5(&(VAR_3->open_lock));

 if (VAR_3->ref_count == 0) {
  FUNC_6(&(VAR_3->open_lock));
  FUNC_1();
  return 0;
 }

 FUNC_11(VAR_1, VAR_0);
 FUNC_9(VAR_1);
 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4) {
  FUNC_6(&(VAR_3->open_lock));
  FUNC_1();
  FUNC_2(VAR_2->device, "error %d enabling device for resume\n", VAR_4);
  return VAR_4;
 }
 FUNC_10(VAR_1);

 FUNC_12(VAR_2);
 FUNC_4(VAR_2, 0);

 FUNC_6(&(VAR_3->open_lock));
 FUNC_1();

 return 0;
}
