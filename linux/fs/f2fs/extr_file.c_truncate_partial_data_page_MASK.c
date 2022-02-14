
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int) ;
 struct page* FUNC_6 (struct inode*,int,int) ;
 int FUNC_7 (struct page*,int) ;
 int FUNC_8 (struct page*,int ,int,int) ;
 struct page* FUNC_9 (struct address_space*,int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int,int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_4, u64 VAR_5,
        bool VAR_6)
{
 loff_t VAR_7 = VAR_5 & (VAR_3 - 1);
 pgoff_t VAR_8 = VAR_5 >> VAR_2;
 struct address_space *VAR_9 = VAR_4->i_mapping;
 struct page *VAR_10;

 if (!VAR_7 && !VAR_6)
  return 0;

 if (VAR_6) {
  VAR_10 = FUNC_9(VAR_9, VAR_8);
  if (VAR_10 && FUNC_4(VAR_10))
   goto truncate_out;
  FUNC_7(VAR_10, 1);
  return 0;
 }

 VAR_10 = FUNC_6(VAR_4, VAR_8, 1);
 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_10) == -VAR_1 ? 0 : FUNC_3(VAR_10);
truncate_out:
 FUNC_8(VAR_10, VAR_0, 1, 1);
 FUNC_11(VAR_10, VAR_7, VAR_3 - VAR_7);


 FUNC_5(FUNC_0(VAR_4), VAR_6 && FUNC_1(VAR_4));
 if (!VAR_6)
  FUNC_10(VAR_10);
 FUNC_7(VAR_10, 1);
 return 0;
}
