
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int ptm_granularity; scalar_t__ ptm_root; } ;
typedef int clock_desc ;


 int FUNC_0 (struct pci_dev*,char*,char*,char*) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 char VAR_1[8];

 switch (VAR_0->ptm_granularity) {
 case 0:
  FUNC_1(VAR_1, sizeof(VAR_1), "unknown");
  break;
 case 255:
  FUNC_1(VAR_1, sizeof(VAR_1), ">254ns");
  break;
 default:
  FUNC_1(VAR_1, sizeof(VAR_1), "%udns",
    VAR_0->ptm_granularity);
  break;
 }
 FUNC_0(VAR_0, "PTM enabled%s, %s granularity\n",
   VAR_0->ptm_root ? " (root)" : "", VAR_1);
}
