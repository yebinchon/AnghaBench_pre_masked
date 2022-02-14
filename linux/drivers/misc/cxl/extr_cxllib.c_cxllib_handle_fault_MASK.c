
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_1 (struct mm_struct*,unsigned long,unsigned long*,unsigned long*,unsigned long*) ;

int FUNC_2(struct mm_struct *VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 int VAR_5;
 u64 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;

 if (VAR_1 == ((void*)0))
  return -VAR_0;







 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = (VAR_2 & ~(VAR_9 - 1)); VAR_6 < (VAR_2 + VAR_3);
      VAR_6 += VAR_9) {
  if (VAR_6 < VAR_7 || VAR_6 >= VAR_8) {
   VAR_5 = FUNC_1(VAR_1, VAR_6, &VAR_7, &VAR_8,
     &VAR_9);
   if (VAR_5)
    return VAR_5;
  }

  VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_6);
  if (VAR_5)
   return -VAR_0;
 }
 return 0;
}
