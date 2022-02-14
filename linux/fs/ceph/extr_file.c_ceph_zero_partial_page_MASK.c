
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ,int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int,unsigned int) ;

__attribute__((used)) static inline void FUNC_5(
 struct inode *VAR_2, loff_t VAR_3, unsigned VAR_4)
{
 struct page *VAR_5;
 pgoff_t VAR_6 = VAR_3 >> VAR_0;

 VAR_5 = FUNC_0(VAR_2->i_mapping, VAR_6);
 if (VAR_5) {
  FUNC_3(VAR_5);
  FUNC_4(VAR_5, VAR_3 & (VAR_1 - 1), VAR_4);
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
 }
}
