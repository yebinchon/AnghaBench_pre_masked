
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int counter; } ;
struct inode {TYPE_1__ i_count; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_4__ {scalar_t__ unix_ext; } ;


 int FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,char*,struct inode*,int ,struct dentry*,int ,int ) ;
 int FUNC_3 (struct inode**,char*,int *,struct super_block*,unsigned int,int *) ;
 int FUNC_4 (struct inode**,char*,struct super_block*,unsigned int) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 TYPE_2__* FUNC_7 (int ) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 () ;
 int VAR_3 ;
 int FUNC_11 (char*) ;

int FUNC_12(struct dentry *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;
 struct inode *VAR_7 = FUNC_8(VAR_4);
 struct super_block *VAR_8 = VAR_4->d_sb;
 char *VAR_9 = ((void*)0);

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 if (!FUNC_6(VAR_7))
  return VAR_6;

 VAR_5 = FUNC_10();



 VAR_9 = FUNC_1(VAR_4);
 if (VAR_9 == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto out;
 }

 FUNC_2(VAR_2, "Update attributes: %s inode 0x%p count %d dentry: 0x%p d_time %ld jiffies %ld\n",
   VAR_9, VAR_7, VAR_7->i_count.counter,
   VAR_4, FUNC_5(VAR_4), VAR_3);

 if (FUNC_7(FUNC_0(VAR_8))->unix_ext)
  VAR_6 = FUNC_4(&VAR_7, VAR_9, VAR_8, VAR_5);
 else
  VAR_6 = FUNC_3(&VAR_7, VAR_9, ((void*)0), VAR_8,
      VAR_5, ((void*)0));

out:
 FUNC_11(VAR_9);
 FUNC_9(VAR_5);
 return VAR_6;
}
