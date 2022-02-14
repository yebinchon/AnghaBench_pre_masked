
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct msb_data {int pages_in_block; scalar_t__ page_size; } ;


 int FUNC_0 (struct msb_data*,int,int,struct scatterlist*,int) ;

__attribute__((used)) static int FUNC_1(struct msb_data *VAR_0, int VAR_1,
  int VAR_2, struct scatterlist *VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 *VAR_5 = 0;

 while (VAR_7 < VAR_4) {

  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7);
  if (VAR_6)
   return VAR_6;

  VAR_7 += VAR_0->page_size;
  *VAR_5 += VAR_0->page_size;

  VAR_2++;
  if (VAR_2 == VAR_0->pages_in_block) {
   VAR_2 = 0;
   VAR_1++;
  }
 }
 return 0;
}
