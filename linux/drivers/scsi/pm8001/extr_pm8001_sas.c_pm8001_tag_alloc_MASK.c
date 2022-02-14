
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pm8001_hba_info {unsigned int tags_num; int bitmap_lock; void* tags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (unsigned int,void*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

inline int FUNC_4(struct pm8001_hba_info *VAR_1, u32 *VAR_2)
{
 unsigned int VAR_3;
 void *VAR_4 = VAR_1->tags;
 unsigned long VAR_5;

 FUNC_2(&VAR_1->bitmap_lock, VAR_5);
 VAR_3 = FUNC_0(VAR_4, VAR_1->tags_num);
 if (VAR_3 >= VAR_1->tags_num) {
  FUNC_3(&VAR_1->bitmap_lock, VAR_5);
  return -VAR_0;
 }
 FUNC_1(VAR_3, VAR_4);
 FUNC_3(&VAR_1->bitmap_lock, VAR_5);
 *VAR_2 = VAR_3;
 return 0;
}
