
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned long FUNC_4(int VAR_6, int VAR_7, int *VAR_8)
{
 unsigned long VAR_9 = 0;
 int VAR_10;







 VAR_10 = FUNC_1(VAR_7) + VAR_5 * FUNC_3(VAR_7);
 if (VAR_10 >= VAR_0 || FUNC_2(VAR_7))
  return 0;

 if (VAR_6 == 0) {
  VAR_9 = VAR_1 +
      VAR_10 * (VAR_2 - VAR_1);
 } else if (VAR_6 == 1) {
  VAR_9 = VAR_3 +
      VAR_10 * (VAR_4 - VAR_3);
 } else {
  FUNC_0();
 }

 *VAR_8 = VAR_10;
 return VAR_9;
}
