
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_dma_pci {int address; } ;
struct vme_dma_attr {void* private; int type; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dma_attr*) ;
 void* FUNC_1 (int,int ) ;

struct vme_dma_attr *FUNC_2(dma_addr_t VAR_2)
{
 struct vme_dma_attr *VAR_3;
 struct vme_dma_pci *VAR_4;



 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto err_attr;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto err_pci;

 VAR_3->type = VAR_1;
 VAR_3->private = (void *)VAR_4;

 VAR_4->address = VAR_2;

 return VAR_3;

err_pci:
 FUNC_0(VAR_3);
err_attr:
 return ((void*)0);
}
