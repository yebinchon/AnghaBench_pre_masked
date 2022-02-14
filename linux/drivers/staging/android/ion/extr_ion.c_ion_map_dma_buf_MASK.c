
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct ion_dma_buf_attachment {struct sg_table* table; } ;
struct dma_buf_attachment {int dev; struct ion_dma_buf_attachment* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static struct sg_table *FUNC_2(struct dma_buf_attachment *VAR_1,
     enum dma_data_direction VAR_2)
{
 struct ion_dma_buf_attachment *VAR_3 = VAR_1->priv;
 struct sg_table *VAR_4;

 VAR_4 = VAR_3->table;

 if (!FUNC_1(VAR_1->dev, VAR_4->sgl, VAR_4->nents,
   VAR_2))
  return FUNC_0(-VAR_0);

 return VAR_4;
}
