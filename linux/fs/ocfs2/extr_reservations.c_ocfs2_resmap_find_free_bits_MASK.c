
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_reservation_map {int m_bitmap_len; void* m_disk_bitmap; } ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_reservation_map *VAR_0,
           unsigned int VAR_1,
           unsigned int VAR_2,
           unsigned int VAR_3,
           unsigned int *VAR_4,
           unsigned int *VAR_5)
{
 void *VAR_6 = VAR_0->m_disk_bitmap;
 unsigned int VAR_7, VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11;

 FUNC_1(VAR_2, VAR_3,
      VAR_1, VAR_0->m_bitmap_len);

 VAR_11 = VAR_7 = VAR_8 = 0;

 VAR_10 = VAR_2;
 while ((VAR_9 = FUNC_0(VAR_6, VAR_0->m_bitmap_len,
       VAR_10)) != -1) {

  if (VAR_9 >= (VAR_2 + VAR_3))
   break;

  if (VAR_9 == VAR_10) {

   VAR_11++;

   VAR_10++;
  } else {

   VAR_11 = 1;
   VAR_10 = VAR_9 + 1;
  }
  if (VAR_11 > VAR_8) {
   VAR_8 = VAR_11;
   VAR_7 = VAR_10 - VAR_11;
  }

  if (VAR_11 >= VAR_1)
   break;
 }

 if (VAR_8 == 0)
  return 0;

 if (VAR_8 >= VAR_1)
  VAR_8 = VAR_1;

 *VAR_5 = VAR_8;
 *VAR_4 = VAR_7;

 FUNC_2(VAR_7, VAR_8);

 return *VAR_5;
}
