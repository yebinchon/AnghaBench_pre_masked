
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct resv_map {int refs; } ;
struct inode {int * i_op; int * i_fop; TYPE_1__* i_mapping; int i_ctime; int i_mtime; int i_atime; int i_ino; } ;
struct hugetlbfs_inode_info {int seals; } ;
typedef int dev_t ;
struct TYPE_2__ {struct resv_map* private_data; int * a_ops; int i_mmap_rwsem; } ;


 int VAR_0 ;
 struct hugetlbfs_inode_info* FUNC_0 (struct inode*) ;


 int VAR_1 ;

 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int,int ) ;
 int FUNC_7 (struct inode*,struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *,int *) ;
 struct inode* FUNC_12 (struct super_block*) ;
 int VAR_7 ;
 struct resv_map* FUNC_13 () ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct inode *FUNC_14(struct super_block *VAR_10,
     struct inode *VAR_11,
     umode_t VAR_12, dev_t VAR_13)
{
 struct inode *VAR_14;
 struct resv_map *VAR_15 = ((void*)0);





 if (FUNC_2(VAR_12) || FUNC_1(VAR_12)) {
  VAR_15 = FUNC_13();
  if (!VAR_15)
   return ((void*)0);
 }

 VAR_14 = FUNC_12(VAR_10);
 if (VAR_14) {
  struct hugetlbfs_inode_info *VAR_16 = FUNC_0(VAR_14);

  VAR_14->i_ino = FUNC_4();
  FUNC_7(VAR_14, VAR_11, VAR_12);
  FUNC_11(&VAR_14->i_mapping->i_mmap_rwsem,
    &VAR_5);
  VAR_14->i_mapping->a_ops = &VAR_2;
  VAR_14->i_atime = VAR_14->i_mtime = VAR_14->i_ctime = FUNC_3(VAR_14);
  VAR_14->i_mapping->private_data = VAR_15;
  VAR_16->seals = VAR_0;
  switch (VAR_12 & VAR_1) {
  default:
   FUNC_6(VAR_14, VAR_12, VAR_13);
   break;
  case 128:
   VAR_14->i_op = &VAR_6;
   VAR_14->i_fop = &VAR_4;
   break;
  case 130:
   VAR_14->i_op = &VAR_3;
   VAR_14->i_fop = &VAR_9;


   FUNC_5(VAR_14);
   break;
  case 129:
   VAR_14->i_op = &VAR_7;
   FUNC_8(VAR_14);
   break;
  }
  FUNC_10(VAR_14);
 } else {
  if (VAR_15)
   FUNC_9(&VAR_15->refs, VAR_8);
 }

 return VAR_14;
}
