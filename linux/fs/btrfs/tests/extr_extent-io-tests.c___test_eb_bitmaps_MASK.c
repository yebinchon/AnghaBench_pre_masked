
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct extent_buffer {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long*,unsigned long,int) ;
 int FUNC_2 (unsigned long*,struct extent_buffer*,unsigned long) ;
 int FUNC_3 (struct extent_buffer*,unsigned long,int ,unsigned long) ;
 int FUNC_4 (struct extent_buffer*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_5 (struct extent_buffer*,unsigned long*,int ,unsigned long) ;
 int FUNC_6 (unsigned long*,int ,unsigned long) ;
 int FUNC_7 (struct extent_buffer*,int ,unsigned long) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(unsigned long *VAR_3, struct extent_buffer *VAR_4,
        unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_6(VAR_3, 0, VAR_5);
 FUNC_7(VAR_4, 0, VAR_5);
 if (FUNC_5(VAR_4, VAR_3, 0, VAR_5) != 0) {
  FUNC_8("bitmap was not zeroed");
  return -VAR_1;
 }

 FUNC_1(VAR_3, 0, VAR_5 * VAR_0);
 FUNC_4(VAR_4, 0, 0, VAR_5 * VAR_0);
 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_8("setting all bits failed");
  return VAR_9;
 }

 FUNC_0(VAR_3, 0, VAR_5 * VAR_0);
 FUNC_3(VAR_4, 0, 0, VAR_5 * VAR_0);
 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_8("clearing all bits failed");
  return VAR_9;
 }


 if (VAR_5 > VAR_2) {
  FUNC_1(VAR_3,
   (VAR_2 - sizeof(long) / 2) * VAR_0,
   sizeof(long) * VAR_0);
  FUNC_4(VAR_4, VAR_2 - sizeof(long) / 2, 0,
     sizeof(long) * VAR_0);
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_9) {
   FUNC_8("setting straddling pages failed");
   return VAR_9;
  }

  FUNC_1(VAR_3, 0, VAR_5 * VAR_0);
  FUNC_0(VAR_3,
   (VAR_2 - sizeof(long) / 2) * VAR_0,
   sizeof(long) * VAR_0);
  FUNC_4(VAR_4, 0, 0, VAR_5 * VAR_0);
  FUNC_3(VAR_4, VAR_2 - sizeof(long) / 2, 0,
     sizeof(long) * VAR_0);
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_9) {
   FUNC_8("clearing straddling pages failed");
   return VAR_9;
  }
 }





 VAR_8 = 0;
 FUNC_0(VAR_3, 0, VAR_5 * VAR_0);
 FUNC_3(VAR_4, 0, 0, VAR_5 * VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_5 * VAR_0 / 32; VAR_6++) {
  VAR_8 = (0x19660dULL * (u64)VAR_8 + 0x3c6ef35fULL) & 0xffffffffU;
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
   if (VAR_8 & (1U << VAR_7)) {
    FUNC_1(VAR_3, VAR_6 * 32 + VAR_7, 1);
    FUNC_4(VAR_4, 0, VAR_6 * 32 + VAR_7, 1);
   }
  }
 }

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_8("random bit pattern failed");
  return VAR_9;
 }

 return 0;
}
