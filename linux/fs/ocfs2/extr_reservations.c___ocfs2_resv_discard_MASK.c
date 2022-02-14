
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {int dummy; } ;
struct ocfs2_alloc_reservation {scalar_t__ r_last_start; scalar_t__ r_last_len; } ;


 int FUNC_0 (struct ocfs2_alloc_reservation*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ocfs2_reservation_map *VAR_1,
     struct ocfs2_alloc_reservation *VAR_2)
{
 FUNC_1(&VAR_0);

 FUNC_0(VAR_2);




 VAR_2->r_last_len = VAR_2->r_last_start = 0;

 FUNC_2(VAR_1, VAR_2);
}
