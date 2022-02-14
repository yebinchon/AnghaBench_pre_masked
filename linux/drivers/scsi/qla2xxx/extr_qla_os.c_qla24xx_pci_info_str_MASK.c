
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int pci_attr; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,size_t,char*,...) ;

__attribute__((used)) static char *
FUNC_3(struct scsi_qla_host *VAR_4, char *VAR_5, size_t VAR_6)
{
 static const char *const VAR_7[] = {
  "33", "66", "100", "133",
 };
 struct qla_hw_data *VAR_8 = VAR_4->hw;
 uint32_t VAR_9;

 if (FUNC_0(VAR_8->pdev)) {
  uint32_t VAR_10, VAR_11, VAR_12;
  const char *VAR_13;

  FUNC_1(VAR_8->pdev, VAR_1, &VAR_10);
  VAR_11 = VAR_10 & VAR_3;
  VAR_12 = (VAR_10 & VAR_2) >> 4;

  switch (VAR_11) {
  case 1:
   VAR_13 = "2.5GT/s";
   break;
  case 2:
   VAR_13 = "5.0GT/s";
   break;
  case 3:
   VAR_13 = "8.0GT/s";
   break;
  default:
   VAR_13 = "<unknown>";
   break;
  }
  FUNC_2(VAR_5, VAR_6, "PCIe (%s x%d)", VAR_13, VAR_12);

  return VAR_5;
 }

 VAR_9 = (VAR_8->pci_attr & VAR_0) >> 8;
 if (VAR_9 == 0 || VAR_9 == 8)
  FUNC_2(VAR_5, VAR_6, "PCI (%s MHz)",
    VAR_7[VAR_9 >> 3]);
 else
  FUNC_2(VAR_5, VAR_6, "PCI-X Mode %d (%s MHz)",
    VAR_9 & 4 ? 2 : 1,
    VAR_7[VAR_9 & 3]);

 return VAR_5;
}
