
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct esas2r_adapter {int disable_cnt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*,scalar_t__) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (struct esas2r_adapter*,int ) ;
 int FUNC_7 (struct esas2r_adapter*) ;
 scalar_t__ FUNC_8 (struct esas2r_adapter*,int ) ;
 int FUNC_9 (struct esas2r_adapter*,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

irqreturn_t FUNC_12(int VAR_6, void *VAR_7)
{
 struct esas2r_adapter *VAR_8 = (struct esas2r_adapter *)VAR_7;
 u32 VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_8(VAR_8, VAR_3);

 if (FUNC_10(VAR_9 & VAR_2)) {


  FUNC_9(VAR_8, VAR_5,
         VAR_4);
  FUNC_6(VAR_8, VAR_5);

  FUNC_7(VAR_8);
 }

 if (FUNC_11(VAR_9 & VAR_1)) {
  VAR_10 = FUNC_8(VAR_8, VAR_0);
  if (VAR_10 != 0)
   FUNC_4(VAR_8, VAR_10);
 }





 FUNC_1(VAR_8);
 FUNC_5(VAR_8);

 if (FUNC_10(FUNC_0(&VAR_8->disable_cnt) == 0))
  FUNC_2(VAR_8);

 FUNC_3(VAR_8);

 return 1;
}
