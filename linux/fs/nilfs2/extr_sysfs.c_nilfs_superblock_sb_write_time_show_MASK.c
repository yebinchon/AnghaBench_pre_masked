
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct the_nilfs {int ns_sem; int ns_sbwtime; } ;
struct nilfs_superblock_attr {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct nilfs_superblock_attr *VAR_0,
         struct the_nilfs *VAR_1,
         char *VAR_2)
{
 time64_t VAR_3;

 FUNC_1(&VAR_1->ns_sem);
 VAR_3 = VAR_1->ns_sbwtime;
 FUNC_2(&VAR_1->ns_sem);

 return FUNC_0(VAR_3, VAR_2);
}
