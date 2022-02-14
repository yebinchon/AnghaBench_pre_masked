
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct scatterlist {int dummy; } ;
struct rd_dev_sg_table {size_t page_start_offset; size_t page_end_offset; } ;
struct rd_dev {size_t sg_prot_count; struct rd_dev_sg_table* sg_prot_array; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;

__attribute__((used)) static struct rd_dev_sg_table *FUNC_1(struct rd_dev *VAR_1, u32 VAR_2)
{
 struct rd_dev_sg_table *VAR_3;
 u32 VAR_4, VAR_5 = (VAR_0 /
    sizeof(struct scatterlist));

 VAR_4 = VAR_2 / VAR_5;
 if (VAR_4 < VAR_1->sg_prot_count) {
  VAR_3 = &VAR_1->sg_prot_array[VAR_4];
  if ((VAR_3->page_start_offset <= VAR_2) &&
       (VAR_3->page_end_offset >= VAR_2))
   return VAR_3;
 }

 FUNC_0("Unable to locate struct prot rd_dev_sg_table for page: %u\n",
   VAR_2);

 return ((void*)0);
}
