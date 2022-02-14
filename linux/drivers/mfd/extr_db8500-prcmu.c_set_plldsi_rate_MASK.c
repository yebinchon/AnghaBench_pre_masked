
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long u32 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12;

 VAR_9 = FUNC_0(VAR_3);
 VAR_10 = VAR_8;

 for (VAR_12 = 7; (VAR_10 > 0) && (VAR_12 > 0); VAR_12--) {
  u64 VAR_13;
  u64 VAR_14;

  VAR_13 = (VAR_12 * VAR_8);
  (void)FUNC_1(VAR_13, VAR_9);
  if (VAR_13 < 6)
   VAR_13 = 6;
  else if (VAR_13 > 255)
   VAR_13 = 255;
  VAR_14 = (VAR_13 * VAR_9);
  if (((2 * VAR_14) < (VAR_12 * VAR_2)) ||
   ((VAR_12 * VAR_1) < (2 * VAR_14)))
   continue;
  (void)FUNC_1(VAR_14, VAR_12);
  if (VAR_8 < VAR_14) {
   if (VAR_11 == 0)
    VAR_11 = (((u32)VAR_13 << VAR_5) |
     (VAR_12 << VAR_7));
   break;
  }
  if ((VAR_8 - VAR_14) < VAR_10) {
   VAR_10 = (VAR_8 - VAR_14);
   VAR_11 = (((u32)VAR_13 << VAR_5) |
    (VAR_12 << VAR_7));
  }
 }
 if (VAR_11 == 0)
  return -VAR_0;

 VAR_11 |= (1 << VAR_6);
 FUNC_2(VAR_11, VAR_4);

 return 0;
}
