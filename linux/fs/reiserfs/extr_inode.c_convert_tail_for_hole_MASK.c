
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; } ;
struct inode {int i_mapping; } ;
struct buffer_head {int b_size; struct page* b_page; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*,unsigned long,unsigned long) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *,struct page*,unsigned long,unsigned long) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4,
     struct buffer_head *VAR_5,
     loff_t VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct page *VAR_10;
 struct page *VAR_11 = VAR_5->b_page;
 int VAR_12 = 0;

 if ((VAR_6 & (VAR_5->b_size - 1)) != 1)
  return -VAR_0;


 VAR_9 = VAR_6 & (VAR_3 - 1);
 VAR_8 = (VAR_9 | (VAR_5->b_size - 1)) + 1;

 VAR_7 = VAR_6 >> VAR_2;




 if (!VAR_11 || VAR_7 != VAR_11->index) {
  VAR_10 = FUNC_3(VAR_4->i_mapping, VAR_7);
  VAR_12 = -VAR_1;
  if (!VAR_10) {
   goto out;
  }
 } else {
  VAR_10 = VAR_11;
 }
 FUNC_1(VAR_10);
 VAR_12 = FUNC_0(VAR_10, VAR_9,
          VAR_8 - VAR_9);
 if (VAR_12)
  goto unlock;


 FUNC_2(VAR_10);

 VAR_12 = FUNC_5(((void*)0), VAR_10, VAR_9, VAR_8);

unlock:
 if (VAR_10 != VAR_11) {
  FUNC_6(VAR_10);
  FUNC_4(VAR_10);
 }
out:
 return VAR_12;
}
