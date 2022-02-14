
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scatterlist {int dummy; } ;
struct msb_data {int pages_in_block; int page_size; int block_size; int block_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct msb_data*,int ,int,int *,struct scatterlist*,int) ;
 scalar_t__ FUNC_1 (struct scatterlist*,int,int ,int ) ;
 int FUNC_2 (struct scatterlist*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct msb_data *VAR_1, u16 VAR_2,
    struct scatterlist *VAR_3, int VAR_4)
{
 struct scatterlist VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_2(&VAR_5, VAR_1->block_buffer, VAR_1->block_size);

 while (VAR_6 < VAR_1->pages_in_block) {

  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6,
    ((void*)0), &VAR_5, VAR_6 * VAR_1->page_size);
  if (VAR_7)
   return VAR_7;
  VAR_6++;
 }

 if (FUNC_1(VAR_3, VAR_4,
    VAR_1->block_buffer, VAR_1->block_size))
  return -VAR_0;
 return 0;
}
