
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct object_info {int size; int attr; int execaddr; int loadaddr; int parent_id; int indaddr; } ;
struct inode {int i_size; int i_blocks; TYPE_1__* i_mapping; int * i_fop; int * i_op; int i_mode; int i_mtime; int i_ctime; int i_atime; int i_ino; int i_gid; int i_uid; } ;
struct TYPE_6__ {int mmu_private; int attr; int execaddr; int loadaddr; int parent_id; } ;
struct TYPE_5__ {int s_gid; int s_uid; } ;
struct TYPE_4__ {int * a_ops; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,struct inode*) ;
 int VAR_0 ;
 int FUNC_5 (struct super_block*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct inode*,int) ;

struct inode *
FUNC_9(struct super_block *VAR_5, struct object_info *VAR_6)
{
 struct inode *VAR_7;

 VAR_7 = FUNC_7(VAR_5);
 if (!VAR_7)
  goto out;

 VAR_7->i_uid = FUNC_1(VAR_5)->s_uid;
 VAR_7->i_gid = FUNC_1(VAR_5)->s_gid;
 VAR_7->i_ino = VAR_6->indaddr;
 VAR_7->i_size = VAR_6->size;
 FUNC_8(VAR_7, 2);
 VAR_7->i_blocks = (VAR_7->i_size + VAR_5->s_blocksize - 1) >>
       VAR_5->s_blocksize_bits;







 FUNC_0(VAR_7)->parent_id = VAR_6->parent_id;
 FUNC_0(VAR_7)->loadaddr = VAR_6->loadaddr;
 FUNC_0(VAR_7)->execaddr = VAR_6->execaddr;
 FUNC_0(VAR_7)->attr = VAR_6->attr;

 VAR_7->i_mode = FUNC_5(VAR_5, VAR_7);
 FUNC_4(&VAR_7->i_mtime, VAR_7);
 VAR_7->i_atime = VAR_7->i_mtime;
 VAR_7->i_ctime = VAR_7->i_mtime;

 if (FUNC_2(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_1;
  VAR_7->i_fop = &VAR_2;
 } else if (FUNC_3(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_3;
  VAR_7->i_fop = &VAR_4;
  VAR_7->i_mapping->a_ops = &VAR_0;
  FUNC_0(VAR_7)->mmu_private = VAR_7->i_size;
 }

 FUNC_6(VAR_7);

out:
 return VAR_7;
}
