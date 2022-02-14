
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tg3*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct tg3 *VAR_2)
{
 int VAR_3 = 100;

 while (VAR_3--) {
  u32 VAR_4;

  if (!FUNC_0(VAR_2, VAR_1, &VAR_4)) {
   if ((VAR_4 & 0x1000) == 0)
    break;
  }
 }
 if (VAR_3 < 0)
  return -VAR_0;

 return 0;
}
