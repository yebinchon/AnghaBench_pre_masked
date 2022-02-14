
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {int dummy; } ;
struct ocfs2_alloc_reservation {int r_flags; int r_start; int r_len; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ocfs2_reservation_map*) ;
 scalar_t__ FUNC_2 (struct ocfs2_alloc_reservation*) ;
 int FUNC_3 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*,unsigned int) ;
 unsigned int FUNC_4 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

int FUNC_8(struct ocfs2_reservation_map *VAR_3,
      struct ocfs2_alloc_reservation *VAR_4,
      int *VAR_5, int *VAR_6)
{
 if (VAR_4 == ((void*)0) || FUNC_1(VAR_3))
  return -VAR_0;

 FUNC_5(&VAR_2);

 if (FUNC_2(VAR_4)) {





  unsigned int VAR_7 = FUNC_4(VAR_3, VAR_4);

  if ((VAR_4->r_flags & VAR_1) || VAR_7 < *VAR_6)
   VAR_7 = *VAR_6;
  FUNC_3(VAR_3, VAR_4, VAR_7);
  FUNC_7(VAR_4->r_start, VAR_4->r_len);
 }

 FUNC_0(FUNC_2(VAR_4));

 *VAR_5 = VAR_4->r_start;
 *VAR_6 = VAR_4->r_len;

 FUNC_6(&VAR_2);
 return 0;
}
