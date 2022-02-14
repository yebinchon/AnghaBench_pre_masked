
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nfs_server {int writeback; } ;
struct nfs_page {scalar_t__ wb_page; int wb_verf; int wb_bytes; } ;
struct nfs_commit_info {int mds; } ;
struct TYPE_9__ {int verifier; } ;
struct TYPE_11__ {int next; } ;
struct TYPE_7__ {int tk_status; } ;
struct nfs_commit_data {int dreq; int inode; TYPE_3__ verf; TYPE_5__ pages; TYPE_1__ task; } ;
struct TYPE_12__ {TYPE_2__* d_sb; } ;
struct TYPE_10__ {int flags; TYPE_6__* dentry; } ;
struct TYPE_8__ {int s_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct nfs_server* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (char*,int ,unsigned long long,int ,long long) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct nfs_commit_info*,int ,int ) ;
 int FUNC_13 (struct nfs_page*) ;
 struct nfs_page* FUNC_14 (int ) ;
 int FUNC_15 (struct nfs_page*) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (struct nfs_page*) ;
 TYPE_4__* FUNC_18 (struct nfs_page*) ;
 int FUNC_19 (struct nfs_page*) ;
 int FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (struct nfs_page*) ;
 int FUNC_22 (int ,int *) ;

__attribute__((used)) static void FUNC_23(struct nfs_commit_data *VAR_3)
{
 struct nfs_page *VAR_4;
 int VAR_5 = VAR_3->task.tk_status;
 struct nfs_commit_info VAR_6;
 struct nfs_server *VAR_7;

 while (!FUNC_9(&VAR_3->pages)) {
  VAR_4 = FUNC_14(VAR_3->pages.next);
  FUNC_15(VAR_4);
  if (VAR_4->wb_page)
   FUNC_10(VAR_4->wb_page);

  FUNC_6("NFS:       commit (%s/%llu %d@%lld)",
   FUNC_18(VAR_4)->dentry->d_sb->s_id,
   (unsigned long long)FUNC_0(FUNC_5(FUNC_18(VAR_4)->dentry)),
   VAR_4->wb_bytes,
   (long long)FUNC_21(VAR_4));
  if (VAR_5 < 0) {
   if (VAR_4->wb_page) {
    FUNC_16(VAR_4->wb_page, VAR_5);
    FUNC_13(VAR_4);
   }
   FUNC_7(", error = %d\n", VAR_5);
   goto next;
  }



  if (!FUNC_20(&VAR_4->wb_verf, &VAR_3->verf.verifier)) {

   if (VAR_4->wb_page)
    FUNC_13(VAR_4);
   FUNC_7(" OK\n");
   goto next;
  }

  FUNC_7(" mismatch\n");
  FUNC_17(VAR_4);
  FUNC_22(VAR_2, &FUNC_18(VAR_4)->flags);
 next:
  FUNC_19(VAR_4);

  FUNC_4();
 }
 VAR_7 = FUNC_1(VAR_3->inode);
 if (FUNC_2(&VAR_7->writeback) < VAR_1)
  FUNC_3(FUNC_8(VAR_3->inode), VAR_0);

 FUNC_12(&VAR_6, VAR_3->inode, VAR_3->dreq);
 FUNC_11(VAR_6.mds);
}
