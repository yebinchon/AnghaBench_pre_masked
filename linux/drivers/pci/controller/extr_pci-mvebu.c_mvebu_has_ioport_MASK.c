
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pcie_port {int io_target; int io_attr; } ;



__attribute__((used)) static inline bool FUNC_0(struct mvebu_pcie_port *VAR_0)
{
 return VAR_0->io_target != -1 && VAR_0->io_attr != -1;
}
