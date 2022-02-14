
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; int i_mapping; int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_6__ {int s_bdev; } ;
struct TYPE_5__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct file*,int ,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4,
         int VAR_5)
{
 struct inode *VAR_6 = VAR_2->f_mapping->host;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_6);
 FUNC_0(!FUNC_1(VAR_6->i_mode));
 VAR_7 = FUNC_10(VAR_6->i_mapping);
 FUNC_8(VAR_6->i_sb);
 VAR_8 = FUNC_7(VAR_6);
 FUNC_9(VAR_6->i_sb);
 if (VAR_8 != 1 && FUNC_6(VAR_6->i_sb))
  FUNC_2(VAR_6->i_sb->s_bdev, VAR_1, ((void*)0));
 FUNC_5(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 return (VAR_7 < 0) ? -VAR_0 : 0;
}
