
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ath10k_ahb {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 struct ath10k_ahb* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*,int ,char*) ;
 int FUNC_9 (struct ath10k*) ;
 struct ath10k* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_2)
{
 struct ath10k *VAR_3 = FUNC_10(VAR_2);
 struct ath10k_ahb *VAR_4;

 if (!VAR_3)
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_3);

 if (!VAR_4)
  return -VAR_1;

 FUNC_8(VAR_3, VAR_0, "ahb remove\n");

 FUNC_7(VAR_3);
 FUNC_2(VAR_3);
 FUNC_4(VAR_3);
 FUNC_9(VAR_3);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);

 FUNC_11(VAR_2, ((void*)0));

 return 0;
}
