
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*,void*,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct page*,struct page*) ;
 int FUNC_11 (struct page*,struct page*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_2, loff_t VAR_3,
      struct inode *VAR_4, loff_t VAR_5,
      loff_t VAR_6, bool *VAR_7)
{
 loff_t VAR_8;
 loff_t VAR_9;
 void *VAR_10;
 void *VAR_11;
 struct page *VAR_12;
 struct page *VAR_13;
 loff_t VAR_14;
 bool VAR_15;
 int VAR_16;

 VAR_16 = -VAR_0;
 VAR_15 = 1;
 while (VAR_6) {
  VAR_8 = VAR_3 & (VAR_1 - 1);
  VAR_9 = VAR_5 & (VAR_1 - 1);
  VAR_14 = FUNC_7(VAR_1 - VAR_8,
         VAR_1 - VAR_9);
  VAR_14 = FUNC_7(VAR_14, VAR_6);
  if (VAR_14 <= 0)
   goto out_error;

  VAR_12 = FUNC_9(VAR_2, VAR_3);
  if (FUNC_0(VAR_12)) {
   VAR_16 = FUNC_1(VAR_12);
   goto out_error;
  }
  VAR_13 = FUNC_9(VAR_4, VAR_5);
  if (FUNC_0(VAR_13)) {
   VAR_16 = FUNC_1(VAR_13);
   FUNC_8(VAR_12);
   goto out_error;
  }

  FUNC_10(VAR_12, VAR_13);






  if (!FUNC_2(VAR_12) || !FUNC_2(VAR_13) ||
      VAR_12->mapping != VAR_2->i_mapping ||
      VAR_13->mapping != VAR_4->i_mapping) {
   VAR_15 = 0;
   goto unlock;
  }

  VAR_10 = FUNC_4(VAR_12);
  VAR_11 = FUNC_4(VAR_13);

  FUNC_3(VAR_12);
  FUNC_3(VAR_13);

  if (FUNC_6(VAR_10 + VAR_8, VAR_11 + VAR_9, VAR_14))
   VAR_15 = 0;

  FUNC_5(VAR_11);
  FUNC_5(VAR_10);
unlock:
  FUNC_11(VAR_12, VAR_13);
  FUNC_8(VAR_13);
  FUNC_8(VAR_12);

  if (!VAR_15)
   break;

  VAR_3 += VAR_14;
  VAR_5 += VAR_14;
  VAR_6 -= VAR_14;
 }

 *VAR_7 = VAR_15;
 return 0;

out_error:
 return VAR_16;
}
