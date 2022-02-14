
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int target_suspend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,...) ;
 int FUNC_1 (struct ath10k*,int ) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *,int) ;

int FUNC_4(struct ath10k *VAR_2, u32 VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->target_suspend);

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, "could not suspend target (%d)\n", VAR_4);
  return VAR_4;
 }

 VAR_5 = FUNC_3(&VAR_2->target_suspend, 1 * VAR_1);

 if (!VAR_5) {
  FUNC_0(VAR_2, "suspend timed out - target pause event never came\n");
  return -VAR_0;
 }

 return 0;
}
