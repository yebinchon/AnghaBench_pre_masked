
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(const char *VAR_12, struct pci_dev *VAR_13)
{
 unsigned int VAR_14 = VAR_9;
 u8 VAR_15 = 0;
 u8 VAR_16;


 if (VAR_11 & VAR_5) {
  FUNC_2("quirk: PCIPCI_TRITON -- set TBFX\n");
  VAR_15 |= VAR_1;
 }
 if (VAR_11 & VAR_4) {
  FUNC_2("quirk: PCIPCI_NATOMA -- set TBFX\n");
  VAR_15 |= VAR_1;
 }
 if (VAR_11 & VAR_6) {
  FUNC_2("quirk: PCIPCI_VIAETBF -- set TBFX\n");
  VAR_15 |= VAR_1;
 }
 if (VAR_11 & VAR_7) {
  FUNC_2("quirk: PCIPCI_VSFX -- set VSFX\n");
  VAR_15 |= VAR_2;
 }
 if (VAR_10 != VAR_9)
  VAR_14 = VAR_10;


 if (VAR_15) {
  FUNC_0(VAR_13, VAR_0, &VAR_16);
  VAR_16 |= VAR_15;
  FUNC_1(VAR_13, VAR_0, VAR_16);
 }
 if (VAR_14 != VAR_9) {
  FUNC_2("setting pci latency timer to %d\n", VAR_10);
  FUNC_1(VAR_13, VAR_8, VAR_10);
 }
 return 0;
}
