
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0, int VAR_1, int VAR_2,
  int VAR_3, int VAR_4, int VAR_5)
{
 FUNC_0(VAR_0, 0, VAR_1);

 if (VAR_2) {

  if (VAR_1 < 4) {
   FUNC_1("Length %d of sense buffer too small to "
    "fit sense %x:%x:%x", VAR_1, VAR_3, VAR_4, VAR_5);
  }

  VAR_0[0] = 0x72;
  if (VAR_1 > 1)
   VAR_0[1] = VAR_3;
  if (VAR_1 > 2)
   VAR_0[2] = VAR_4;
  if (VAR_1 > 3)
   VAR_0[3] = VAR_5;
 } else {
  if (VAR_1 < 14) {
   FUNC_1("Length %d of sense buffer too small to "
    "fit sense %x:%x:%x", VAR_1, VAR_3, VAR_4, VAR_5);
  }

  VAR_0[0] = 0x70;
  if (VAR_1 > 2)
   VAR_0[2] = VAR_3;
  if (VAR_1 > 7)
   VAR_0[7] = 0x0a;
  if (VAR_1 > 12)
   VAR_0[12] = VAR_4;
  if (VAR_1 > 13)
   VAR_0[13] = VAR_5;
 }

 return;
}
