
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct xilinx_pcie_port*,int ) ;
 int FUNC_2 (struct xilinx_pcie_port*,int,int ) ;
 scalar_t__ FUNC_3 (struct xilinx_pcie_port*) ;

__attribute__((used)) static void FUNC_4(struct xilinx_pcie_port *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;

 if (FUNC_3(VAR_7))
  FUNC_0(VAR_8, "PCIe Link is UP\n");
 else
  FUNC_0(VAR_8, "PCIe Link is DOWN\n");


 FUNC_2(VAR_7, ~VAR_0,
     VAR_4);


 FUNC_2(VAR_7, FUNC_1(VAR_7, VAR_3) &
    VAR_1,
     VAR_3);


 FUNC_2(VAR_7, VAR_2, VAR_4);


 FUNC_2(VAR_7, FUNC_1(VAR_7, VAR_5) |
    VAR_6,
     VAR_5);
}
