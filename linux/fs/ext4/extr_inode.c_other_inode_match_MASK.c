
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct other_inode {int orig_ino; int raw_inode; } ;
struct inode {unsigned long i_ino; int i_state; int i_lock; } ;
struct ext4_inode_info {int i_raw_lock; } ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*,int ,struct ext4_inode_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_6(struct inode * VAR_9, unsigned long VAR_10,
        void *VAR_11)
{
 struct other_inode *VAR_12 = (struct other_inode *) VAR_11;

 if ((VAR_9->i_ino != VAR_10) ||
     (VAR_9->i_state & (VAR_3 | VAR_5 | VAR_4 |
          VAR_0)) ||
     ((VAR_9->i_state & VAR_1) == 0))
  return 0;
 FUNC_3(&VAR_9->i_lock);
 if (((VAR_9->i_state & (VAR_3 | VAR_5 | VAR_4 |
    VAR_0)) == 0) &&
     (VAR_9->i_state & VAR_1)) {
  struct ext4_inode_info *VAR_13 = FUNC_0(VAR_9);

  VAR_9->i_state &= ~(VAR_1 | VAR_2);
  FUNC_4(&VAR_9->i_lock);

  FUNC_3(&VAR_13->i_raw_lock);
  FUNC_1(VAR_7, VAR_9, VAR_12->raw_inode);
  FUNC_1(VAR_8, VAR_9, VAR_12->raw_inode);
  FUNC_1(VAR_6, VAR_9, VAR_12->raw_inode);
  FUNC_2(VAR_9, VAR_12->raw_inode, VAR_13);
  FUNC_4(&VAR_13->i_raw_lock);
  FUNC_5(VAR_9, VAR_12->orig_ino);
  return -1;
 }
 FUNC_4(&VAR_9->i_lock);
 return -1;
}
