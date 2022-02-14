
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_page {int wb_kref; int wb_flags; int wb_page; struct nfs_page* wb_head; struct nfs_page* wb_this_page; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int nrequests; } ;
struct TYPE_3__ {struct inode* host; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_7(struct nfs_page *VAR_2, struct nfs_page *VAR_3)
{
 struct inode *VAR_4;
 FUNC_1(VAR_3 == VAR_2);

 if (!VAR_3) {

  VAR_2->wb_head = VAR_2;
  VAR_2->wb_this_page = VAR_2;
 } else {

  FUNC_1(VAR_3->wb_this_page != VAR_3->wb_head);
  FUNC_1(!FUNC_6(VAR_0, &VAR_3->wb_head->wb_flags));
  VAR_2->wb_head = VAR_3->wb_head;
  VAR_2->wb_this_page = VAR_3->wb_this_page;
  VAR_3->wb_this_page = VAR_2;



  FUNC_3(&VAR_2->wb_head->wb_kref);




  if (FUNC_6(VAR_1, &VAR_3->wb_head->wb_flags)) {
   VAR_4 = FUNC_4(VAR_2->wb_page)->host;
   FUNC_5(VAR_1, &VAR_2->wb_flags);
   FUNC_3(&VAR_2->wb_kref);
   FUNC_2(&FUNC_0(VAR_4)->nrequests);
  }
 }
}
