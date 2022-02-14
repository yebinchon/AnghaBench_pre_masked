
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,int *) ;
 int FUNC_3 (struct ath10k*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,char*,...) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9;

 FUNC_0(VAR_6, VAR_0, "boot 988x chip reset\n");
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8) {
   FUNC_6(VAR_6, "failed to warm reset attempt %d of %d: %d\n",
        VAR_7 + 1, VAR_1,
        VAR_8);
   continue;
  }
  VAR_8 = FUNC_3(VAR_6);
  if (VAR_8) {
   FUNC_6(VAR_6, "failed to init copy engine: %d\n",
        VAR_8);
   continue;
  }

  VAR_8 = FUNC_2(VAR_6, VAR_4,
          &VAR_9);
  if (VAR_8) {
   FUNC_6(VAR_6, "failed to poke copy engine: %d\n",
        VAR_8);
   continue;
  }

  FUNC_0(VAR_6, VAR_0, "boot chip reset complete (warm)\n");
  return 0;
 }

 if (VAR_5 == VAR_2) {
  FUNC_6(VAR_6, "refusing cold reset as requested\n");
  return -VAR_3;
 }

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8) {
  FUNC_6(VAR_6, "failed to cold reset: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_6(VAR_6, "failed to wait for target after cold reset: %d\n",
       VAR_8);
  return VAR_8;
 }

 FUNC_0(VAR_6, VAR_0, "boot qca988x chip reset complete (cold)\n");

 return 0;
}
