
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,int) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2,
           unsigned int VAR_3,
           unsigned int *VAR_4,
           unsigned int *VAR_5)
{
 unsigned int VAR_6;
 long VAR_7;

 *VAR_4 = 0;
 *VAR_5 = 0;

 VAR_7 = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  u64 VAR_8;
  int VAR_9;

  VAR_8 = VAR_3 * (VAR_6 + 1);
  VAR_8 *= (2 << 16);
  FUNC_2(VAR_8, VAR_2);

  if (VAR_8 > VAR_1)
   break;

  VAR_9 = FUNC_0(FUNC_1(VAR_2, VAR_6, VAR_8) - VAR_3);
  if (VAR_9 < VAR_7) {
   VAR_7 = VAR_9;
   *VAR_4 = VAR_6;
   *VAR_5 = VAR_8;
  }
 }
}
