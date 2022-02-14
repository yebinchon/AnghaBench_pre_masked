
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct nilfs_super_block** ns_sbp; } ;
struct nilfs_super_block {int s_volume_name; } ;
struct nilfs_dev_attr {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static
ssize_t FUNC_1(struct nilfs_dev_attr *VAR_0,
        struct the_nilfs *VAR_1,
        char *VAR_2)
{
 struct nilfs_super_block **VAR_3 = VAR_1->ns_sbp;

 return FUNC_0(VAR_2, sizeof(VAR_3[0]->s_volume_name), "%s\n",
    VAR_3[0]->s_volume_name);
}
