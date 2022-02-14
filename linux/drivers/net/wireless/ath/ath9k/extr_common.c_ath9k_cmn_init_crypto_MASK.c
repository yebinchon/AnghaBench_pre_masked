
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ath_hw {int misc_mode; } ;
struct ath_common {int keymax; int crypt_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ) ;

void FUNC_2(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = 0;


 VAR_4->keymax = VAR_0;







 if (VAR_3->misc_mode & VAR_1)
  VAR_4->crypt_caps |= VAR_2;





 for (VAR_5 = 0; VAR_5 < VAR_4->keymax; VAR_5++)
  FUNC_1(VAR_4, (u16) VAR_5);
}
