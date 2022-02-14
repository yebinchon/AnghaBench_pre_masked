
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_iget_args {int dirid; int objectid; } ;
struct inode {int i_state; } ;
struct TYPE_2__ {int k_objectid; int k_dir_id; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct cpu_key const*) ;
 struct inode* FUNC_3 (struct super_block*,int ,int ,int ,void*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct inode*,struct reiserfs_iget_args*) ;
 int FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct inode*) ;

struct inode *FUNC_10(struct super_block *VAR_4, const struct cpu_key *VAR_5)
{
 struct inode *VAR_6;
 struct reiserfs_iget_args VAR_7;
 int VAR_8;

 VAR_7.objectid = VAR_5->on_disk_key.k_objectid;
 VAR_7.dirid = VAR_5->on_disk_key.k_dir_id;
 VAR_8 = FUNC_8(VAR_4);
 VAR_6 = FUNC_3(VAR_4, VAR_5->on_disk_key.k_objectid,
        VAR_2, VAR_3,
        (void *)(&VAR_7));
 FUNC_7(VAR_4, VAR_8);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 if (VAR_6->i_state & VAR_1) {
  FUNC_6(VAR_6, &VAR_7);
  FUNC_9(VAR_6);
 }

 if (FUNC_2(FUNC_1(VAR_6), VAR_5) || FUNC_5(VAR_6)) {

  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
 }
 return VAR_6;
}
