
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cb710_chip {int platform_id; int slot_refs_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct cb710_chip*,int ) ;
 int FUNC_3 (int *,int ) ;
 struct cb710_chip* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_4)
{
 struct cb710_chip *VAR_5 = FUNC_4(VAR_4);

 FUNC_2(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_1);
 FUNC_2(VAR_5, VAR_0);




 FUNC_3(&VAR_3, VAR_5->platform_id);
}
