
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int loff_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,int ,int *) ;

struct page *FUNC_3(struct inode *VAR_0, loff_t VAR_1)
{
 struct page *VAR_2 = FUNC_2(VAR_0->i_mapping, VAR_1, ((void*)0));
 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_2);
 return VAR_2;
}
