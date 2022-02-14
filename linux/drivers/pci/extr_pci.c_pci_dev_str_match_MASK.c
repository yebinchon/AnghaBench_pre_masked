
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned short vendor; unsigned short device; unsigned short subsystem_vendor; unsigned short subsystem_device; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char const*,char const**) ;
 int FUNC_1 (char const*,char*,unsigned short*,unsigned short*,...) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, const char *VAR_2,
        const char **VAR_3)
{
 int VAR_4;
 int VAR_5;
 unsigned short VAR_6, VAR_7, VAR_8, VAR_9;

 if (FUNC_2(VAR_2, "pci:", 4) == 0) {

  VAR_2 += 4;
  VAR_4 = FUNC_1(VAR_2, "%hx:%hx:%hx:%hx%n", &VAR_6, &VAR_7,
        &VAR_8, &VAR_9, &VAR_5);
  if (VAR_4 != 4) {
   VAR_4 = FUNC_1(VAR_2, "%hx:%hx%n", &VAR_6, &VAR_7, &VAR_5);
   if (VAR_4 != 2)
    return -VAR_0;

   VAR_8 = 0;
   VAR_9 = 0;
  }

  VAR_2 += VAR_5;

  if ((!VAR_6 || VAR_6 == VAR_1->vendor) &&
      (!VAR_7 || VAR_7 == VAR_1->device) &&
      (!VAR_8 ||
       VAR_8 == VAR_1->subsystem_vendor) &&
      (!VAR_9 ||
       VAR_9 == VAR_1->subsystem_device))
   goto found;
 } else {




  VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  else if (VAR_4)
   goto found;
 }

 *VAR_3 = VAR_2;
 return 0;

found:
 *VAR_3 = VAR_2;
 return 1;
}
