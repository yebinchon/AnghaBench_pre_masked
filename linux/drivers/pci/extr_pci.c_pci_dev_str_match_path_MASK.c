
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct pci_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char*,char*,int*,int*,...) ;
 char* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_3, const char *VAR_4,
      const char **VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 char *VAR_11, *VAR_12;
 char VAR_13;

 *VAR_5 = FUNC_6(VAR_4, ';');

 VAR_11 = FUNC_2(VAR_4, *VAR_5 - VAR_4, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 while (1) {
  VAR_12 = FUNC_7(VAR_11, '/');
  if (!VAR_12)
   break;
  VAR_6 = FUNC_5(VAR_12, "/%x.%x%c", &VAR_9, &VAR_10, &VAR_13);
  if (VAR_6 != 2) {
   VAR_6 = -VAR_0;
   goto free_and_exit;
  }

  if (VAR_3->devfn != FUNC_0(VAR_9, VAR_10)) {
   VAR_6 = 0;
   goto free_and_exit;
  }







  VAR_3 = FUNC_4(VAR_3);
  if (!VAR_3) {
   VAR_6 = 0;
   goto free_and_exit;
  }

  *VAR_12 = 0;
 }

 VAR_6 = FUNC_5(VAR_11, "%x:%x:%x.%x%c", &VAR_7, &VAR_8, &VAR_9,
       &VAR_10, &VAR_13);
 if (VAR_6 != 4) {
  VAR_7 = 0;
  VAR_6 = FUNC_5(VAR_11, "%x:%x.%x%c", &VAR_8, &VAR_9, &VAR_10, &VAR_13);
  if (VAR_6 != 3) {
   VAR_6 = -VAR_0;
   goto free_and_exit;
  }
 }

 VAR_6 = (VAR_7 == FUNC_3(VAR_3->bus) &&
        VAR_8 == VAR_3->bus->number &&
        VAR_3->devfn == FUNC_0(VAR_9, VAR_10));

free_and_exit:
 FUNC_1(VAR_11);
 return VAR_6;
}
