
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int * CURSOR; } ;
struct riva_par {TYPE_1__ riva; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct riva_par *VAR_1, u8 *VAR_2,
         u16 VAR_3, u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 u32 VAR_10, VAR_11;
 u32 *VAR_12 = (u32 *)VAR_2;
 VAR_3 = FUNC_0(VAR_3);
 VAR_4 = FUNC_0(VAR_4);

 VAR_5 = (VAR_5 + 1) & ~1;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_10 = *VAR_12++;
  FUNC_1(&VAR_10);

  for (VAR_8 = 0; VAR_8 < VAR_5/2; VAR_8++) {
   VAR_11 = 0;






   VAR_11 = (VAR_10 & 1) ? VAR_4 : VAR_3;
   VAR_10 >>= 1;
   VAR_11 |= (VAR_10 & 1) ? VAR_4 << 16 : VAR_3 << 16;
   VAR_10 >>= 1;

   FUNC_2(VAR_11, &VAR_1->riva.CURSOR[VAR_9++]);
  }
  VAR_9 += (VAR_0 - VAR_5)/2;
 }
}
