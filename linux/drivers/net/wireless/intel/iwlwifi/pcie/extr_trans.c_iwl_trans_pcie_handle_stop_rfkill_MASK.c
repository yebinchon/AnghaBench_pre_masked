
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct iwl_trans *VAR_2,
           bool VAR_3)
{
 bool VAR_4;
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_0, &VAR_2->status);
  FUNC_3(VAR_1, &VAR_2->status);
 } else {
  FUNC_0(VAR_0, &VAR_2->status);
  FUNC_0(VAR_1, &VAR_2->status);
 }
 if (VAR_4 != VAR_3)
  FUNC_2(VAR_2, VAR_4);
}
