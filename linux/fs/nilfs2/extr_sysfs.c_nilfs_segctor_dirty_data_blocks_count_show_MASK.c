
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct the_nilfs {int ns_segctor_sem; int ns_ndirtyblks; } ;
struct nilfs_segctor_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct nilfs_segctor_attr *VAR_1,
         struct the_nilfs *VAR_2,
         char *VAR_3)
{
 u32 VAR_4;

 FUNC_1(&VAR_2->ns_segctor_sem);
 VAR_4 = FUNC_0(&VAR_2->ns_ndirtyblks);
 FUNC_3(&VAR_2->ns_segctor_sem);

 return FUNC_2(VAR_3, VAR_0, "%u\n", VAR_4);
}
