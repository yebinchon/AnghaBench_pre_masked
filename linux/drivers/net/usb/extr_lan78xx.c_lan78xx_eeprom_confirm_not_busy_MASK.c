
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_net {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct lan78xx_net *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 u32 VAR_7;
 int VAR_8;

 do {
  VAR_8 = FUNC_0(VAR_5, VAR_0, &VAR_7);
  if (FUNC_3(VAR_8 < 0))
   return -VAR_2;

  if (!(VAR_7 & VAR_1))
   return 0;

  FUNC_4(40, 100);
 } while (!FUNC_2(VAR_4, VAR_6 + VAR_3));

 FUNC_1(VAR_5->net, "EEPROM is busy");
 return -VAR_2;
}
