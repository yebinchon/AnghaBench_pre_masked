
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct address_space* i_mapping; } ;
struct hugetlbfs_inode_info {int seals; } ;
struct hstate {int dummy; } ;
struct TYPE_2__ {int rb_root; } ;
struct address_space {TYPE_1__ i_mmap; } ;
typedef int loff_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hugetlbfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct hstate* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct hstate*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static long FUNC_12(struct inode *VAR_4, loff_t VAR_5, loff_t VAR_6)
{
 struct hstate *VAR_7 = FUNC_2(VAR_4);
 loff_t VAR_8 = FUNC_3(VAR_7);
 loff_t VAR_9, VAR_10;





 VAR_9 = FUNC_11(VAR_5, VAR_8);
 VAR_10 = FUNC_10(VAR_5 + VAR_6, VAR_8);

 if (VAR_10 > VAR_9) {
  struct address_space *VAR_11 = VAR_4->i_mapping;
  struct hugetlbfs_inode_info *VAR_12 = FUNC_0(VAR_4);

  FUNC_7(VAR_4);


  if (VAR_12->seals & (VAR_2 | VAR_1)) {
   FUNC_8(VAR_4);
   return -VAR_0;
  }

  FUNC_5(VAR_11);
  if (!FUNC_1(&VAR_11->i_mmap.rb_root))
   FUNC_4(&VAR_11->i_mmap,
      VAR_9 >> VAR_3,
      VAR_10 >> VAR_3);
  FUNC_6(VAR_11);
  FUNC_9(VAR_4, VAR_9, VAR_10);
  FUNC_8(VAR_4);
 }

 return 0;
}
