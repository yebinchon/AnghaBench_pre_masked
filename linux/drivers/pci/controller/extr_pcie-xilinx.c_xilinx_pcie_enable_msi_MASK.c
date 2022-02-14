
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {scalar_t__ msi_pages; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct xilinx_pcie_port*,int,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct xilinx_pcie_port *VAR_4)
{
 phys_addr_t VAR_5;

 VAR_4->msi_pages = FUNC_0(VAR_1, 0);
 if (!VAR_4->msi_pages)
  return -VAR_0;

 VAR_5 = FUNC_2((void *)VAR_4->msi_pages);
 FUNC_1(VAR_4, 0x0, VAR_2);
 FUNC_1(VAR_4, VAR_5, VAR_3);

 return 0;
}
