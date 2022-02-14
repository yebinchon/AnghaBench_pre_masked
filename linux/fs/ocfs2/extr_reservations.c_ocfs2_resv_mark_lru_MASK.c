
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {int m_lru; } ;
struct ocfs2_alloc_reservation {int r_lru; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ocfs2_reservation_map *VAR_1,
    struct ocfs2_alloc_reservation *VAR_2)
{
 FUNC_0(&VAR_0);

 if (!FUNC_3(&VAR_2->r_lru))
  FUNC_2(&VAR_2->r_lru);

 FUNC_1(&VAR_2->r_lru, &VAR_1->m_lru);
}
