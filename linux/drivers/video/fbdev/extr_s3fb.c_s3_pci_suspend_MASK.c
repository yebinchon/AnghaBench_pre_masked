
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct s3fb_info {scalar_t__ ref_count; int open_lock; } ;
struct pci_dev {int dummy; } ;
struct fb_info {int device; struct s3fb_info* par; } ;
struct TYPE_4__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fb_info*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*,TYPE_1__) ;
 int FUNC_7 (struct pci_dev*) ;
 struct fb_info* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_11(struct pci_dev* VAR_1, pm_message_t VAR_2)
{
 struct fb_info *VAR_3 = FUNC_8(VAR_1);
 struct s3fb_info *VAR_4 = VAR_3->par;

 FUNC_2(VAR_3->device, "suspend\n");

 FUNC_0();
 FUNC_4(&(VAR_4->open_lock));

 if ((VAR_2.event == VAR_0) || (VAR_4->ref_count == 0)) {
  FUNC_5(&(VAR_4->open_lock));
  FUNC_1();
  return 0;
 }

 FUNC_3(VAR_3, 1);

 FUNC_9(VAR_1);
 FUNC_7(VAR_1);
 FUNC_10(VAR_1, FUNC_6(VAR_1, VAR_2));

 FUNC_5(&(VAR_4->open_lock));
 FUNC_1();

 return 0;
}
