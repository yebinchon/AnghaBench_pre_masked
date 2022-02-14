
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_page {scalar_t__ wb_nio; } ;
struct nfs_direct_req {scalar_t__ flags; } ;
struct nfs_commit_info {TYPE_2__* mds; } ;
struct TYPE_6__ {int next; } ;
struct TYPE_4__ {int tk_status; } ;
struct nfs_commit_data {TYPE_3__ pages; TYPE_1__ task; struct nfs_direct_req* dreq; } ;
struct TYPE_5__ {int rpcs_out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct nfs_direct_req*,struct nfs_commit_data*) ;
 int FUNC_3 (struct nfs_direct_req*) ;
 int FUNC_4 (struct nfs_commit_info*,struct nfs_direct_req*) ;
 struct nfs_page* FUNC_5 (int ) ;
 int FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (struct nfs_page*,int *,struct nfs_commit_info*,int ) ;
 int FUNC_8 (struct nfs_page*) ;
 int FUNC_9 (struct nfs_page*) ;

__attribute__((used)) static void FUNC_10(struct nfs_commit_data *VAR_1)
{
 struct nfs_direct_req *VAR_2 = VAR_1->dreq;
 struct nfs_commit_info VAR_3;
 struct nfs_page *VAR_4;
 int VAR_5 = VAR_1->task.tk_status;

 FUNC_4(&VAR_3, VAR_2);
 if (VAR_5 < 0 || FUNC_2(VAR_2, VAR_1))
  VAR_2->flags = VAR_0;

 while (!FUNC_1(&VAR_1->pages)) {
  VAR_4 = FUNC_5(VAR_1->pages.next);
  FUNC_6(VAR_4);
  if (VAR_2->flags == VAR_0) {




   VAR_4->wb_nio = 0;

   FUNC_7(VAR_4, ((void*)0), &VAR_3, 0);
  } else
   FUNC_8(VAR_4);
  FUNC_9(VAR_4);
 }

 if (FUNC_0(&VAR_3.mds->rpcs_out))
  FUNC_3(VAR_2);
}
