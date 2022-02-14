
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {unsigned int ns_mount_state; int ns_sem; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct the_nilfs *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(&VAR_1->ns_sem);
 VAR_2 = (VAR_1->ns_mount_state & VAR_0);
 FUNC_1(&VAR_1->ns_sem);
 return VAR_2;
}
