
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int disable_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*,int) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (struct esas2r_adapter*,int ) ;
 int FUNC_6 (struct esas2r_adapter*) ;
 int FUNC_7 (struct esas2r_adapter*,int ) ;
 int FUNC_8 (struct esas2r_adapter*,int ,int ) ;

void FUNC_9(struct esas2r_adapter *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 FUNC_1(VAR_6);

 VAR_7 = FUNC_7(VAR_6, VAR_3);

 if (VAR_7 & VAR_2) {


  FUNC_8(VAR_6, VAR_5,
         VAR_4);
  FUNC_5(VAR_6, VAR_5);

  FUNC_6(VAR_6);
 }

 if (VAR_7 & VAR_1) {
  VAR_8 = FUNC_7(VAR_6, VAR_0);
  if (VAR_8 != 0)
   FUNC_3(VAR_6, VAR_8);
 }

 FUNC_4(VAR_6);

 if (FUNC_0(&VAR_6->disable_cnt) == 0)
  FUNC_2(VAR_6);
}
