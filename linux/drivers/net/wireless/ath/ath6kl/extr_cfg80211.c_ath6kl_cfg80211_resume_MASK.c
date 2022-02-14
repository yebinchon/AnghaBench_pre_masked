
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {int state; } ;


 int VAR_0 ;



 int FUNC_0 (struct ath6kl*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct ath6kl*) ;

int FUNC_5(struct ath6kl *VAR_1)
{
 int VAR_2;

 switch (VAR_1->state) {
 case 128:
  FUNC_1(VAR_0, "wow mode resume\n");

  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2) {
   FUNC_3("wow mode resume failed: %d\n", VAR_2);
   return VAR_2;
  }

  break;

 case 129:
  FUNC_1(VAR_0, "deep sleep resume\n");

  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2) {
   FUNC_3("deep sleep resume failed: %d\n", VAR_2);
   return VAR_2;
  }
  break;

 case 130:
  FUNC_1(VAR_0, "resume restoring power\n");

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2) {
   FUNC_3("Failed to boot hw in resume: %d\n", VAR_2);
   return VAR_2;
  }
  break;

 default:
  break;
 }

 return 0;
}
