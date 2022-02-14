
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int length; } ;
struct rd_dev_sg_table {scalar_t__ page_end_offset; scalar_t__ page_start_offset; scalar_t__ rd_sg_count; struct scatterlist* sg_table; } ;
struct rd_dev {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int ,int ) ;
 struct scatterlist* FUNC_1 (scalar_t__,int,int ) ;
 unsigned char* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (unsigned char*,unsigned char,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct scatterlist*,struct page*) ;
 int FUNC_7 (struct scatterlist*,scalar_t__,struct scatterlist*) ;
 int FUNC_8 (struct scatterlist*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct rd_dev *VAR_4, struct rd_dev_sg_table *VAR_5,
     u32 VAR_6, unsigned char VAR_7)
{
 u32 VAR_8 = 0, VAR_9, VAR_10 = 0, VAR_11;
 u32 VAR_12 = (VAR_3 /
    sizeof(struct scatterlist));
 struct page *VAR_13;
 struct scatterlist *VAR_14;
 unsigned char *VAR_15;

 while (VAR_6) {
  unsigned int VAR_16 = 0;

  VAR_11 = (VAR_6 > VAR_12) ?
   VAR_12 : VAR_6;




  if (VAR_11 < VAR_6)
   VAR_16 = 1;

  VAR_14 = FUNC_1(VAR_11 + VAR_16, sizeof(*VAR_14),
    VAR_1);
  if (!VAR_14)
   return -VAR_0;

  FUNC_8(VAR_14, VAR_11 + VAR_16);

  if (VAR_8 > 0) {
   FUNC_7(VAR_5[VAR_8 - 1].sg_table,
     VAR_12 + 1, VAR_14);
  }

  VAR_5[VAR_8].sg_table = VAR_14;
  VAR_5[VAR_8].rd_sg_count = VAR_11;
  VAR_5[VAR_8].page_start_offset = VAR_10;
  VAR_5[VAR_8++].page_end_offset = (VAR_10 + VAR_11)
      - 1;

  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
   VAR_13 = FUNC_0(VAR_1, 0);
   if (!VAR_13) {
    FUNC_5("Unable to allocate scatterlist"
     " pages for struct rd_dev_sg_table\n");
    return -VAR_0;
   }
   FUNC_6(&VAR_14[VAR_9], VAR_13);
   VAR_14[VAR_9].length = VAR_2;

   VAR_15 = FUNC_2(VAR_13);
   FUNC_4(VAR_15, VAR_7, VAR_2);
   FUNC_3(VAR_13);
  }

  VAR_10 += VAR_11;
  VAR_6 -= VAR_11;
 }

 return 0;
}
