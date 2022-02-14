
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; } ;
struct hpfs_dirent {int directory; scalar_t__ first; } ;
struct TYPE_3__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dnode_secno ;
struct TYPE_4__ {int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (unsigned char const*,unsigned int*) ;
 int FUNC_4 (struct quad_buffer_head*) ;
 int FUNC_5 (int ,int ,int *,int *,int*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_2__* FUNC_7 (struct inode*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,int ,struct hpfs_dirent*,struct quad_buffer_head*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;
 struct hpfs_dirent* FUNC_12 (struct inode*,int ,unsigned char const*,unsigned int,int *,struct quad_buffer_head*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_6, struct dentry *VAR_7)
{
 const unsigned char *VAR_8 = VAR_7->d_name.name;
 unsigned VAR_9 = VAR_7->d_name.len;
 struct quad_buffer_head VAR_10;
 struct hpfs_dirent *VAR_11;
 struct inode *VAR_12 = FUNC_1(VAR_7);
 dnode_secno VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;

 FUNC_3(VAR_8, &VAR_9);
 FUNC_8(VAR_6->i_sb);
 VAR_15 = -VAR_1;
 VAR_11 = FUNC_12(VAR_6, FUNC_7(VAR_6)->i_dno, VAR_8, VAR_9, &VAR_13, &VAR_10);
 if (!VAR_11)
  goto out;

 VAR_15 = -VAR_5;
 if (VAR_11->first)
  goto out1;

 VAR_15 = -VAR_3;
 if (!VAR_11->directory)
  goto out1;

 FUNC_5(VAR_6->i_sb, FUNC_7(VAR_12)->i_dno, ((void*)0), ((void*)0), &VAR_14);
 VAR_15 = -VAR_4;
 if (VAR_14)
  goto out1;

 VAR_16 = FUNC_9(VAR_6, VAR_13, VAR_11, &VAR_10, 1);
 switch (VAR_16) {
 case 1:
  FUNC_6(VAR_6->i_sb, "there was error when removing dirent");
  VAR_15 = -VAR_0;
  break;
 case 2:
  VAR_15 = -VAR_2;
  break;
 default:
  FUNC_2(VAR_6);
  FUNC_0(VAR_12);
  VAR_15 = 0;
 }
 goto out;
out1:
 FUNC_4(&VAR_10);
out:
 if (!VAR_15)
  FUNC_11(VAR_6);
 FUNC_10(VAR_6->i_sb);
 return VAR_15;
}
