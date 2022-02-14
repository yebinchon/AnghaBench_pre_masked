
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct arc4context {size_t* state; int x; size_t y; } ;



__attribute__((used)) static u32 FUNC_0(struct arc4context *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;
 u32 VAR_3, VAR_4;
 u8 *VAR_5;

 VAR_5 = VAR_0->state;
 VAR_1 = (VAR_0->x + 1) & 0xff;
 VAR_3 = VAR_5[VAR_1];
 VAR_2 = (VAR_3 + VAR_0->y) & 0xff;
 VAR_4 = VAR_5[VAR_2];
 VAR_0->x = VAR_1;
 VAR_0->y = VAR_2;
 VAR_5[VAR_2] = (u8)VAR_3;
 VAR_5[VAR_1] = (u8)VAR_4;
 return VAR_5[(VAR_3 + VAR_4) & 0xff];
}
