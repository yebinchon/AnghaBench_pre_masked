
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int dummy; } ;
struct nilfs_binfo_dat {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct nilfs_sc_info*,struct buffer_head*,struct inode*,int) ;

__attribute__((used)) static int FUNC_3(struct nilfs_sc_info *VAR_0,
      struct buffer_head *VAR_1, struct inode *VAR_2)
{
 FUNC_0(!FUNC_1(VAR_1));
 return FUNC_2(VAR_0, VAR_1, VAR_2,
         sizeof(struct nilfs_binfo_dat));
}
