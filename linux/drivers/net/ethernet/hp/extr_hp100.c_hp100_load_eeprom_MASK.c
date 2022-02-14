
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct net_device {int base_addr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5, u_short VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_6 > 0 ? VAR_6 : VAR_5->base_addr;





 FUNC_4(VAR_0);
 FUNC_0(~VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_0);
 for (VAR_7 = 0; VAR_7 < 10000; VAR_7++)
  if (!(FUNC_1(VAR_3) & VAR_2))
   return;
 FUNC_5("hp100: %s: hp100_load_eeprom - timeout\n", VAR_5->name);
}
