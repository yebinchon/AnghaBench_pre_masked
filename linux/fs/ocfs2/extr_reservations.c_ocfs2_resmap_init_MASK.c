
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_reservation_map {int m_lru; int m_reservations; struct ocfs2_super* m_osb; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_reservation_map*,int ,int) ;

int FUNC_2(struct ocfs2_super *VAR_1,
        struct ocfs2_reservation_map *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->m_osb = VAR_1;
 VAR_2->m_reservations = VAR_0;

 FUNC_0(&VAR_2->m_lru);

 return 0;
}
