
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {scalar_t__ device; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_17, u8 *VAR_18,
       u8 *VAR_19)
{
 int VAR_20;

 if ((VAR_15 > VAR_4) || (VAR_15 < 1)) {
  FUNC_0(VAR_0, "Requested number of tx fifos "
     "(%d) not supported\n", VAR_15);

  if (VAR_15 < 1)
   VAR_15 = 1;
  else
   VAR_15 = VAR_4;

  FUNC_0(VAR_0, "Default to %d tx fifos\n", VAR_15);
 }

 if (VAR_11)
  *VAR_19 = VAR_11;

 if (VAR_16 && (1 == VAR_15)) {
  if (VAR_16 != VAR_10)
   FUNC_0(VAR_0,
      "Tx steering is not supported with "
      "one fifo. Disabling Tx steering.\n");
  VAR_16 = VAR_6;
 }

 if ((VAR_16 < VAR_6) ||
     (VAR_16 > VAR_10)) {
  FUNC_0(VAR_0,
     "Requested transmit steering not supported\n");
  FUNC_0(VAR_0, "Disabling transmit steering\n");
  VAR_16 = VAR_6;
 }

 if (VAR_13 > VAR_3) {
  FUNC_0(VAR_0,
     "Requested number of rx rings not supported\n");
  FUNC_0(VAR_0, "Default to %d rx rings\n",
     VAR_3);
  VAR_13 = VAR_3;
 }

 if ((*VAR_18 != VAR_1) && (*VAR_18 != VAR_5)) {
  FUNC_0(VAR_0, "Wrong intr_type requested. "
     "Defaulting to INTA\n");
  *VAR_18 = VAR_1;
 }

 if ((*VAR_18 == VAR_5) &&
     ((VAR_17->device != VAR_8) &&
      (VAR_17->device != VAR_7))) {
  FUNC_0(VAR_0, "Xframe I does not support MSI_X. "
     "Defaulting to INTA\n");
  *VAR_18 = VAR_1;
 }

 if ((VAR_12 != 1) && (VAR_12 != 2)) {
  FUNC_0(VAR_0, "Requested ring mode not supported\n");
  FUNC_0(VAR_0, "Defaulting to 1-buffer mode\n");
  VAR_12 = 1;
 }

 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
  if (VAR_14[VAR_20] > VAR_2) {
   FUNC_0(VAR_0, "Requested rx ring size not "
      "supported\nDefaulting to %d\n",
      VAR_2);
   VAR_14[VAR_20] = VAR_2;
  }

 return VAR_9;
}
