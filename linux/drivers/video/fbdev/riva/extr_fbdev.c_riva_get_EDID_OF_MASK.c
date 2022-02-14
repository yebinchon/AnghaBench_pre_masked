
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riva_par {unsigned char* EDID; } ;
struct pci_dev {int dummy; } ;
struct fb_info {struct riva_par* par; } ;
struct device_node {struct device_node* child; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned char* FUNC_3 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (unsigned char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_0, struct pci_dev *VAR_1)
{
 struct riva_par *VAR_2 = VAR_0->par;
 struct device_node *VAR_3;
 const unsigned char *VAR_4 = ((void*)0);
 const unsigned char *VAR_5 = ((void*)0);
 static char *VAR_6[] = {
  "DFP,EDID", "LCD,EDID", "EDID", "EDID1", "EDID,B", "EDID,A", ((void*)0) };
 int VAR_7;

 FUNC_1();
 VAR_3 = FUNC_4(VAR_1);
 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->child) {
  VAR_5 = FUNC_3(VAR_3, "display-type", ((void*)0));
  if (VAR_5 == ((void*)0))
   continue;
  if (FUNC_5(VAR_5, "LCD", 3) != 0)
   continue;
  for (VAR_7 = 0; VAR_6[VAR_7] != ((void*)0); ++VAR_7) {
   VAR_4 = FUNC_3(VAR_3, VAR_6[VAR_7], ((void*)0));
   if (VAR_4 != ((void*)0)) {
    VAR_2->EDID = (unsigned char *)VAR_4;
    FUNC_0("LCD found.\n");
    return 1;
   }
  }
 }
 FUNC_2();
 return 0;
}
