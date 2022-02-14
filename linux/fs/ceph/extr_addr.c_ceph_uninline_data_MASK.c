
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xattr_buf ;
typedef int u64 ;
struct page {int dummy; } ;
struct inode {int i_mtime; int i_mapping; } ;
struct file {int dummy; } ;
struct ceph_osd_request {int r_mtime; } ;
struct ceph_inode_info {int i_inline_version; int i_truncate_size; int i_truncate_seq; int i_layout; int i_ceph_lock; } ;
struct ceph_fs_client {TYPE_1__* client; } ;
typedef char __le64 ;
struct TYPE_2__ {int osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct ceph_osd_request*) ;
 int VAR_15 ;
 int FUNC_1 (struct ceph_osd_request*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct page*,int ,int) ;
 int FUNC_5 (struct page*,int ) ;
 struct page* FUNC_6 (int ) ;
 int FUNC_7 (struct ceph_inode_info*) ;
 struct ceph_inode_info* FUNC_8 (struct inode*) ;
 struct ceph_fs_client* FUNC_9 (struct inode*) ;
 struct ceph_osd_request* FUNC_10 (int *,int *,int ,int ,int*,int,int,int ,int ,int *,int ,int ,int) ;
 int FUNC_11 (struct ceph_osd_request*) ;
 int FUNC_12 (int *,struct ceph_osd_request*,int) ;
 int FUNC_13 (int *,struct ceph_osd_request*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 char FUNC_16 (int) ;
 int FUNC_17 (char*,struct inode*,int ,int,...) ;
 struct inode* FUNC_18 (struct file*) ;
 struct page* FUNC_19 (int ,int ) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct ceph_osd_request*,int,struct page**,int,int ,int,int) ;
 int FUNC_23 (struct ceph_osd_request*,int,int ,char*,char*,int,int ,int ) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (char*,int,char*,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct page*) ;

int FUNC_29(struct file *VAR_16, struct page *VAR_17)
{
 struct inode *VAR_18 = FUNC_18(VAR_16);
 struct ceph_inode_info *VAR_19 = FUNC_8(VAR_18);
 struct ceph_fs_client *VAR_20 = FUNC_9(VAR_18);
 struct ceph_osd_request *VAR_21;
 struct page *VAR_22 = ((void*)0);
 u64 VAR_23, VAR_24;
 int VAR_25 = 0;
 bool VAR_26 = 0;

 FUNC_26(&VAR_19->i_ceph_lock);
 VAR_24 = VAR_19->i_inline_version;
 FUNC_27(&VAR_19->i_ceph_lock);

 FUNC_17("uninline_data %p %llx.%llx inline_version %llu\n",
      VAR_18, FUNC_15(VAR_18), VAR_24);

 if (VAR_24 == 1 ||
     VAR_24 == VAR_2)
  goto out;

 if (VAR_17) {
  VAR_22 = VAR_17;
  FUNC_3(!FUNC_2(VAR_22));
 } else if (FUNC_7(VAR_19) &
     (VAR_0|VAR_1)) {
  VAR_22 = FUNC_19(VAR_18->i_mapping, 0);
  if (VAR_22) {
   if (FUNC_2(VAR_22)) {
    VAR_26 = 1;
    FUNC_21(VAR_22);
   } else {
    FUNC_24(VAR_22);
    VAR_22 = ((void*)0);
   }
  }
 }

 if (VAR_22) {
  VAR_23 = FUNC_20(VAR_18);
  if (VAR_23 > VAR_15)
   VAR_23 = VAR_15;
 } else {
  VAR_22 = FUNC_6(VAR_14);
  if (!VAR_22) {
   VAR_25 = -VAR_13;
   goto out;
  }
  VAR_25 = FUNC_4(VAR_18, VAR_22,
     VAR_10, 1);
  if (VAR_25 < 0) {

   if (VAR_25 == -VAR_12)
    VAR_25 = 0;
   goto out;
  }
  VAR_23 = VAR_25;
 }

 VAR_21 = FUNC_10(&VAR_20->client->osdc, &VAR_19->i_layout,
        FUNC_14(VAR_18), 0, &VAR_23, 0, 1,
        VAR_7, VAR_5,
        ((void*)0), 0, 0, 0);
 if (FUNC_0(VAR_21)) {
  VAR_25 = FUNC_1(VAR_21);
  goto out;
 }

 VAR_21->r_mtime = VAR_18->i_mtime;
 VAR_25 = FUNC_12(&VAR_20->client->osdc, VAR_21, 0);
 if (!VAR_25)
  VAR_25 = FUNC_13(&VAR_20->client->osdc, VAR_21);
 FUNC_11(VAR_21);
 if (VAR_25 < 0)
  goto out;

 VAR_21 = FUNC_10(&VAR_20->client->osdc, &VAR_19->i_layout,
        FUNC_14(VAR_18), 0, &VAR_23, 1, 3,
        VAR_9, VAR_5,
        ((void*)0), VAR_19->i_truncate_seq,
        VAR_19->i_truncate_size, 0);
 if (FUNC_0(VAR_21)) {
  VAR_25 = FUNC_1(VAR_21);
  goto out;
 }

 FUNC_22(VAR_21, 1, &VAR_22, VAR_23, 0, 0, 0);

 {
  __le64 VAR_27 = FUNC_16(VAR_24);
  VAR_25 = FUNC_23(VAR_21, 0, VAR_6,
         "inline_version", &VAR_27,
         sizeof(VAR_27),
         VAR_4,
         VAR_3);
  if (VAR_25)
   goto out_put;
 }

 {
  char VAR_28[32];
  int VAR_29 = FUNC_25(VAR_28, sizeof(VAR_28),
      "%llu", VAR_24);
  VAR_25 = FUNC_23(VAR_21, 2, VAR_8,
         "inline_version",
         VAR_28, VAR_29, 0, 0);
  if (VAR_25)
   goto out_put;
 }

 VAR_21->r_mtime = VAR_18->i_mtime;
 VAR_25 = FUNC_12(&VAR_20->client->osdc, VAR_21, 0);
 if (!VAR_25)
  VAR_25 = FUNC_13(&VAR_20->client->osdc, VAR_21);
out_put:
 FUNC_11(VAR_21);
 if (VAR_25 == -VAR_11)
  VAR_25 = 0;
out:
 if (VAR_22 && VAR_22 != VAR_17) {
  if (VAR_26) {
   FUNC_28(VAR_22);
   FUNC_24(VAR_22);
  } else
   FUNC_5(VAR_22, 0);
 }

 FUNC_17("uninline_data %p %llx.%llx inline_version %llu = %d\n",
      VAR_18, FUNC_15(VAR_18), VAR_24, VAR_25);
 return VAR_25;
}
