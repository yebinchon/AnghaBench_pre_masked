
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_reservation_map {int dummy; } ;
struct ocfs2_alloc_reservation {int r_start; int r_last_start; int r_last_len; int r_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*,int,unsigned int) ;
 int FUNC_2 (struct ocfs2_reservation_map*) ;
 scalar_t__ FUNC_3 (struct ocfs2_reservation_map*) ;
 int FUNC_4 (struct ocfs2_alloc_reservation*) ;
 unsigned int FUNC_5 (struct ocfs2_alloc_reservation*) ;
 int FUNC_6 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,unsigned int,int,int,unsigned int,int ,int,int) ;
 int FUNC_10 (int,unsigned int,int ,int,int) ;

void FUNC_11(struct ocfs2_reservation_map *VAR_1,
          struct ocfs2_alloc_reservation *VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5 = VAR_3 + VAR_4 - 1;

 if (VAR_1 == ((void*)0) || FUNC_3(VAR_1))
  return;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_3 != VAR_2->r_start);

 FUNC_7(&VAR_0);

 FUNC_9(VAR_3, VAR_5, VAR_4, VAR_2->r_start,
           FUNC_5(VAR_2), VAR_2->r_len,
           VAR_2->r_last_start,
           VAR_2->r_last_len);

 FUNC_0(VAR_3 < VAR_2->r_start);
 FUNC_0(VAR_3 > FUNC_5(VAR_2));
 FUNC_0(VAR_5 > FUNC_5(VAR_2));

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 VAR_2->r_last_start = VAR_3;
 VAR_2->r_last_len = VAR_4;





 if (!FUNC_4(VAR_2))
  FUNC_6(VAR_1, VAR_2);

 FUNC_10(VAR_2->r_start, FUNC_5(VAR_2),
         VAR_2->r_len, VAR_2->r_last_start,
         VAR_2->r_last_len);

 FUNC_2(VAR_1);

 FUNC_8(&VAR_0);
}
