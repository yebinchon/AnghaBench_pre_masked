
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static long FUNC_2(unsigned long VAR_3)
{
 long VAR_4 = 0;
 unsigned long VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = VAR_3;

 for (VAR_7 = 7; (VAR_6 > 0) && (VAR_7 > 0); VAR_7--) {
  u64 VAR_8;

  VAR_8 = (VAR_7 * VAR_3);
  (void)FUNC_1(VAR_8, VAR_5);
  if (VAR_8 < 6)
   VAR_8 = 6;
  else if (VAR_8 > 255)
   VAR_8 = 255;
  VAR_8 *= VAR_5;
  if (((2 * VAR_8) < (VAR_7 * VAR_1)) ||
   ((VAR_7 * VAR_0) < (2 * VAR_8)))
   continue;
  (void)FUNC_1(VAR_8, VAR_7);
  if (VAR_3 < VAR_8) {
   if (VAR_4 == 0)
    VAR_4 = (long)VAR_8;
   break;
  }
  if ((VAR_3 - VAR_8) < VAR_6) {
   VAR_6 = (VAR_3 - VAR_8);
   VAR_4 = (long)VAR_8;
  }
 }
 return VAR_4;
}
