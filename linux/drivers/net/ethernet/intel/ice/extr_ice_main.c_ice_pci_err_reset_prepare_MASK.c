
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ice_pf {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_pf*) ;
 int FUNC_1 (struct ice_pf*) ;
 struct ice_pf* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct ice_pf *VAR_4 = FUNC_2(VAR_3);

 if (!FUNC_4(VAR_2, VAR_4->state)) {
  FUNC_1(VAR_4);

  if (!FUNC_4(VAR_1, VAR_4->state)) {
   FUNC_3(VAR_0, VAR_4->state);
   FUNC_0(VAR_4);
  }
 }
}
