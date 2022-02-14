
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct fw_desc {int * v_addr; int p_addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct pci_dev *VAR_3, struct fw_desc *VAR_4)
{
 if (!VAR_4->len) {
  VAR_4->v_addr = ((void*)0);
  return -VAR_0;
 }

 VAR_4->v_addr = FUNC_0(&VAR_3->dev, VAR_4->len,
       &VAR_4->p_addr, VAR_2);
 return (VAR_4->v_addr != ((void*)0)) ? 0 : -VAR_1;
}
