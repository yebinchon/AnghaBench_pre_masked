
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct page {scalar_t__ private; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct ceph_snap_context {int dummy; } ;
struct ceph_osd_request {int r_result; int r_num_ops; TYPE_1__* r_ops; struct ceph_snap_context* r_snapc; struct inode* r_inode; } ;
struct ceph_osd_data {scalar_t__ type; struct page** pages; scalar_t__ pages_from_pool; scalar_t__ length; scalar_t__ alignment; } ;
struct ceph_inode_info {int dummy; } ;
struct ceph_fs_client {int blacklisted; TYPE_2__* mount_options; int writeback_count; } ;
struct address_space {int dummy; } ;
struct TYPE_6__ {int wb_pagevec_pool; } ;
struct TYPE_5__ {int congestion_kb; } ;
struct TYPE_4__ {scalar_t__ op; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int VAR_5 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ceph_inode_info*) ;
 int FUNC_8 (struct ceph_inode_info*) ;
 struct ceph_inode_info* FUNC_9 (struct inode*) ;
 struct ceph_fs_client* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ceph_osd_request*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ceph_inode_info*,int,struct ceph_snap_context*) ;
 TYPE_3__* FUNC_14 (int ) ;
 int FUNC_15 (struct ceph_inode_info*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct address_space*,struct page*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct page**) ;
 int FUNC_22 (struct address_space*,int) ;
 int FUNC_23 (struct page**,int ) ;
 struct ceph_osd_data* FUNC_24 (struct ceph_osd_request*,int) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page**,int) ;
 int FUNC_27 (struct page*) ;

__attribute__((used)) static void FUNC_28(struct ceph_osd_request *VAR_6)
{
 struct inode *VAR_7 = VAR_6->r_inode;
 struct ceph_inode_info *VAR_8 = FUNC_9(VAR_7);
 struct ceph_osd_data *VAR_9;
 struct page *VAR_10;
 int VAR_11, VAR_12 = 0;
 int VAR_13, VAR_14;
 int VAR_15 = VAR_6->r_result;
 struct ceph_snap_context *VAR_16 = VAR_6->r_snapc;
 struct address_space *VAR_17 = VAR_7->i_mapping;
 struct ceph_fs_client *VAR_18 = FUNC_10(VAR_7);
 bool VAR_19;

 FUNC_17("writepages_finish %p rc %d\n", VAR_7, VAR_15);
 if (VAR_15 < 0) {
  FUNC_22(VAR_17, VAR_15);
  FUNC_15(VAR_8);
  if (VAR_15 == -VAR_5)
   VAR_18->blacklisted = 1;
 } else {
  FUNC_8(VAR_8);
 }







 VAR_19 = !(FUNC_7(VAR_8) &
   (VAR_1|VAR_2));


 for (VAR_13 = 0; VAR_13 < VAR_6->r_num_ops; VAR_13++) {
  if (VAR_6->r_ops[VAR_13].op != VAR_4)
   break;

  VAR_9 = FUNC_24(VAR_6, VAR_13);
  FUNC_0(VAR_9->type != VAR_3);
  VAR_11 = FUNC_6((u64)VAR_9->alignment,
        (u64)VAR_9->length);
  VAR_12 += VAR_11;
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   VAR_10 = VAR_9->pages[VAR_14];
   FUNC_0(!VAR_10);
   FUNC_4(!FUNC_3(VAR_10));

   if (FUNC_5(&VAR_18->writeback_count) <
        FUNC_1(
     VAR_18->mount_options->congestion_kb))
    FUNC_16(FUNC_20(VAR_7),
          VAR_0);

   FUNC_12(FUNC_25(VAR_10));
   VAR_10->private = 0;
   FUNC_2(VAR_10);
   FUNC_17("unlocking %p\n", VAR_10);
   FUNC_18(VAR_10);

   if (VAR_19)
    FUNC_19(VAR_7->i_mapping,
         VAR_10);

   FUNC_27(VAR_10);
  }
  FUNC_17("writepages_finish %p wrote %llu bytes cleaned %d pages\n",
       VAR_7, VAR_9->length, VAR_15 >= 0 ? VAR_11 : 0);

  FUNC_26(VAR_9->pages, VAR_11);
 }

 FUNC_13(VAR_8, VAR_12, VAR_16);

 VAR_9 = FUNC_24(VAR_6, 0);
 if (VAR_9->pages_from_pool)
  FUNC_23(VAR_9->pages,
        FUNC_14(VAR_7->i_sb)->wb_pagevec_pool);
 else
  FUNC_21(VAR_9->pages);
 FUNC_11(VAR_6);
}
