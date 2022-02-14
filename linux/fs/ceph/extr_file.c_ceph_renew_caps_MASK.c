
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ceph_mds_request {int r_num_caps; int r_fmode; struct inode* r_inode; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; scalar_t__ i_auth_cap; } ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (struct ceph_inode_info*,int *) ;
 scalar_t__ FUNC_4 (struct ceph_inode_info*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ceph_inode_info*,int ,int *) ;
 struct ceph_inode_info* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_9 (struct ceph_mds_request*) ;
 TYPE_1__* FUNC_10 (int ) ;
 int FUNC_11 (char*,struct inode*,int,...) ;
 int FUNC_12 (struct inode*) ;
 struct ceph_mds_request* FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct inode *VAR_8)
{
 struct ceph_mds_client *VAR_9 = FUNC_10(VAR_8->i_sb)->mdsc;
 struct ceph_inode_info *VAR_10 = FUNC_7(VAR_8);
 struct ceph_mds_request *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_14(&VAR_10->i_ceph_lock);
 VAR_14 = FUNC_2(VAR_10);
 if (FUNC_4(VAR_10) &&
     (!(VAR_14 & VAR_0) || VAR_10->i_auth_cap)) {
  int VAR_15 = FUNC_3(VAR_10, ((void*)0));
  FUNC_15(&VAR_10->i_ceph_lock);
  FUNC_11("renew caps %p want %s issued %s updating mds_wanted\n",
       VAR_8, FUNC_5(VAR_14), FUNC_5(VAR_15));
  FUNC_6(VAR_10, 0, ((void*)0));
  return 0;
 }
 FUNC_15(&VAR_10->i_ceph_lock);

 VAR_13 = 0;
 if ((VAR_14 & VAR_2) && (VAR_14 & VAR_3))
  VAR_13 = VAR_6;
 else if (VAR_14 & VAR_2)
  VAR_13 = VAR_5;
 else if (VAR_14 & VAR_3)
  VAR_13 = VAR_7;





 VAR_11 = FUNC_13(VAR_8->i_sb, VAR_13, 0);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto out;
 }

 VAR_11->r_inode = VAR_8;
 FUNC_12(VAR_8);
 VAR_11->r_num_caps = 1;
 VAR_11->r_fmode = -1;

 VAR_12 = FUNC_8(VAR_9, ((void*)0), VAR_11);
 FUNC_9(VAR_11);
out:
 FUNC_11("renew caps %p open result=%d\n", VAR_8, VAR_12);
 return VAR_12 < 0 ? VAR_12 : 0;
}
