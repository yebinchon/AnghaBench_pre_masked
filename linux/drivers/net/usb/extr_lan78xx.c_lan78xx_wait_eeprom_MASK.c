
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_net {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct lan78xx_net *VAR_6)
{
 unsigned long VAR_7 = VAR_5;
 u32 VAR_8;
 int VAR_9;

 do {
  VAR_9 = FUNC_0(VAR_6, VAR_0, &VAR_8);
  if (FUNC_3(VAR_9 < 0))
   return -VAR_3;

  if (!(VAR_8 & VAR_1) ||
      (VAR_8 & VAR_2))
   break;
  FUNC_4(40, 100);
 } while (!FUNC_2(VAR_5, VAR_7 + VAR_4));

 if (VAR_8 & (VAR_2 | VAR_1)) {
  FUNC_1(VAR_6->net, "EEPROM read operation timeout");
  return -VAR_3;
 }

 return 0;
}
