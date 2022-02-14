
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * i1_data; } ;
struct minix_inode_info {TYPE_2__ u; } ;
struct minix_inode {int * i_zone; int i_time; int i_size; int i_nlinks; int i_gid; int i_uid; int i_mode; } ;
struct TYPE_3__ {int tv_sec; } ;
struct inode {int i_rdev; int i_mode; TYPE_1__ i_mtime; int i_size; int i_nlink; int i_ino; int i_sb; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct buffer_head*) ;
 struct minix_inode* FUNC_7 (int ,int ,struct buffer_head**) ;
 struct minix_inode_info* FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct buffer_head * FUNC_10(struct inode * VAR_0)
{
 struct buffer_head * VAR_1;
 struct minix_inode * VAR_2;
 struct minix_inode_info *VAR_3 = FUNC_8(VAR_0);
 int VAR_4;

 VAR_2 = FUNC_7(VAR_0->i_sb, VAR_0->i_ino, &VAR_1);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->i_mode = VAR_0->i_mode;
 VAR_2->i_uid = FUNC_3(FUNC_5(VAR_0));
 VAR_2->i_gid = FUNC_2(FUNC_4(VAR_0));
 VAR_2->i_nlinks = VAR_0->i_nlink;
 VAR_2->i_size = VAR_0->i_size;
 VAR_2->i_time = VAR_0->i_mtime.tv_sec;
 if (FUNC_1(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode))
  VAR_2->i_zone[0] = FUNC_9(VAR_0->i_rdev);
 else for (VAR_4 = 0; VAR_4 < 9; VAR_4++)
  VAR_2->i_zone[VAR_4] = VAR_3->u.i1_data[VAR_4];
 FUNC_6(VAR_1);
 return VAR_1;
}
