
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flags; } ;
struct btrfs_inode {int flags; } ;


 struct btrfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;

void FUNC_2(struct inode *VAR_10)
{
 struct btrfs_inode *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12 = 0;

 if (VAR_11->flags & VAR_4)
  VAR_12 |= VAR_9;
 if (VAR_11->flags & VAR_2)
  VAR_12 |= VAR_7;
 if (VAR_11->flags & VAR_0)
  VAR_12 |= VAR_5;
 if (VAR_11->flags & VAR_3)
  VAR_12 |= VAR_8;
 if (VAR_11->flags & VAR_1)
  VAR_12 |= VAR_6;

 FUNC_1(&VAR_10->i_flags,
        VAR_9 | VAR_5 | VAR_7 | VAR_8 | VAR_6,
        VAR_12);
}
