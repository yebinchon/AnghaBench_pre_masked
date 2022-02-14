
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_page {int wb_flags; struct nfs_page* wb_head; int wb_kref; struct nfs_page* wb_this_page; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int nrequests; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (struct nfs_page*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct nfs_page *VAR_3,
     struct nfs_page *VAR_4,
     struct inode *VAR_5)
{
 while (VAR_3) {
  struct nfs_page *VAR_6 = VAR_3;

  VAR_3 = (VAR_6->wb_this_page == VAR_4) ?
       ((void*)0) : VAR_6->wb_this_page;

  FUNC_1(VAR_4 != VAR_6->wb_head);


  VAR_6->wb_this_page = VAR_6;

  FUNC_3(VAR_1, &VAR_6->wb_flags);


  if (!FUNC_4(&VAR_6->wb_kref)) {

   if (FUNC_8(VAR_2, &VAR_6->wb_flags))
    FUNC_5(VAR_6);
   continue;
  }

  VAR_6->wb_head = VAR_6;

  if (FUNC_8(VAR_0, &VAR_6->wb_flags)) {
   FUNC_6(VAR_6);
   FUNC_2(&FUNC_0(VAR_5)->nrequests);
  }



  FUNC_7(VAR_6);
 }
}
