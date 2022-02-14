
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3,
     struct page *VAR_4, u64 VAR_5,
     bool VAR_6)
{
 int VAR_7 = 0;

 if (((VAR_5 & (VAR_2 - 1)) || VAR_6) &&
     !FUNC_0(VAR_4)) {
  VAR_7 = FUNC_1(((void*)0), VAR_4);
  if (VAR_7)
   return VAR_7;
  FUNC_2(VAR_4);
  if (!FUNC_0(VAR_4)) {
   FUNC_3(VAR_4);
   return -VAR_1;
  }
  if (VAR_4->mapping != VAR_3->i_mapping) {
   FUNC_3(VAR_4);
   return -VAR_0;
  }
 }
 return 0;
}
