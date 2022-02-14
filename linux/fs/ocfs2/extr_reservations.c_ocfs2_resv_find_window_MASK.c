
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {unsigned int m_bitmap_len; } ;
struct ocfs2_alloc_reservation {int r_last_len; unsigned int r_last_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*,unsigned int,unsigned int) ;
 int FUNC_2 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*,unsigned int) ;
 int FUNC_3 (struct ocfs2_alloc_reservation*) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_reservation_map *VAR_0,
       struct ocfs2_alloc_reservation *VAR_1,
       unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;

 FUNC_0(!FUNC_3(VAR_1));






 if (VAR_1->r_last_len) {
  VAR_3 = VAR_1->r_last_start + VAR_1->r_last_len;
  if (VAR_3 >= VAR_0->m_bitmap_len)
   VAR_3 = 0;
 }

 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);


 if (FUNC_3(VAR_1) && VAR_3 != 0)
  FUNC_1(VAR_0, VAR_1, 0, VAR_2);

 if (FUNC_3(VAR_1)) {




  FUNC_2(VAR_0, VAR_1, VAR_2);
 }

 FUNC_0(FUNC_3(VAR_1));
}
