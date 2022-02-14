
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct writeback_control {int pages_skipped; } ;
struct page {scalar_t__ private; int index; TYPE_2__* mapping; } ;
struct inode {int i_data; int i_mtime; } ;
struct ceph_writeback_ctl {int truncate_size; int truncate_seq; int i_size; } ;
struct ceph_snap_context {scalar_t__ seq; } ;
struct ceph_inode_info {int i_layout; } ;
struct ceph_fs_client {int blacklisted; TYPE_4__* mount_options; int writeback_count; TYPE_3__* client; } ;
typedef int loff_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int congestion_kb; } ;
struct TYPE_8__ {int osdc; } ;
struct TYPE_7__ {TYPE_1__* a_ops; struct inode* host; } ;
struct TYPE_6__ {int (* invalidatepage ) (struct page*,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct ceph_inode_info* FUNC_6 (struct inode*) ;
 struct ceph_fs_client* FUNC_7 (struct inode*) ;
 int FUNC_8 (int *,int ,int *,struct ceph_snap_context*,int ,int,int ,int ,int *,struct page**,int) ;
 int FUNC_9 (struct ceph_snap_context*) ;
 int FUNC_10 (struct ceph_inode_info*,int,struct ceph_snap_context*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ,int ) ;
 TYPE_5__* VAR_5 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct page*) ;
 struct ceph_snap_context* FUNC_15 (struct inode*,struct ceph_writeback_ctl*,struct ceph_snap_context*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (struct page*) ;
 struct ceph_snap_context* FUNC_19 (struct page*) ;
 int FUNC_20 (struct writeback_control*,struct page*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*,int ,int) ;

__attribute__((used)) static int FUNC_24(struct page *VAR_6, struct writeback_control *VAR_7)
{
 struct inode *VAR_8;
 struct ceph_inode_info *VAR_9;
 struct ceph_fs_client *VAR_10;
 struct ceph_snap_context *VAR_11, *VAR_12;
 loff_t VAR_13 = FUNC_18(VAR_6);
 int VAR_14, VAR_15 = VAR_3;
 struct ceph_writeback_ctl VAR_16;

 FUNC_13("writepage %p idx %lu\n", VAR_6, VAR_6->index);

 VAR_8 = VAR_6->mapping->host;
 VAR_9 = FUNC_6(VAR_8);
 VAR_10 = FUNC_7(VAR_8);


 VAR_11 = FUNC_19(VAR_6);
 if (!VAR_11) {
  FUNC_13("writepage %p page %p not dirty?\n", VAR_8, VAR_6);
  return 0;
 }
 VAR_12 = FUNC_15(VAR_8, &VAR_16, VAR_11);
 if (VAR_11->seq > VAR_12->seq) {
  FUNC_13("writepage %p page %p snapc %p not writeable - noop\n",
       VAR_8, VAR_6, VAR_11);

  FUNC_3(!(VAR_5->flags & VAR_4));
  FUNC_9(VAR_12);
  FUNC_20(VAR_7, VAR_6);
  return 0;
 }
 FUNC_9(VAR_12);


 if (VAR_13 >= VAR_16.i_size) {
  FUNC_13("%p page eof %llu\n", VAR_6, VAR_16.i_size);
  VAR_6->mapping->a_ops->invalidatepage(VAR_6, 0, VAR_3);
  return 0;
 }

 if (VAR_16.i_size < VAR_13 + VAR_15)
  VAR_15 = VAR_16.i_size - VAR_13;

 FUNC_13("writepage %p page %p index %lu on %llu~%u snapc %p seq %lld\n",
      VAR_8, VAR_6, VAR_6->index, VAR_13, VAR_15, VAR_11, VAR_11->seq);

 if (FUNC_5(&VAR_10->writeback_count) >
     FUNC_1(VAR_10->mount_options->congestion_kb))
  FUNC_21(FUNC_16(VAR_8), VAR_0);

 FUNC_22(VAR_6);
 VAR_14 = FUNC_8(&VAR_10->client->osdc, FUNC_11(VAR_8),
       &VAR_9->i_layout, VAR_11, VAR_13, VAR_15,
       VAR_16.truncate_seq,
       VAR_16.truncate_size,
       &VAR_8->i_mtime, &VAR_6, 1);
 if (VAR_14 < 0) {
  struct writeback_control VAR_17;
  if (!VAR_7)
   VAR_7 = &VAR_17;
  if (VAR_14 == -VAR_2) {

   FUNC_13("writepage interrupted page %p\n", VAR_6);
   FUNC_20(VAR_7, VAR_6);
   FUNC_14(VAR_6);
   return VAR_14;
  }
  if (VAR_14 == -VAR_1)
   VAR_10->blacklisted = 1;
  FUNC_13("writepage setting page/mapping error %d %p\n",
       VAR_14, VAR_6);
  FUNC_17(&VAR_8->i_data, VAR_14);
  VAR_7->pages_skipped++;
 } else {
  FUNC_13("writepage cleaned page %p\n", VAR_6);
  VAR_14 = 0;
 }
 VAR_6->private = 0;
 FUNC_2(VAR_6);
 FUNC_14(VAR_6);
 FUNC_10(VAR_9, 1, VAR_11);
 FUNC_9(VAR_11);

 if (FUNC_4(&VAR_10->writeback_count) <
     FUNC_0(VAR_10->mount_options->congestion_kb))
  FUNC_12(FUNC_16(VAR_8), VAR_0);

 return VAR_14;
}
