
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
typedef int sector_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct page*,unsigned int,int ) ;
 int FUNC_11 (struct inode*,int,struct buffer_head*,int ) ;
 unsigned int FUNC_12 (struct inode*) ;
 struct buffer_head* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_17(struct page *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct inode *VAR_5 = VAR_2->mapping->host;
 sector_t VAR_6;
 struct buffer_head *VAR_7, *VAR_8, *VAR_9[VAR_0];
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0;
 FUNC_0(!FUNC_1(VAR_2));
 FUNC_0(FUNC_3(VAR_2));

 if (FUNC_2(VAR_2))
  return 0;

 VAR_10 = FUNC_12(VAR_5);
 if (!FUNC_14(VAR_2))
  FUNC_10(VAR_2, VAR_10, 0);

 VAR_8 = FUNC_13(VAR_2);
 VAR_6 = (sector_t)VAR_2->index << (VAR_1 - VAR_5->i_blkbits);
 for (VAR_7 = VAR_8, VAR_11 = 0; VAR_7 != VAR_8 || !VAR_11;
      VAR_6++, VAR_11 = VAR_12, VAR_7 = VAR_7->b_this_page) {
  VAR_12 = VAR_11 + VAR_10;
  if (VAR_12 <= VAR_3 || VAR_11 >= VAR_4) {
   if (!FUNC_9(VAR_7))
    VAR_16 = 1;
   continue;
  }
  if (FUNC_9(VAR_7))
   continue;
  if (!FUNC_8(VAR_7)) {
   VAR_14 = FUNC_11(VAR_5, VAR_6, VAR_7, 0);
   if (VAR_14) {
    FUNC_4(VAR_2);
    return VAR_14;
   }
   if (!FUNC_8(VAR_7)) {
    FUNC_16(VAR_2, VAR_11, VAR_10);
    FUNC_15(VAR_7);
    continue;
   }
  }
  FUNC_0(VAR_15 >= VAR_0);
  VAR_9[VAR_15++] = VAR_7;
 }

 if (!VAR_15)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  VAR_7 = VAR_9[VAR_13];
  if (!FUNC_7(VAR_7)) {
   VAR_14 = FUNC_6(VAR_7);
   if (VAR_14)
    return VAR_14;
  }
 }
out:
 if (!VAR_16)
  FUNC_5(VAR_2);
 return 0;
}
