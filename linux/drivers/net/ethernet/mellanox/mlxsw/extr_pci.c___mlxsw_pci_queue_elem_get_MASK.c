
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; } ;
struct mlxsw_pci_queue {TYPE_1__ mem_item; } ;



__attribute__((used)) static char *FUNC_0(struct mlxsw_pci_queue *VAR_0,
     size_t VAR_1, int VAR_2)
{
 return VAR_0->mem_item.buf + (VAR_1 * VAR_2);
}
