
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0, "soc power on\n");

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto vreg_off;

 return VAR_2;

vreg_off:
 FUNC_2(VAR_1);
 return VAR_2;
}
