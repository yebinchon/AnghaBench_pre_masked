
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; int f_mode; int f_mapping; int f_wb_err; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_2__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct block_device* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct block_device*,int ,struct file*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode * VAR_9, struct file * VAR_10)
{
 struct block_device *VAR_11;







 VAR_10->f_flags |= VAR_7;

 VAR_10->f_mode |= VAR_3;

 if (VAR_10->f_flags & VAR_8)
  VAR_10->f_mode |= VAR_2;
 if (VAR_10->f_flags & VAR_6)
  VAR_10->f_mode |= VAR_1;
 if ((VAR_10->f_flags & VAR_5) == 3)
  VAR_10->f_mode |= VAR_4;

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_10->f_mapping = VAR_11->bd_inode->i_mapping;
 VAR_10->f_wb_err = FUNC_2(VAR_10->f_mapping);

 return FUNC_1(VAR_11, VAR_10->f_mode, VAR_10);
}
