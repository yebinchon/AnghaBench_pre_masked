
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int,char const*,int) ;
 int FUNC_1 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, int VAR_2,
       const char *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
  if (VAR_2 & (1 << VAR_5))
   if (FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4))
    goto err_out;
 return 0;

err_out:
 while (--VAR_5 >= 0)
  if (VAR_2 & (1 << VAR_5))
   FUNC_1(VAR_1, VAR_5);

 return -VAR_0;
}
