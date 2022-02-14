
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct bgx {scalar_t__ lmac_count; size_t bgx_id; } ;


 int FUNC_0 (struct bgx*,scalar_t__) ;
 int ** VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 struct bgx* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct bgx *VAR_2 = FUNC_2(VAR_1);
 u8 VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->lmac_count; VAR_3++)
  FUNC_0(VAR_2, VAR_3);

 VAR_0[VAR_2->bgx_id] = ((void*)0);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1, ((void*)0));
}
