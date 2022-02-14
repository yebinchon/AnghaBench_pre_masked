
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

int FUNC_6(struct iwl_trans *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_4, "iwl_trans_prepare_card_hw enter\n");

 VAR_5 = FUNC_2(VAR_4);

 if (VAR_5 >= 0)
  return 0;

 FUNC_3(VAR_4, VAR_0,
      VAR_3);
 FUNC_5(1000, 2000);

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {

  FUNC_3(VAR_4, VAR_1,
       VAR_2);

  do {
   VAR_5 = FUNC_2(VAR_4);
   if (VAR_5 >= 0)
    return 0;

   FUNC_5(200, 1000);
   VAR_6 += 200;
  } while (VAR_6 < 150000);
  FUNC_4(25);
 }

 FUNC_1(VAR_4, "Couldn't prepare the card\n");

 return VAR_5;
}
