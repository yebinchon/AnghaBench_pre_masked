
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {unsigned int m_bitmap_len; char* m_disk_bitmap; } ;


 int FUNC_0 (struct ocfs2_reservation_map*) ;
 scalar_t__ FUNC_1 (struct ocfs2_reservation_map*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ocfs2_reservation_map *VAR_1,
     unsigned int VAR_2, char *VAR_3)
{
 if (FUNC_1(VAR_1))
  return;

 FUNC_2(&VAR_0);

 FUNC_0(VAR_1);
 VAR_1->m_bitmap_len = VAR_2;
 VAR_1->m_disk_bitmap = VAR_3;

 FUNC_3(&VAR_0);
}
