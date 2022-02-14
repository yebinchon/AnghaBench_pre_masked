
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ z_erofs_next_pcluster_t ;
struct z_erofs_pcluster {scalar_t__ next; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct z_erofs_pcluster *VAR_4,
        z_erofs_next_pcluster_t VAR_5[],
        z_erofs_next_pcluster_t VAR_6)
{
 z_erofs_next_pcluster_t *const VAR_7 = &VAR_5[VAR_1];
 z_erofs_next_pcluster_t *const VAR_8 = &VAR_5[VAR_0];

 FUNC_0(VAR_6 == VAR_3);
 if (VAR_6 == VAR_2)
  VAR_6 = VAR_3;

 FUNC_1(VAR_4->next, &VAR_3);

 FUNC_1(*VAR_7, &VAR_6);
 FUNC_1(*VAR_8, &VAR_4->next);

 VAR_5[VAR_0] = VAR_4->next;
}
