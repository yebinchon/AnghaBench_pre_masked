
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vme_dma_pattern {void* type; void* pattern; } ;
struct vme_dma_attr {void* private; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dma_attr*) ;
 void* FUNC_1 (int,int ) ;

struct vme_dma_attr *FUNC_2(u32 VAR_2, u32 VAR_3)
{
 struct vme_dma_attr *VAR_4;
 struct vme_dma_pattern *VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto err_attr;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto err_pat;

 VAR_4->type = VAR_1;
 VAR_4->private = (void *)VAR_5;

 VAR_5->pattern = VAR_2;
 VAR_5->type = VAR_3;

 return VAR_4;

err_pat:
 FUNC_0(VAR_4);
err_attr:
 return ((void*)0);
}
