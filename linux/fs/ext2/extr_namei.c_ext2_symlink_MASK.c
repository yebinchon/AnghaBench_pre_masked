
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; } ;
struct inode {char* i_link; unsigned int i_size; int * i_op; TYPE_1__* i_mapping; struct super_block* i_sb; } ;
struct dentry {int d_name; } ;
struct TYPE_4__ {scalar_t__ i_data; } ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_6 (struct inode*,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (char*,char const*,unsigned int) ;
 int FUNC_11 (struct inode*,char const*,unsigned int) ;
 int FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_14 (struct inode * VAR_8, struct dentry * VAR_9,
 const char * VAR_10)
{
 struct super_block * VAR_11 = VAR_8->i_sb;
 int VAR_12 = -VAR_0;
 unsigned VAR_13 = FUNC_12(VAR_10)+1;
 struct inode * VAR_14;

 if (VAR_13 > VAR_11->s_blocksize)
  goto out;

 VAR_12 = FUNC_4(VAR_8);
 if (VAR_12)
  goto out;

 VAR_14 = FUNC_6 (VAR_8, VAR_2 | VAR_3, &VAR_9->d_name);
 VAR_12 = FUNC_2(VAR_14);
 if (FUNC_1(VAR_14))
  goto out;

 if (VAR_13 > sizeof (FUNC_0(VAR_14)->i_data)) {

  VAR_14->i_op = &VAR_7;
  FUNC_8(VAR_14);
  if (FUNC_13(VAR_14->i_sb, VAR_1))
   VAR_14->i_mapping->a_ops = &VAR_6;
  else
   VAR_14->i_mapping->a_ops = &VAR_4;
  VAR_12 = FUNC_11(VAR_14, VAR_10, VAR_13);
  if (VAR_12)
   goto out_fail;
 } else {

  VAR_14->i_op = &VAR_5;
  VAR_14->i_link = (char*)FUNC_0(VAR_14)->i_data;
  FUNC_10(VAR_14->i_link, VAR_10, VAR_13);
  VAR_14->i_size = VAR_13-1;
 }
 FUNC_9(VAR_14);

 VAR_12 = FUNC_5(VAR_9, VAR_14);
out:
 return VAR_12;

out_fail:
 FUNC_7(VAR_14);
 FUNC_3(VAR_14);
 goto out;
}
