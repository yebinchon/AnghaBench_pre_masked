
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct genwqe_dev {int slu_unitcfg; int app_unitcfg; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*,int ,int) ;
 int FUNC_1 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct genwqe_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pci_dev;


 if (((VAR_2->slu_unitcfg & 0xFFFF0ull) >= 0x32000ull) &&
     ((VAR_2->slu_unitcfg & 0xFFFF0ull) <= 0x33250ull)) {
  FUNC_1(&VAR_3->dev,
    "FIRs masked due to bitstream %016llx.%016llx\n",
    VAR_2->slu_unitcfg, VAR_2->app_unitcfg);

  FUNC_0(VAR_2, VAR_1,
    0xFFFFFFFFFFFFFFFFull);

  FUNC_0(VAR_2, VAR_0,
    0x0000000000000000ull);
 }
}
