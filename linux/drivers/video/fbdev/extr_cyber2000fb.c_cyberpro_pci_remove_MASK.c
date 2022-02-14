
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cfb_info {int region; } ;


 int FUNC_0 (struct cfb_info*) ;
 int FUNC_1 (struct cfb_info*) ;
 struct cfb_info* VAR_0 ;
 int FUNC_2 (int ) ;
 struct cfb_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct cfb_info *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2) {
  FUNC_0(VAR_2);
  FUNC_2(VAR_2->region);
  FUNC_1(VAR_2);

  if (VAR_2 == VAR_0)
   VAR_0 = ((void*)0);

  FUNC_4(VAR_1);
 }
}
