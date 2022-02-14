
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, u8 *VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{

 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7 = 0;
 unsigned VAR_8 = 0;
 unsigned VAR_9;





 VAR_2 /= 2;
 VAR_3 /= 2;
 VAR_5 = VAR_2 / VAR_3;
 VAR_6 = VAR_2 % VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++, VAR_1 += VAR_4) {
  FUNC_0(VAR_1, VAR_0 + VAR_7 * VAR_4, VAR_4);
  VAR_7 += VAR_5;
  VAR_8 += VAR_6;
  if (VAR_8 >= VAR_3) {
   VAR_8 -= VAR_3;
   VAR_7++;
  }
 }
}
