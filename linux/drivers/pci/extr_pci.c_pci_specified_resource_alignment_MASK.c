
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,char const*,char const**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char*,int*,int*) ;

__attribute__((used)) static resource_size_t FUNC_8(struct pci_dev *VAR_4,
       bool *VAR_5)
{
 int VAR_6, VAR_7;
 resource_size_t VAR_8 = FUNC_2();
 const char *VAR_9;
 int VAR_10;

 FUNC_5(&VAR_2);
 VAR_9 = VAR_3;
 if (!VAR_9 || !*VAR_9)
  goto out;
 if (FUNC_1(VAR_1)) {
  VAR_8 = 0;
  FUNC_4("PCI: Ignoring requested alignments (PCI_PROBE_ONLY)\n");
  goto out;
 }

 while (*VAR_9) {
  VAR_7 = 0;
  if (FUNC_7(VAR_9, "%d%n", &VAR_6, &VAR_7) == 1 &&
       VAR_9[VAR_7] == '@') {
   VAR_9 += VAR_7 + 1;
  } else {
   VAR_6 = -1;
  }

  VAR_10 = FUNC_0(VAR_4, VAR_9, &VAR_9);
  if (VAR_10 == 1) {
   *VAR_5 = 1;
   if (VAR_6 == -1)
    VAR_8 = VAR_0;
   else
    VAR_8 = 1 << VAR_6;
   break;
  } else if (VAR_10 < 0) {
   FUNC_3("PCI: Can't parse resource_alignment parameter: %s\n",
          VAR_9);
   break;
  }

  if (*VAR_9 != ';' && *VAR_9 != ',') {

   break;
  }
  VAR_9++;
 }
out:
 FUNC_6(&VAR_2);
 return VAR_8;
}
