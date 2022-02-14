
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {struct nfs_page* wb_this_page; int wb_flags; struct nfs_page* wb_head; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static bool
FUNC_4(struct nfs_page *VAR_1, unsigned int VAR_2)
{
 struct nfs_page *VAR_3 = VAR_1->wb_head;
 struct nfs_page *VAR_4;

 FUNC_0(!FUNC_3(VAR_0, &VAR_3->wb_flags));
 FUNC_0(FUNC_2(VAR_2, &VAR_1->wb_flags));

 VAR_4 = VAR_1->wb_this_page;
 while (VAR_4 != VAR_1) {
  if (!FUNC_3(VAR_2, &VAR_4->wb_flags))
   return 0;
  VAR_4 = VAR_4->wb_this_page;
 }


 VAR_4 = VAR_1;
 do {
  FUNC_1(VAR_2, &VAR_4->wb_flags);
  VAR_4 = VAR_4->wb_this_page;
 } while (VAR_4 != VAR_1);

 return 1;
}
