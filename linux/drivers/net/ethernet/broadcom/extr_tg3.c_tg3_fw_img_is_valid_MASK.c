
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 scalar_t__ FUNC_0 (struct tg3*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct tg3 *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_0, VAR_1, &VAR_2) ||
     (VAR_2 & 0xfc000000) != 0x0c000000 ||
     FUNC_0(VAR_0, VAR_1 + 4, &VAR_2) ||
     VAR_2 != 0)
  return 0;

 return 1;
}
