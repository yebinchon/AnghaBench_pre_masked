
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct fw_desc {scalar_t__ len; int * v_addr; int p_addr; } ;


 int FUNC_0 (int *,scalar_t__,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct pci_dev *VAR_0, struct fw_desc *VAR_1)
{
 if (VAR_1->v_addr)
  FUNC_0(&VAR_0->dev, VAR_1->len, VAR_1->v_addr,
      VAR_1->p_addr);
 VAR_1->v_addr = ((void*)0);
 VAR_1->len = 0;
}
