
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; int * i_op; int i_gid; int i_uid; int i_mode; int i_sb; } ;
struct ceph_vino {int snap; int ino; } ;
struct ceph_inode_info {scalar_t__ i_rbytes; int i_snap_caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 struct inode* FUNC_3 (int ,struct ceph_vino) ;
 int FUNC_4 (struct inode*) ;
 struct ceph_inode_info* FUNC_5 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;

struct inode *FUNC_6(struct inode *VAR_4)
{
 struct ceph_vino VAR_5 = {
  .ino = FUNC_4(VAR_4),
  .snap = VAR_1,
 };
 struct inode *VAR_6 = FUNC_3(VAR_4->i_sb, VAR_5);
 struct ceph_inode_info *VAR_7 = FUNC_5(VAR_6);

 FUNC_0(!FUNC_2(VAR_4->i_mode));
 if (FUNC_1(VAR_6))
  return VAR_6;
 VAR_6->i_mode = VAR_4->i_mode;
 VAR_6->i_uid = VAR_4->i_uid;
 VAR_6->i_gid = VAR_4->i_gid;
 VAR_6->i_op = &VAR_3;
 VAR_6->i_fop = &VAR_2;
 VAR_7->i_snap_caps = VAR_0;
 VAR_7->i_rbytes = 0;
 return VAR_6;
}
