
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct ceph_options {int dummy; } ;
struct ceph_mount_options {int wsize; int mds_namespace; } ;
struct ceph_fs_client {int filp_gen; TYPE_1__* client; void* inode_wq; void* cap_wq; int wb_pagevec_pool; struct ceph_mount_options* mount_options; int writeback_count; int mount_state; int * sb; } ;
struct TYPE_6__ {int monc; int extra_mon_dispatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ceph_fs_client* FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 void* FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (struct ceph_options*,struct ceph_fs_client*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ceph_options*) ;
 int FUNC_8 (int *,int ,int ,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct ceph_mount_options*) ;
 int FUNC_11 (void*) ;
 int VAR_8 ;
 int FUNC_12 (struct ceph_fs_client*) ;
 struct ceph_fs_client* FUNC_13 (int,int ) ;
 int FUNC_14 (int,size_t) ;

__attribute__((used)) static struct ceph_fs_client *FUNC_15(struct ceph_mount_options *VAR_9,
     struct ceph_options *VAR_10)
{
 struct ceph_fs_client *VAR_11;
 int VAR_12;
 size_t VAR_13;
 int VAR_14;

 VAR_11 = FUNC_13(sizeof(*VAR_11), VAR_5);
 if (!VAR_11) {
  VAR_14 = -VAR_4;
  goto fail;
 }

 VAR_11->client = FUNC_5(VAR_10, VAR_11);
 if (FUNC_1(VAR_11->client)) {
  VAR_14 = FUNC_2(VAR_11->client);
  goto fail;
 }
 VAR_10 = ((void*)0);

 VAR_11->client->extra_mon_dispatch = VAR_8;
 FUNC_9(VAR_11->client, VAR_0);

 if (!VAR_9->mds_namespace) {
  FUNC_8(&VAR_11->client->monc, VAR_3,
       0, 1);
 } else {
  FUNC_8(&VAR_11->client->monc, VAR_2,
       0, 0);
 }

 VAR_11->mount_options = VAR_9;

 VAR_11->sb = ((void*)0);
 VAR_11->mount_state = VAR_1;
 VAR_11->filp_gen = 1;

 FUNC_4(&VAR_11->writeback_count, 0);

 VAR_14 = -VAR_4;




 VAR_11->inode_wq = FUNC_3("ceph-inode", VAR_7, 0);
 if (!VAR_11->inode_wq)
  goto fail_client;
 VAR_11->cap_wq = FUNC_3("ceph-cap", 0, 1);
 if (!VAR_11->cap_wq)
  goto fail_inode_wq;


 VAR_14 = -VAR_4;
 VAR_12 = VAR_11->mount_options->wsize >> VAR_6;
 VAR_13 = sizeof (struct page *) * (VAR_12 ? VAR_12 : 1);
 VAR_11->wb_pagevec_pool = FUNC_14(10, VAR_13);
 if (!VAR_11->wb_pagevec_pool)
  goto fail_cap_wq;

 return VAR_11;

fail_cap_wq:
 FUNC_11(VAR_11->cap_wq);
fail_inode_wq:
 FUNC_11(VAR_11->inode_wq);
fail_client:
 FUNC_6(VAR_11->client);
fail:
 FUNC_12(VAR_11);
 if (VAR_10)
  FUNC_7(VAR_10);
 FUNC_10(VAR_9);
 return FUNC_0(VAR_14);
}
