
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,int *) ;
 int FUNC_1 (struct ath10k*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_1)
{
 u32 VAR_2;
 int VAR_3;


 FUNC_1(VAR_1, "firmware crashed\n");




 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 if (VAR_3)
  FUNC_1(VAR_1, "failed to clear debug interrupt: %d\n", VAR_3);

 return VAR_3;
}
