
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vme_dma_vme {unsigned long long address; void* dwidth; void* cycle; void* aspace; } ;
struct vme_dma_attr {void* private; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dma_attr*) ;
 void* FUNC_1 (int,int ) ;

struct vme_dma_attr *FUNC_2(unsigned long long VAR_2,
 u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct vme_dma_attr *VAR_6;
 struct vme_dma_vme *VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  goto err_attr;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  goto err_vme;

 VAR_6->type = VAR_1;
 VAR_6->private = (void *)VAR_7;

 VAR_7->address = VAR_2;
 VAR_7->aspace = VAR_3;
 VAR_7->cycle = VAR_4;
 VAR_7->dwidth = VAR_5;

 return VAR_6;

err_vme:
 FUNC_0(VAR_6);
err_attr:
 return ((void*)0);
}
