
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
struct TYPE_7__ {scalar_t__ inline_version; int inline_len; } ;
struct TYPE_8__ {TYPE_3__ targeti; } ;
struct TYPE_5__ {int mask; } ;
struct TYPE_6__ {TYPE_1__ getattr; } ;
struct ceph_mds_request {int r_num_caps; TYPE_4__ r_reply_info; struct page* r_locked_page; TYPE_2__ r_args; struct inode* r_inode; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct inode*) ;
 struct ceph_mds_request* FUNC_5 (struct ceph_mds_client*,int ,int) ;
 int FUNC_6 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_7 (struct ceph_mds_request*) ;
 struct ceph_fs_client* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct inode*) ;

int FUNC_13(struct inode *VAR_8, struct page *VAR_9,
        int VAR_10, bool VAR_11)
{
 struct ceph_fs_client *VAR_12 = FUNC_8(VAR_8->i_sb);
 struct ceph_mds_client *VAR_13 = VAR_12->mdsc;
 struct ceph_mds_request *VAR_14;
 int VAR_15;
 int VAR_16;

 if (FUNC_9(VAR_8) == VAR_2) {
  FUNC_11("do_getattr inode %p SNAPDIR\n", VAR_8);
  return 0;
 }

 FUNC_11("do_getattr inode %p mask %s mode 0%o\n",
      VAR_8, FUNC_2(VAR_10), VAR_8->i_mode);
 if (!VAR_11 && FUNC_3(FUNC_4(VAR_8), VAR_10, 1))
  return 0;

 VAR_15 = (VAR_10 & VAR_3) ? VAR_7 : VAR_6;
 VAR_14 = FUNC_5(VAR_13, VAR_1, VAR_15);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);
 VAR_14->r_inode = VAR_8;
 FUNC_12(VAR_8);
 VAR_14->r_num_caps = 1;
 VAR_14->r_args.getattr.mask = FUNC_10(VAR_10);
 VAR_14->r_locked_page = VAR_9;
 VAR_16 = FUNC_6(VAR_13, ((void*)0), VAR_14);
 if (VAR_9 && VAR_16 == 0) {
  u64 VAR_17 = VAR_14->r_reply_info.targeti.inline_version;
  if (VAR_17 == 0) {

   VAR_16 = -VAR_4;
  } else if (VAR_17 == VAR_0) {
   VAR_16 = -VAR_5;
  } else {
   VAR_16 = VAR_14->r_reply_info.targeti.inline_len;
  }
 }
 FUNC_7(VAR_14);
 FUNC_11("do_getattr result=%d\n", VAR_16);
 return VAR_16;
}
