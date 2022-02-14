
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_flags; struct nfs_page* wb_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct nfs_page *VAR_2)
{
 struct nfs_page *VAR_3 = VAR_2->wb_head;

 FUNC_0(VAR_3 != VAR_3->wb_head);

 FUNC_3();
 FUNC_1(VAR_1, &VAR_3->wb_flags);
 FUNC_2();
 if (!FUNC_4(VAR_0, &VAR_3->wb_flags))
  return;
 FUNC_5(&VAR_3->wb_flags, VAR_1);
}
