
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tga_par {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tga_par*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct tga_par *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10,VAR_11,VAR_12,VAR_13 = 34, VAR_14 = 1, VAR_15 = 30;

 for (VAR_10 = 0 ; VAR_10 < 12 ; VAR_10++)
  FUNC_1(VAR_3, !VAR_10, VAR_0);

 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;

 if (VAR_4 >= VAR_2 / 2)
  VAR_6 = 0;
 else if (VAR_4 >= VAR_2 / 4)
  VAR_6 = 1;
 else
  VAR_6 = 2;

 FUNC_1(VAR_3, VAR_6 & 1, VAR_0);
 FUNC_1(VAR_3, VAR_6 >> 1, VAR_0);

 for (VAR_10 = 0 ; VAR_10 < 10 ; VAR_10++)
  FUNC_1(VAR_3, 0, VAR_0);

 if (VAR_4 <= 120000) {
  FUNC_1(VAR_3, 0, VAR_0);
  FUNC_1(VAR_3, 0, VAR_0);
 }
 else if (VAR_4 <= 200000) {
  FUNC_1(VAR_3, 1, VAR_0);
  FUNC_1(VAR_3, 0, VAR_0);
 }
 else {
  FUNC_1(VAR_3, 0, VAR_0);
  FUNC_1(VAR_3, 1, VAR_0);
 }

 FUNC_1(VAR_3, 1, VAR_0);
 FUNC_1(VAR_3, 0, VAR_0);
 FUNC_1(VAR_3, 0, VAR_0);
 FUNC_1(VAR_3, 1, VAR_0);
 FUNC_1(VAR_3, 0, VAR_0);
 FUNC_1(VAR_3, 1, VAR_0);

 VAR_9 = (VAR_4 << VAR_6) / VAR_1;
 VAR_8 = VAR_2;

 VAR_10 = 7 / VAR_9;
 if (!VAR_10) VAR_10 = 1;

 VAR_7 = VAR_9 * VAR_10;
 while (VAR_7 < 449) {
  for (VAR_5 = VAR_7 < 7 ? 7 : VAR_7; VAR_5 < VAR_7 + VAR_9 && VAR_5 < 449; VAR_5++) {
   VAR_12 = ((VAR_5 + 3) / 7) - 1;
   VAR_11 = 0;
   FUNC_0((VAR_12 + 1) * 7);
   VAR_12++;
   FUNC_0((VAR_12 + 1) * 7);
   VAR_12 = (VAR_5 / 6) - 1;
   if ((VAR_11 = VAR_5 % 6))
    FUNC_0(VAR_5);
  }
  VAR_10++;
  VAR_7 += VAR_9;
 }

 VAR_15--;

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  FUNC_1(VAR_3, (VAR_13 >> VAR_10) & 1, VAR_0);
 for (VAR_10 = 0; VAR_10 < 8 ; VAR_10++)
  FUNC_1(VAR_3, (VAR_14 >> VAR_10) & 1, VAR_0);
 for (VAR_10 = 0; VAR_10 < 7 ; VAR_10++)
  FUNC_1(VAR_3, (VAR_15 >> VAR_10) & 1, VAR_0);
 FUNC_1(VAR_3, ((VAR_15 >> 7) & 1)|2, VAR_0);
}
