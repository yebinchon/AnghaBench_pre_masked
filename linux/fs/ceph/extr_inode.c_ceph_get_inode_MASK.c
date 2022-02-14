
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {int i_state; scalar_t__ i_ino; } ;
struct ceph_vino {int snap; int ino; } ;
typedef int ino_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ceph_vino) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,struct inode*,int ,int ,...) ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,int ,struct ceph_vino*) ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct super_block *VAR_4, struct ceph_vino VAR_5)
{
 struct inode *VAR_6;
 ino_t VAR_7 = FUNC_1(VAR_5);

 VAR_6 = FUNC_4(VAR_4, VAR_7, VAR_2, VAR_3, &VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 if (VAR_6->i_state & VAR_1) {
  FUNC_3("get_inode created new inode %p %llx.%llx ino %llx\n",
       VAR_6, FUNC_2(VAR_6), (u64)VAR_6->i_ino);
  FUNC_5(VAR_6);
 }

 FUNC_3("get_inode on %lu=%llx.%llx got %p\n", VAR_6->i_ino, VAR_5.ino,
      VAR_5.snap, VAR_6);
 return VAR_6;
}
