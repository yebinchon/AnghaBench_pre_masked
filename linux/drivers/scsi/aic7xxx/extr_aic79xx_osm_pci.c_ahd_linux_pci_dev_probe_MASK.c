
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int devfn; struct device dev; } ;
struct ahd_softc {int features; struct pci_dev* dev_softc; int flags; } ;
struct ahd_pci_identity {int dummy; } ;
typedef int dma_addr_t ;
typedef struct pci_dev* ahd_dev_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ahd_softc* FUNC_2 (int *,char*) ;
 struct ahd_pci_identity* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int *) ;
 int FUNC_10 (struct ahd_softc*,struct ahd_pci_identity const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (struct device*) ;
 scalar_t__ FUNC_12 (struct device*,scalar_t__ const) ;
 char* FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,struct ahd_softc*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (char*,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_18(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 char VAR_9[80];
 struct ahd_softc *VAR_10;
 ahd_dev_softc_t VAR_11;
 const struct ahd_pci_identity *VAR_12;
 char *VAR_13;
 int VAR_14;
 struct device *VAR_15 = &VAR_7->dev;

 VAR_11 = VAR_7;
 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12 == ((void*)0))
  return (-VAR_3);






 FUNC_17(VAR_9, "ahd_pci:%d:%d:%d",
  FUNC_5(VAR_11),
  FUNC_7(VAR_11),
  FUNC_6(VAR_11));
 VAR_13 = FUNC_13(VAR_9, VAR_5);
 if (VAR_13 == ((void*)0))
  return (-VAR_4);
 VAR_10 = FUNC_2(((void*)0), VAR_13);
 if (VAR_10 == ((void*)0))
  return (-VAR_4);
 if (FUNC_14(VAR_7)) {
  FUNC_4(VAR_10);
  return (-VAR_3);
 }
 FUNC_16(VAR_7);

 if (sizeof(dma_addr_t) > 4) {
  const u64 VAR_16 = FUNC_11(VAR_15);

  if (VAR_16 > FUNC_0(39) &&
      FUNC_12(VAR_15, FUNC_0(64)) == 0)
   VAR_10->flags |= VAR_1;
  else if (VAR_16 > FUNC_0(32) &&
    FUNC_12(VAR_15, FUNC_0(39)) == 0)
   VAR_10->flags |= VAR_0;
  else
   FUNC_12(VAR_15, FUNC_0(32));
 } else {
  FUNC_12(VAR_15, FUNC_0(32));
 }
 VAR_10->dev_softc = VAR_11;
 VAR_14 = FUNC_10(VAR_10, VAR_12);
 if (VAR_14 != 0) {
  FUNC_4(VAR_10);
  return (-VAR_14);
 }





 if ((VAR_10->features & VAR_2) && FUNC_1(VAR_7->devfn) != 0)
  FUNC_8(VAR_10);

 FUNC_15(VAR_7, VAR_10);

 FUNC_9(VAR_10, &VAR_6);
 return (0);
}
