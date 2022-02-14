
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u32 FUNC_3(struct tg3 *VAR_8)
{
 u32 VAR_9, VAR_10;

 FUNC_2(VAR_5, VAR_6);

 if (FUNC_0(VAR_8, VAR_3))
  return 0;

 FUNC_2(VAR_0, VAR_1);

 if (FUNC_0(VAR_8, VAR_4))
  return 0;

 VAR_10 = FUNC_1(VAR_7);

 FUNC_2(VAR_0, VAR_2);

 if (FUNC_0(VAR_8, VAR_4))
  return 0;

 VAR_9 = FUNC_1(VAR_7);

 return ((VAR_10 & 0x0000ffff) << 16) | (VAR_9 >> 16);
}
