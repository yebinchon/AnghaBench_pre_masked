
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfs_extent {void* count; void* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hfs_extent*) ;

__attribute__((used)) static int FUNC_3(struct hfs_extent *VAR_2, u16 VAR_3,
     u16 VAR_4, u16 VAR_5)
{
 u16 VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(VAR_2);
 for (VAR_8 = 0; VAR_8 < 3; VAR_2++, VAR_8++) {
  VAR_6 = FUNC_0(VAR_2->count);
  if (VAR_3 == VAR_6) {
   VAR_7 = FUNC_0(VAR_2->block);
   if (VAR_4 != VAR_7 + VAR_6) {
    if (++VAR_8 >= 3)
     return -VAR_1;
    VAR_2++;
    VAR_2->block = FUNC_1(VAR_4);
   } else
    VAR_5 += VAR_6;
   VAR_2->count = FUNC_1(VAR_5);
   return 0;
  } else if (VAR_3 < VAR_6)
   break;
  VAR_3 -= VAR_6;
 }

 return -VAR_0;
}
