
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_segctor_sem; int ns_cno; } ;
struct nilfs_segctor_attr {int dummy; } ;
typedef int ssize_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct nilfs_segctor_attr *VAR_1,
     struct the_nilfs *VAR_2,
     char *VAR_3)
{
 __u64 VAR_4;

 FUNC_0(&VAR_2->ns_segctor_sem);
 VAR_4 = VAR_2->ns_cno;
 FUNC_2(&VAR_2->ns_segctor_sem);

 return FUNC_1(VAR_3, VAR_0, "%llu\n", VAR_4);
}
