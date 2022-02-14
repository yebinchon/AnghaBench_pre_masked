
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*,...) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_1, VAR_0,
      "failed to load pre cal data: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_4(VAR_1, "failed to get board id: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_4(VAR_1, "failed to run otp: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_2(VAR_1, VAR_0,
     "pre cal configuration done successfully\n");

 return 0;
}
