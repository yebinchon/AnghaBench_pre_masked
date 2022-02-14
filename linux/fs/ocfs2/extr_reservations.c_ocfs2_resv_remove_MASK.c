
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {int m_reservations; } ;
struct ocfs2_alloc_reservation {int r_flags; int r_node; int r_lru; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_reservation_map *VAR_1,
         struct ocfs2_alloc_reservation *VAR_2)
{
 if (VAR_2->r_flags & VAR_0) {
  FUNC_0(&VAR_2->r_lru);
  FUNC_1(&VAR_2->r_node, &VAR_1->m_reservations);
  VAR_2->r_flags &= ~VAR_0;
 }
}
