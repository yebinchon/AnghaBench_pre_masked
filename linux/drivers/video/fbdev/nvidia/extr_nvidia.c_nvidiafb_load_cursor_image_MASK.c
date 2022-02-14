
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvidia_par {int * CURSOR; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(struct nvidia_par *VAR_1, u8 * VAR_2,
           u16 VAR_3, u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 *VAR_7 = (u32 *) VAR_2;
 int VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12;

 VAR_5 = (VAR_5 + 1) & ~1;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_11 = *VAR_7++;
  FUNC_1(&VAR_11);

  for (VAR_9 = 0; VAR_9 < VAR_5 / 2; VAR_9++) {
   VAR_12 = 0;






   VAR_12 = (VAR_11 & 1) ? VAR_4 : VAR_3;
   VAR_11 >>= 1;
   VAR_12 |= (VAR_11 & 1) ? VAR_4 << 16 : VAR_3 << 16;
   VAR_11 >>= 1;

   FUNC_0(&VAR_1->CURSOR[VAR_10++], 0, VAR_12);
  }
  VAR_10 += (VAR_0 - VAR_5) / 2;
 }
}
