
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int dummy; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath5k_hw*,unsigned int) ;

int
FUNC_2(struct ath5k_hw *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, VAR_0,
    "beacon queue didn't stop !\n");
  return -VAR_1;
 }
 return 0;
}
