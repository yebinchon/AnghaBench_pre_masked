
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct scatterlist {size_t rd_sg_count; struct scatterlist* sg_table; } ;
struct rd_dev_sg_table {size_t rd_sg_count; struct rd_dev_sg_table* sg_table; } ;
struct rd_dev {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct scatterlist*) ;
 struct page* FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static u32 FUNC_3(struct rd_dev *VAR_0, struct rd_dev_sg_table *VAR_1,
     u32 VAR_2)
{
 struct page *VAR_3;
 struct scatterlist *VAR_4;
 u32 VAR_5, VAR_6, VAR_7 = 0, VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_1[VAR_5].sg_table;
  VAR_8 = VAR_1[VAR_5].rd_sg_count;

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   VAR_3 = FUNC_2(&VAR_4[VAR_6]);
   if (VAR_3) {
    FUNC_0(VAR_3);
    VAR_7++;
   }
  }
  FUNC_1(VAR_4);
 }

 FUNC_1(VAR_1);
 return VAR_7;
}
