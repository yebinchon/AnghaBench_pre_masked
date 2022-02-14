
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_power_data {scalar_t__ ac_charger_quirk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(const struct twl4030_power_data *VAR_7,
     u8 VAR_8)
{
 int VAR_9 = 0;
 u8 VAR_10;


 VAR_9 = FUNC_4(VAR_6, VAR_8, VAR_4);
 if (VAR_9)
  goto out;


 VAR_9 = FUNC_3(VAR_6, &VAR_10, VAR_2);
 if (VAR_9)
  goto out;

 VAR_10 |= VAR_0;
 VAR_9 = FUNC_4(VAR_6, VAR_10, VAR_2);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_3(VAR_6, &VAR_10, VAR_3);
 if (VAR_9)
  goto out;

 VAR_10 |= VAR_0;
 VAR_9 = FUNC_4(VAR_6, VAR_10, VAR_3);
 if (VAR_9)
  goto out;

 if (VAR_7->ac_charger_quirk || FUNC_0() ||
     FUNC_1()) {

  VAR_9 = FUNC_3(VAR_6, &VAR_10,
          VAR_1);
  if (VAR_9)
   goto out;
  VAR_10 &= ~VAR_5;
  VAR_9 = FUNC_4(VAR_6, VAR_10,
           VAR_1);
  if (VAR_9)
   goto out;
 }

out:
 if (VAR_9)
  FUNC_2("TWL4030 wakeup sequence for P1 and P2" "config error\n");

 return VAR_9;
}
