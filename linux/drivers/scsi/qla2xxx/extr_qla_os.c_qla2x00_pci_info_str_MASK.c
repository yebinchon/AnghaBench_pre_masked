
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int pci_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,char*,char const* const) ;

__attribute__((used)) static char *
FUNC_1(struct scsi_qla_host *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_3->hw;
 static const char *const VAR_7[] = {
  "33", "66", "100", "133",
 };
 uint16_t VAR_8;

 VAR_8 = (VAR_6->pci_attr & (VAR_2 | VAR_0)) >> 9;
 if (VAR_8) {
  FUNC_0(VAR_4, VAR_5, "PCI-X (%s MHz)",
    VAR_7[VAR_8]);
 } else {
  VAR_8 = (VAR_6->pci_attr & VAR_1) >> 8;
  FUNC_0(VAR_4, VAR_5, "PCI (%s MHz)", VAR_7[VAR_8]);
 }

 return VAR_4;
}
