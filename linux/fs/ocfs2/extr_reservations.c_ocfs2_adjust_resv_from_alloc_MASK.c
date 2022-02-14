
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {int dummy; } ;
struct ocfs2_alloc_reservation {unsigned int r_start; unsigned int r_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*) ;
 unsigned int FUNC_2 (struct ocfs2_alloc_reservation*) ;

__attribute__((used)) static void
 FUNC_3(struct ocfs2_reservation_map *VAR_0,
         struct ocfs2_alloc_reservation *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = FUNC_2(VAR_1);

 FUNC_0(VAR_2 != VAR_1->r_start || VAR_5 < VAR_3);




 if (VAR_5 == VAR_3) {
  FUNC_1(VAR_0, VAR_1);
  return;
 }

 VAR_4 = VAR_5 - VAR_3;




 FUNC_0(VAR_4 == 0);

 VAR_1->r_start = VAR_3 + 1;
 VAR_1->r_len = VAR_5 - VAR_1->r_start + 1;
}
