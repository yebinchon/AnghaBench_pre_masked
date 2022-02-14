
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ubifs_inode {int flags; int ui_size; int xattr_size; int ui_mutex; } ;
struct path {int dentry; } ;
struct kstat {int attributes; int attributes_mask; int size; int blocks; int blksize; } ;
struct inode {int i_mode; } ;
typedef int loff_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct kstat*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ubifs_inode* FUNC_6 (struct inode*) ;

int FUNC_7(const struct path *VAR_9, struct kstat *VAR_10,
    u32 VAR_11, unsigned int VAR_12)
{
 loff_t VAR_13;
 struct inode *VAR_14 = FUNC_2(VAR_9->dentry);
 struct ubifs_inode *VAR_15 = FUNC_6(VAR_14);

 FUNC_4(&VAR_15->ui_mutex);

 if (VAR_15->flags & VAR_4)
  VAR_10->attributes |= VAR_0;
 if (VAR_15->flags & VAR_6)
  VAR_10->attributes |= VAR_1;
 if (VAR_15->flags & VAR_7)
  VAR_10->attributes |= VAR_2;
 if (VAR_15->flags & VAR_8)
  VAR_10->attributes |= VAR_3;

 VAR_10->attributes_mask |= (VAR_0 |
    VAR_1 |
    VAR_2 |
    VAR_3);

 FUNC_3(VAR_14, VAR_10);
 VAR_10->blksize = VAR_5;
 VAR_10->size = VAR_15->ui_size;
 if (FUNC_1(VAR_14->i_mode)) {
  VAR_13 = VAR_15->xattr_size;
  VAR_13 += VAR_10->size;
  VAR_13 = FUNC_0(VAR_13, VAR_5);




  VAR_10->blocks = VAR_13 >> 9;
 } else
  VAR_10->blocks = 0;
 FUNC_5(&VAR_15->ui_mutex);
 return 0;
}
