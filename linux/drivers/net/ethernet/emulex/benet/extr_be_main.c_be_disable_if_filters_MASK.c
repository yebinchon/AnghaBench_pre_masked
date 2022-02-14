
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int if_flags; int dev_mac; int * pmac_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*) ;
 int VAR_2 ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*,int ,int ) ;
 int FUNC_4 (struct be_adapter*,int ) ;
 int FUNC_5 (struct be_adapter*) ;
 scalar_t__ FUNC_6 (struct be_adapter*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_9(struct be_adapter *VAR_3)
{

 if (!FUNC_0(VAR_3) || !FUNC_5(VAR_3) ||
     FUNC_6(VAR_3, VAR_1)) {
  FUNC_4(VAR_3, VAR_3->pmac_id[0]);
  FUNC_7(VAR_3->dev_mac);
 }

 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 if (FUNC_8(VAR_3)) {
  FUNC_3(VAR_3, VAR_0, VAR_2);
  VAR_3->if_flags &= ~VAR_0;
 }
}
