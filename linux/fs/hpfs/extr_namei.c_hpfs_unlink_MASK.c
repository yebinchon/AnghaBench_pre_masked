
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; } ;
struct hpfs_dirent {scalar_t__ directory; scalar_t__ first; } ;
struct TYPE_3__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dnode_secno ;
struct TYPE_4__ {int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (unsigned char const*,unsigned int*) ;
 int FUNC_3 (struct quad_buffer_head*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__* FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int ,struct hpfs_dirent*,struct quad_buffer_head*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 struct hpfs_dirent* FUNC_10 (struct inode*,int ,unsigned char const*,unsigned int,int *,struct quad_buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_5, struct dentry *VAR_6)
{
 const unsigned char *VAR_7 = VAR_6->d_name.name;
 unsigned VAR_8 = VAR_6->d_name.len;
 struct quad_buffer_head VAR_9;
 struct hpfs_dirent *VAR_10;
 struct inode *VAR_11 = FUNC_0(VAR_6);
 dnode_secno VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_6(VAR_5->i_sb);
 FUNC_2(VAR_7, &VAR_8);

 VAR_14 = -VAR_2;
 VAR_10 = FUNC_10(VAR_5, FUNC_5(VAR_5)->i_dno, VAR_7, VAR_8, &VAR_12, &VAR_9);
 if (!VAR_10)
  goto out;

 VAR_14 = -VAR_4;
 if (VAR_10->first)
  goto out1;

 VAR_14 = -VAR_1;
 if (VAR_10->directory)
  goto out1;

 VAR_13 = FUNC_7(VAR_5, VAR_12, VAR_10, &VAR_9, 1);
 switch (VAR_13) {
 case 1:
  FUNC_4(VAR_5->i_sb, "there was error when removing dirent");
  VAR_14 = -VAR_0;
  break;
 case 2:
  VAR_14 = -VAR_3;
  break;
 default:
  FUNC_1(VAR_11);
  VAR_14 = 0;
 }
 goto out;

out1:
 FUNC_3(&VAR_9);
out:
 if (!VAR_14)
  FUNC_9(VAR_5);
 FUNC_8(VAR_5->i_sb);
 return VAR_14;
}
