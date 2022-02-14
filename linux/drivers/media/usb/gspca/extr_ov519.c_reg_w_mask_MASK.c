
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd {int dummy; } ;


 int FUNC_0 (struct sd*,int ) ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0,
   u16 VAR_1,
   u8 VAR_2,
   u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 if (VAR_3 != 0xff) {
  VAR_2 &= VAR_3;
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 < 0)
   return;

  VAR_5 = VAR_4 & ~VAR_3;
  VAR_2 |= VAR_5;
 }
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
