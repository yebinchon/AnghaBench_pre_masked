
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct gpmi_nand_data {void const* data_buffer_dma; int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scatterlist*,int,int) ;
 int FUNC_1 (struct gpmi_nand_data*,int) ;
 int FUNC_2 (void const*,void const*,int) ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (struct scatterlist*,void const*,int) ;
 scalar_t__ FUNC_5 (void const*) ;

__attribute__((used)) static bool FUNC_6(struct gpmi_nand_data *VAR_1, const void *VAR_2,
        int VAR_3, struct scatterlist *VAR_4,
        enum dma_data_direction VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_1, VAR_3);


 if (FUNC_5(VAR_2) && !FUNC_3(VAR_2)) {
  FUNC_4(VAR_4, VAR_2, VAR_7);
  VAR_6 = FUNC_0(VAR_1->dev, VAR_4, 1, VAR_5);
  if (VAR_6 == 0)
   goto map_fail;

  return 1;
 }

map_fail:

 FUNC_4(VAR_4, VAR_1->data_buffer_dma, VAR_7);

 if (VAR_5 == VAR_0 && VAR_2 != VAR_1->data_buffer_dma)
  FUNC_2(VAR_1->data_buffer_dma, VAR_2, VAR_7);

 FUNC_0(VAR_1->dev, VAR_4, 1, VAR_5);

 return 0;
}
