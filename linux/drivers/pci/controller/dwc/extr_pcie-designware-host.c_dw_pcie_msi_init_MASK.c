
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pcie_port {scalar_t__ msi_data; int * msi_page; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct device*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct pcie_port*,int ,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 struct dw_pcie* FUNC_7 (struct pcie_port*) ;
 int FUNC_8 (scalar_t__) ;

void FUNC_9(struct pcie_port *VAR_5)
{
 struct dw_pcie *VAR_6 = FUNC_7(VAR_5);
 struct device *VAR_7 = VAR_6->dev;
 u64 VAR_8;

 VAR_5->msi_page = FUNC_1(VAR_1);
 VAR_5->msi_data = FUNC_3(VAR_7, VAR_5->msi_page, 0, VAR_2,
        VAR_0);
 if (FUNC_4(VAR_7, VAR_5->msi_data)) {
  FUNC_2(VAR_7, "Failed to map MSI data\n");
  FUNC_0(VAR_5->msi_page);
  VAR_5->msi_page = ((void*)0);
  return;
 }
 VAR_8 = (u64)VAR_5->msi_data;


 FUNC_5(VAR_5, VAR_4, 4,
       FUNC_6(VAR_8));
 FUNC_5(VAR_5, VAR_3, 4,
       FUNC_8(VAR_8));
}
