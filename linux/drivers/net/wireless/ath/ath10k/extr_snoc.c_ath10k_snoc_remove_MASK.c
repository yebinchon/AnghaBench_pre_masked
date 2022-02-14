
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ath10k_snoc {int flags; } ;
struct ath10k {int driver_recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 struct ath10k_snoc* FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 struct ath10k* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct ath10k *VAR_5 = FUNC_8(VAR_4);
 struct ath10k_snoc *VAR_6 = FUNC_6(VAR_5);

 FUNC_2(VAR_5, VAR_0, "snoc remove\n");

 FUNC_9(&VAR_5->driver_recovery);

 if (FUNC_11(VAR_1, &VAR_6->flags))
  FUNC_12(&VAR_5->driver_recovery, 3 * VAR_3);

 FUNC_10(VAR_2, &VAR_6->flags);

 FUNC_1(VAR_5);
 FUNC_3(VAR_5);
 FUNC_5(VAR_5);
 FUNC_7(VAR_5);
 FUNC_4(VAR_5);
 FUNC_0(VAR_5);

 return 0;
}
