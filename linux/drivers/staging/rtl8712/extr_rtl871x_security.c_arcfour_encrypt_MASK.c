
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef size_t u32 ;
struct arc4context {int dummy; } ;


 scalar_t__ FUNC_0 (struct arc4context*) ;

__attribute__((used)) static void FUNC_1(struct arc4context *VAR_0,
       u8 *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_1[VAR_4] = VAR_2[VAR_4] ^ (unsigned char)FUNC_0(VAR_0);
}
