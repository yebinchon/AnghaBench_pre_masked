
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath6kl {int dummy; } ;


 int FUNC_0 (struct ath6kl*,int ,int *) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct ath6kl *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1("failed to read32 through diagnose window: %d\n",
       VAR_3);
  return VAR_3;
 }

 return 0;
}
