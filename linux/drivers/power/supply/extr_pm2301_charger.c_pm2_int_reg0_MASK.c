
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2xxx_charger {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm2xxx_charger*,int) ;
 int FUNC_1 (struct pm2xxx_charger*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, int VAR_4)
{
 struct pm2xxx_charger *VAR_5 = VAR_3;
 int VAR_6 = 0;

 if (VAR_4 & VAR_2) {
  VAR_6 = FUNC_1(VAR_5,
      VAR_2);
  if (VAR_6 < 0)
   goto out;
 }

 if (VAR_4 & VAR_1) {
  VAR_6 = FUNC_1(VAR_5,
      VAR_1);
  if (VAR_6 < 0)
   goto out;
 }

 if (VAR_4 & VAR_0) {
  VAR_6 = FUNC_0(VAR_5,
    VAR_0);
  if (VAR_6 < 0)
   goto out;
 }
out:
 return VAR_6;
}
