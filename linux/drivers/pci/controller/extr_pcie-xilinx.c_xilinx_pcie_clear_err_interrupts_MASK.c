
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct device*,char*,unsigned long) ;
 unsigned long FUNC_1 (struct xilinx_pcie_port*,int ) ;
 int FUNC_2 (struct xilinx_pcie_port*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct xilinx_pcie_port *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 unsigned long VAR_6 = FUNC_1(VAR_4, VAR_0);

 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5, "Requester ID %lu\n",
   VAR_6 & VAR_3);
  FUNC_2(VAR_4, VAR_1,
      VAR_0);
 }
}
