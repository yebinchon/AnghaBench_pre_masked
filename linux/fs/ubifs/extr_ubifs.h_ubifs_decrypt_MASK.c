
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct ubifs_data_node {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int ) ;

__attribute__((used)) static inline int FUNC_1(const struct inode *VAR_1,
    struct ubifs_data_node *VAR_2,
    unsigned int *VAR_3, int VAR_4)
{
 struct ubifs_info *VAR_5 = VAR_1->i_sb->s_fs_info;
 FUNC_0(VAR_5, 0);
 return -VAR_0;
}
