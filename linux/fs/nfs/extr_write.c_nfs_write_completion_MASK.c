
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int verifier; } ;
struct TYPE_4__ {int next; } ;
struct nfs_pgio_header {unsigned long good_bytes; int (* release ) (struct nfs_pgio_header*) ;int io_completion; int pgio_mirror_idx; int lseg; TYPE_1__ verf; int error; int flags; TYPE_2__ pages; int inode; } ;
struct nfs_page {int wb_verf; scalar_t__ wb_nio; int wb_page; scalar_t__ wb_bytes; } ;
struct nfs_commit_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (struct nfs_commit_info*,int ) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (int ) ;
 struct nfs_page* FUNC_6 (int ) ;
 int FUNC_7 (struct nfs_page*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nfs_page*,int ,struct nfs_commit_info*,int ) ;
 int FUNC_10 (struct nfs_page*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct nfs_pgio_header*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct nfs_pgio_header *VAR_2)
{
 struct nfs_commit_info VAR_3;
 unsigned long VAR_4 = 0;

 if (FUNC_15(VAR_1, &VAR_2->flags))
  goto out;
 FUNC_3(&VAR_3, VAR_2->inode);
 while (!FUNC_0(&VAR_2->pages)) {
  struct nfs_page *VAR_5 = FUNC_6(VAR_2->pages.next);

  VAR_4 += VAR_5->wb_bytes;
  FUNC_7(VAR_5);
  if (FUNC_15(VAR_0, &VAR_2->flags) &&
      (VAR_2->good_bytes < VAR_4)) {
   FUNC_11(FUNC_13(VAR_5->wb_page));
   FUNC_8(VAR_5->wb_page, VAR_2->error);
   goto remove_req;
  }
  if (FUNC_12(VAR_2)) {

   VAR_5->wb_nio = 0;
   FUNC_1(&VAR_5->wb_verf, &VAR_2->verf.verifier, sizeof(VAR_5->wb_verf));
   FUNC_9(VAR_5, VAR_2->lseg, &VAR_3,
    VAR_2->pgio_mirror_idx);
   goto next;
  }
remove_req:
  FUNC_4(VAR_5);
next:
  FUNC_2(VAR_5);
  FUNC_10(VAR_5);
 }
out:
 FUNC_5(VAR_2->io_completion);
 VAR_2->release(VAR_2);
}
