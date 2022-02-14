
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct smb347_charger*) ;
 int FUNC_2 (struct smb347_charger*) ;
 scalar_t__ FUNC_3 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_4(struct smb347_charger *VAR_0)
{
 int VAR_1;






 if (FUNC_3(VAR_0)) {
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1 < 0)
   FUNC_0(VAR_0->dev, "failed to enable charging\n");
 } else {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 < 0)
   FUNC_0(VAR_0->dev, "failed to disable charging\n");
 }

 return VAR_1;
}
