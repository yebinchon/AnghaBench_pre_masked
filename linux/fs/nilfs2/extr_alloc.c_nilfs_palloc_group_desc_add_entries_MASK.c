
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nilfs_palloc_group_desc {int pg_nfrees; } ;
typedef int spinlock_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32
FUNC_4(struct nilfs_palloc_group_desc *VAR_0,
        spinlock_t *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_0->pg_nfrees, VAR_2);
 VAR_3 = FUNC_1(VAR_0->pg_nfrees);
 FUNC_3(VAR_1);
 return VAR_3;
}
