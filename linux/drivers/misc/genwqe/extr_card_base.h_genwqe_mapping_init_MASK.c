
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_mapping {int type; int write; } ;
typedef enum dma_mapping_type { ____Placeholder_dma_mapping_type } dma_mapping_type ;


 int FUNC_0 (struct dma_mapping*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct dma_mapping *VAR_0,
           enum dma_mapping_type VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->type = VAR_1;
 VAR_0->write = 1;
}
