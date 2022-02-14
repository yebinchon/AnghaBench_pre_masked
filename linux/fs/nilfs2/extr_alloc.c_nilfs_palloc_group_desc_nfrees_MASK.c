
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_group_desc {int pg_nfrees; } ;
typedef int spinlock_t ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned long
FUNC_3(const struct nilfs_palloc_group_desc *VAR_0,
          spinlock_t *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_0->pg_nfrees);
 FUNC_2(VAR_1);
 return VAR_2;
}
