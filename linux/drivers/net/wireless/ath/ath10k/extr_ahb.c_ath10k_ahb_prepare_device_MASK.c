
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,int ,int ) ;
 int FUNC_7 (struct ath10k*,char*) ;
 int FUNC_8 (struct ath10k*) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6) {
  FUNC_7(VAR_4, "failed to enable clocks\n");
  return VAR_6;
 }
 VAR_5 = FUNC_2(VAR_4, VAR_0);
 FUNC_6(VAR_4, VAR_1, VAR_5);

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  goto err_clk_disable;

 FUNC_4(VAR_4);

 FUNC_6(VAR_4, VAR_2, VAR_3);

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  goto err_halt_chip;

 return 0;

err_halt_chip:
 FUNC_3(VAR_4);

err_clk_disable:
 FUNC_0(VAR_4);

 return VAR_6;
}
