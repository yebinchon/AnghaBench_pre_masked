
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int dummy; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (struct inode*,struct ext4_ext_path*,int ) ;
 int FUNC_1 (int *,struct inode*,int ,unsigned int,int *,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ext4_fsblk_t
FUNC_3(handle_t *VAR_0, struct inode *VAR_1,
   struct ext4_ext_path *VAR_2,
   struct ext4_extent *VAR_3, int *VAR_4, unsigned int VAR_5)
{
 ext4_fsblk_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, FUNC_2(VAR_3->ee_block));
 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_6, VAR_5,
     ((void*)0), VAR_4);
 return VAR_7;
}
