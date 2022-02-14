
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_fw_dump {int cap_mask; struct qlcnic_83xx_dump_template_hdr* tmpl_hdr; } ;
struct qlcnic_hardware_context {struct qlcnic_fw_dump fw_dump; } ;
struct qlcnic_adapter {scalar_t__ fw_version; struct pci_dev* pdev; struct qlcnic_hardware_context* ahw; } ;
struct qlcnic_83xx_dump_template_hdr {int drv_cap_mask; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_83xx_dump_template_hdr*) ;

void FUNC_6(struct qlcnic_adapter *VAR_0)
{
 u32 VAR_1, VAR_2;
 struct qlcnic_hardware_context *VAR_3 = VAR_0->ahw;
 struct qlcnic_fw_dump *VAR_4 = &VAR_3->fw_dump;
 struct pci_dev *VAR_5 = VAR_0->pdev;
 bool VAR_6 = 0;
 int VAR_7;

 VAR_1 = VAR_0->fw_version;
 VAR_2 = FUNC_2(VAR_0);

 if (VAR_4->tmpl_hdr == ((void*)0) || VAR_2 > VAR_1) {
  FUNC_5(VAR_4->tmpl_hdr);

  if (FUNC_3(VAR_0))
   VAR_6 = !FUNC_1(VAR_0);

  VAR_7 = FUNC_4(VAR_0);
  if (VAR_7)
   return;

  FUNC_0(&VAR_5->dev, "Supports FW dump capability\n");





  if (VAR_6) {
   struct qlcnic_83xx_dump_template_hdr *VAR_8;

   VAR_8 = VAR_4->tmpl_hdr;
   VAR_8->drv_cap_mask = 0x1f;
   VAR_4->cap_mask = 0x1f;
   FUNC_0(&VAR_5->dev,
     "Extended iSCSI dump capability and updated capture mask to 0x1f\n");
  }
 }
}
