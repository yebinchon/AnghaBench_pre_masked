
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct the_nilfs {struct nilfs_super_block** ns_sbp; } ;
struct nilfs_super_block {int s_dev_size; } ;
struct nilfs_dev_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static
ssize_t FUNC_2(struct nilfs_dev_attr *VAR_1,
        struct the_nilfs *VAR_2,
        char *VAR_3)
{
 struct nilfs_super_block **VAR_4 = VAR_2->ns_sbp;
 u64 VAR_5 = FUNC_0(VAR_4[0]->s_dev_size);

 return FUNC_1(VAR_3, VAR_0, "%llu\n", VAR_5);
}
