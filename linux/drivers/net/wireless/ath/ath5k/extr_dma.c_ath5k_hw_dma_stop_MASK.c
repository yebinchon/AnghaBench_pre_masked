
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int) ;

int
FUNC_5(struct ath5k_hw *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 VAR_9 = 0;


 FUNC_2(VAR_6, 0);


 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9)
  return VAR_9;



 if (VAR_6->ah_version != VAR_0) {
  FUNC_1(VAR_6, 0xffffffff, VAR_4);
  VAR_8 = VAR_2;
 } else {

  FUNC_0(VAR_6, VAR_1);
  VAR_8 = VAR_3;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_9 = FUNC_4(VAR_6, VAR_7);

  if (VAR_9 && VAR_9 != -VAR_5)
   return VAR_9;
 }

 return 0;
}
