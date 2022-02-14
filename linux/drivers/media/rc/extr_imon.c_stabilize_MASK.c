
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 long FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, u16 VAR_2, u16 VAR_3)
{
 ktime_t VAR_4;
 static ktime_t VAR_5;
 static ktime_t VAR_6;
 static int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 long VAR_12, VAR_13;

 VAR_4 = FUNC_1();
 VAR_12 = FUNC_2(VAR_4, VAR_5);
 VAR_13 = FUNC_2(VAR_4, VAR_6);

 if (VAR_12 > 100) {
  VAR_7 = 0;
  VAR_8 = 0;
  VAR_10 = 0;
 }

 VAR_7 += VAR_0;
 VAR_8 += VAR_1;

 VAR_5 = VAR_4;

 if (FUNC_0(VAR_7) > VAR_3 || FUNC_0(VAR_8) > VAR_3) {
  if (FUNC_0(VAR_8) > FUNC_0(VAR_7))
   VAR_11 = (VAR_8 > 0) ? 0x7F : 0x80;
  else
   VAR_11 = (VAR_7 > 0) ? 0x7F00 : 0x8000;

  VAR_7 = 0;
  VAR_8 = 0;

  if (VAR_11 == VAR_9) {
   VAR_10++;

   if (VAR_10 > 3) {
    switch (VAR_11) {
    case 0x7F:
     VAR_8 = 17 * VAR_3 / 30;
     break;
    case 0x80:
     VAR_8 -= 17 * VAR_3 / 30;
     break;
    case 0x7F00:
     VAR_7 = 17 * VAR_3 / 30;
     break;
    case 0x8000:
     VAR_7 -= 17 * VAR_3 / 30;
     break;
    }
   }

   if (VAR_10 == 2 && VAR_13 < VAR_2) {
    VAR_11 = 0;
    VAR_10 = 1;
   }
  } else {
   VAR_9 = VAR_11;
   VAR_10 = 1;
   VAR_6 = VAR_4;
  }
 }

 return VAR_11;
}
