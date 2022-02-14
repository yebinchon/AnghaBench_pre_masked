
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct nfs_pgio_header {scalar_t__ good_bytes; int (* release ) (struct nfs_pgio_header*) ;int ds_commit_idx; int lseg; TYPE_1__ pages; int flags; struct nfs_direct_req* dreq; } ;
struct nfs_page {int wb_kref; } ;
struct nfs_direct_req {scalar_t__ flags; int lock; } ;
struct nfs_commit_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nfs_direct_req*,struct nfs_pgio_header*) ;
 int FUNC_3 (struct nfs_direct_req*,struct nfs_pgio_header*) ;
 scalar_t__ FUNC_4 (struct nfs_direct_req*,struct nfs_pgio_header*) ;
 int FUNC_5 (struct nfs_direct_req*) ;
 int FUNC_6 (struct nfs_commit_info*,struct nfs_direct_req*) ;
 struct nfs_page* FUNC_7 (int ) ;
 int FUNC_8 (struct nfs_page*) ;
 int FUNC_9 (struct nfs_page*,int ,struct nfs_commit_info*,int ) ;
 int FUNC_10 (struct nfs_page*) ;
 scalar_t__ FUNC_11 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_12 (struct nfs_direct_req*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct nfs_pgio_header *VAR_3)
{
 struct nfs_direct_req *VAR_4 = VAR_3->dreq;
 struct nfs_commit_info VAR_5;
 bool VAR_6 = 0;
 struct nfs_page *VAR_7 = FUNC_7(VAR_3->pages.next);

 FUNC_6(&VAR_5, VAR_4);

 FUNC_13(&VAR_4->lock);
 if (FUNC_16(VAR_0, &VAR_3->flags)) {
  FUNC_14(&VAR_4->lock);
  goto out_put;
 }

 FUNC_2(VAR_4, VAR_3);
 if (VAR_3->good_bytes != 0) {
  if (FUNC_11(VAR_3)) {
   if (VAR_4->flags == VAR_2)
    VAR_6 = 1;
   else if (VAR_4->flags == 0) {
    FUNC_3(VAR_4, VAR_3);
    VAR_6 = 1;
    VAR_4->flags = VAR_1;
   } else if (VAR_4->flags == VAR_1) {
    VAR_6 = 1;
    if (FUNC_4(VAR_4, VAR_3))
     VAR_4->flags =
      VAR_2;
   }
  }
 }
 FUNC_14(&VAR_4->lock);

 while (!FUNC_1(&VAR_3->pages)) {

  VAR_7 = FUNC_7(VAR_3->pages.next);
  FUNC_8(VAR_7);
  if (VAR_6) {
   FUNC_0(&VAR_7->wb_kref);
   FUNC_9(VAR_7, VAR_3->lseg, &VAR_5,
    VAR_3->ds_commit_idx);
  }
  FUNC_10(VAR_7);
 }

out_put:
 if (FUNC_12(VAR_4))
  FUNC_5(VAR_4);
 VAR_3->release(VAR_3);
}
