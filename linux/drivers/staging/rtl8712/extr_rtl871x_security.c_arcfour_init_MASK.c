
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct arc4context {int* state; scalar_t__ y; scalar_t__ x; } ;



__attribute__((used)) static void FUNC_0(struct arc4context *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u8 *VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_0->state;
 VAR_0->x = 0;
 VAR_0->y = 0;
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++)
  VAR_7[VAR_8] = (u8)VAR_8;
 VAR_5 = 0;
 VAR_6 = 0;
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_3 = VAR_7[VAR_8];
  VAR_6 = (VAR_6 + VAR_1[VAR_5] + VAR_3) & 0xff;
  VAR_4 = VAR_7[VAR_6];
  VAR_7[VAR_6] = (u8)VAR_3;
  VAR_7[VAR_8] = (u8)VAR_4;
  if (++VAR_5 >= VAR_2)
   VAR_5 = 0;
 }
}
