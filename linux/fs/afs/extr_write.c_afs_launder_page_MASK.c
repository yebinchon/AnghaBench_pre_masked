
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; struct address_space* mapping; } ;
struct afs_vnode {int cache; } ;
struct address_space {int host; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct page*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct address_space*,int ,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int ,struct page*) ;
 int FUNC_8 (int ,struct page*) ;
 unsigned long FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (struct afs_vnode*,int ,int ,unsigned long) ;
 int FUNC_12 (char*) ;

int FUNC_13(struct page *VAR_3)
{
 struct address_space *VAR_4 = VAR_3->mapping;
 struct afs_vnode *VAR_5 = FUNC_0(VAR_4->host);
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 0;

 FUNC_4("{%lx}", VAR_3->index);

 VAR_6 = FUNC_9(VAR_3);
 if (FUNC_6(VAR_3)) {
  VAR_7 = 0;
  VAR_8 = VAR_2;
  if (FUNC_3(VAR_3)) {
   VAR_7 = VAR_6 & VAR_0;
   VAR_8 = VAR_6 >> VAR_1;
  }

  FUNC_11(VAR_5, FUNC_12("launder"),
         VAR_3->index, VAR_6);
  VAR_9 = FUNC_5(VAR_4, VAR_3->index, VAR_3->index, VAR_8, VAR_7);
 }

 FUNC_11(VAR_5, FUNC_12("laundered"),
        VAR_3->index, VAR_6);
 FUNC_10(VAR_3, 0);
 FUNC_1(VAR_3);







 return VAR_9;
}
