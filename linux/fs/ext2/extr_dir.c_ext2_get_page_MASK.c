
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (struct address_space*,unsigned long,int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct page * FUNC_9(struct inode *VAR_1, unsigned long VAR_2,
       int VAR_3)
{
 struct address_space *VAR_4 = VAR_1->i_mapping;
 struct page *VAR_5 = FUNC_7(VAR_4, VAR_2, ((void*)0));
 if (!FUNC_1(VAR_5)) {
  FUNC_6(VAR_5);
  if (FUNC_8(!FUNC_2(VAR_5))) {
   if (FUNC_3(VAR_5) || !FUNC_4(VAR_5, VAR_3))
    goto fail;
  }
 }
 return VAR_5;

fail:
 FUNC_5(VAR_5);
 return FUNC_0(-VAR_0);
}
