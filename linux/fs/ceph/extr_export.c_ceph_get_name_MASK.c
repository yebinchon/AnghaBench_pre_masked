
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct ceph_mds_reply_info_parsed {size_t dname_len; int dname; } ;
struct ceph_mds_request {int r_num_caps; struct ceph_mds_reply_info_parsed r_reply_info; int r_req_flags; void* r_parent; int r_ino2; struct inode* r_inode; } ;
struct ceph_mds_client {int dummy; } ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*,char*,struct dentry*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 struct ceph_mds_request* FUNC_4 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_5 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_6 (struct ceph_mds_request*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct inode*) ;
 void* FUNC_10 (struct dentry*) ;
 int FUNC_11 (char*,struct dentry*,int ,...) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (char*,int ,size_t) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct dentry *VAR_4, char *VAR_5,
    struct dentry *VAR_6)
{
 struct ceph_mds_client *VAR_7;
 struct ceph_mds_request *VAR_8;
 struct inode *VAR_9 = FUNC_10(VAR_6);
 int VAR_10;

 if (FUNC_7(VAR_9) != VAR_2)
  return FUNC_2(VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_3(VAR_9)->mdsc;
 VAR_8 = FUNC_4(VAR_7, VAR_0,
           VAR_3);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_13(FUNC_10(VAR_4));

 VAR_8->r_inode = VAR_9;
 FUNC_12(VAR_9);
 VAR_8->r_ino2 = FUNC_8(FUNC_10(VAR_4));
 VAR_8->r_parent = FUNC_10(VAR_4);
 FUNC_16(VAR_1, &VAR_8->r_req_flags);
 VAR_8->r_num_caps = 2;
 VAR_10 = FUNC_5(VAR_7, ((void*)0), VAR_8);

 FUNC_14(FUNC_10(VAR_4));

 if (!VAR_10) {
  struct ceph_mds_reply_info_parsed *VAR_11 = &VAR_8->r_reply_info;
  FUNC_15(VAR_5, VAR_11->dname, VAR_11->dname_len);
  VAR_5[VAR_11->dname_len] = 0;
  FUNC_11("get_name %p ino %llx.%llx name %s\n",
       VAR_6, FUNC_9(VAR_9), VAR_5);
 } else {
  FUNC_11("get_name %p ino %llx.%llx err %d\n",
       VAR_6, FUNC_9(VAR_9), VAR_10);
 }

 FUNC_6(VAR_8);
 return VAR_10;
}
