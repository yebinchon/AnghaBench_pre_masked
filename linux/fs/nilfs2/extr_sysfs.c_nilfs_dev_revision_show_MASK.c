
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct the_nilfs {struct nilfs_super_block** ns_sbp; } ;
struct nilfs_super_block {int s_minor_rev_level; int s_rev_level; } ;
struct nilfs_dev_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int,int) ;

__attribute__((used)) static
ssize_t FUNC_3(struct nilfs_dev_attr *VAR_1,
    struct the_nilfs *VAR_2,
    char *VAR_3)
{
 struct nilfs_super_block **VAR_4 = VAR_2->ns_sbp;
 u32 VAR_5 = FUNC_1(VAR_4[0]->s_rev_level);
 u16 VAR_6 = FUNC_0(VAR_4[0]->s_minor_rev_level);

 return FUNC_2(VAR_3, VAR_0, "%d.%d\n", VAR_5, VAR_6);
}
