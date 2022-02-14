
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ,int,int *) ;

__attribute__((used)) static struct page *FUNC_5(struct inode *VAR_2, loff_t VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_4(VAR_2->i_mapping, VAR_3 >> VAR_1, ((void*)0));
 if (FUNC_1(VAR_4))
  return VAR_4;
 if (!FUNC_2(VAR_4)) {
  FUNC_3(VAR_4);
  return FUNC_0(-VAR_0);
 }
 return VAR_4;
}
