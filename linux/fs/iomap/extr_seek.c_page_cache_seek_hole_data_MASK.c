
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct inode*,struct page*,scalar_t__*,int) ;
 int FUNC_3 (struct pagevec*) ;
 unsigned int FUNC_4 (struct pagevec*,int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct pagevec*) ;

__attribute__((used)) static loff_t
FUNC_6(struct inode *VAR_4, loff_t VAR_5, loff_t VAR_6,
  int VAR_7)
{
 pgoff_t VAR_8 = VAR_5 >> VAR_1;
 pgoff_t VAR_9 = FUNC_0(VAR_5 + VAR_6, VAR_2);
 loff_t VAR_10 = VAR_5;
 struct pagevec VAR_11;

 if (VAR_6 <= 0)
  return -VAR_0;

 FUNC_3(&VAR_11);

 do {
  unsigned VAR_12, VAR_13;

  VAR_12 = FUNC_4(&VAR_11, VAR_4->i_mapping, &VAR_8,
      VAR_9 - 1);
  if (VAR_12 == 0)
   break;

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   struct page *VAR_14 = VAR_11.pages[VAR_13];

   if (FUNC_2(VAR_4, VAR_14, &VAR_10, VAR_7))
    goto check_range;
   VAR_10 = FUNC_1(VAR_14) + VAR_2;
  }
  FUNC_5(&VAR_11);
 } while (VAR_8 < VAR_9);


 if (VAR_7 != VAR_3)
  goto not_found;

check_range:
 if (VAR_10 < VAR_5 + VAR_6)
  goto out;
not_found:
 VAR_10 = -VAR_0;
out:
 FUNC_5(&VAR_11);
 return VAR_10;
}
