
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {struct buffer_head* b_this_page; int b_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct page*,unsigned int,int ) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,int ,int,struct buffer_head**) ;
 int FUNC_10 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (struct inode*,struct page*,unsigned int) ;
 struct buffer_head* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct page*,unsigned int,int ) ;

int FUNC_19(struct page *VAR_2, u64 *VAR_3,
     struct inode *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct buffer_head *VAR_9, *VAR_10, *VAR_11[2], **VAR_12 = VAR_11;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15 = FUNC_8(VAR_4);

 if (!FUNC_14(VAR_2))
  FUNC_7(VAR_2, VAR_15, 0);

 VAR_9 = FUNC_13(VAR_2);
 for (VAR_10 = VAR_9, VAR_14 = 0; VAR_10 != VAR_9 || !VAR_14;
      VAR_10 = VAR_10->b_this_page, VAR_14 += VAR_15) {
  VAR_13 = VAR_14 + VAR_15;

  FUNC_6(VAR_10);





  if (VAR_14 >= VAR_6 || VAR_13 <= VAR_5) {
   if (FUNC_0(VAR_2))
    FUNC_16(VAR_10);
   continue;
  }





  if (VAR_7)
   FUNC_15(VAR_10);

  if (!FUNC_2(VAR_10)) {
   FUNC_10(VAR_10, VAR_4->i_sb, *VAR_3);
   FUNC_5(VAR_10);
  }

  if (FUNC_0(VAR_2)) {
   if (!FUNC_4(VAR_10))
    FUNC_16(VAR_10);
  } else if (!FUNC_4(VAR_10) && !FUNC_1(VAR_10) &&
      !FUNC_3(VAR_10) &&
      FUNC_12(VAR_4, VAR_2, VAR_14) &&
      (VAR_14 < VAR_5 || VAR_13 > VAR_6)) {
   FUNC_9(VAR_1, 0, 1, &VAR_10);
   *VAR_12++=VAR_10;
  }

  *VAR_3 = *VAR_3 + 1;
 }




 while(VAR_12 > VAR_11) {
  FUNC_17(*--VAR_12);
  if (!FUNC_4(*VAR_12))
   VAR_8 = -VAR_0;
 }

 if (VAR_8 == 0 || !VAR_7)
  return VAR_8;





 VAR_10 = VAR_9;
 VAR_14 = 0;
 do {
  VAR_13 = VAR_14 + VAR_15;
  if (VAR_13 <= VAR_5)
   goto next_bh;
  if (VAR_14 >= VAR_6)
   break;

  FUNC_18(VAR_2, VAR_14, VAR_10->b_size);
  FUNC_16(VAR_10);
  FUNC_11(VAR_10);

next_bh:
  VAR_14 = VAR_13;
  VAR_10 = VAR_10->b_this_page;
 } while (VAR_10 != VAR_9);

 return VAR_8;
}
