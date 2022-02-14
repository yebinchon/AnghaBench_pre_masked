
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct ath5k_hw *VAR_5)
{
 if (VAR_5->ah_version == VAR_0) {
  FUNC_0(VAR_5, VAR_1,
   VAR_3 | VAR_2);
  return 0;
 }

 return -VAR_4;
}
