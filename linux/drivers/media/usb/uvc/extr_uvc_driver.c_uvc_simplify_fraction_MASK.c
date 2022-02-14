
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 unsigned int* FUNC_1 (unsigned int,int,int ) ;

void FUNC_2(u32 *VAR_1, u32 *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 u32 *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return;






 VAR_6 = *VAR_1;
 VAR_7 = *VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_3 && VAR_7 != 0; ++VAR_10) {
  VAR_5[VAR_10] = VAR_6 / VAR_7;
  if (VAR_5[VAR_10] >= VAR_4) {
   if (VAR_10 < 2)
    VAR_10++;
   break;
  }

  VAR_8 = VAR_6 - VAR_5[VAR_10] * VAR_7;
  VAR_6 = VAR_7;
  VAR_7 = VAR_8;
 }


 VAR_6 = 0;
 VAR_7 = 1;

 for (VAR_9 = VAR_10; VAR_9 > 0; --VAR_9) {
  VAR_8 = VAR_7;
  VAR_7 = VAR_5[VAR_9-1] * VAR_7 + VAR_6;
  VAR_6 = VAR_8;
 }

 *VAR_1 = VAR_7;
 *VAR_2 = VAR_6;
 FUNC_0(VAR_5);
}
