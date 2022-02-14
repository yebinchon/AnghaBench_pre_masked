
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {scalar_t__ msix_enabled; } ;
struct iwl_trans {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,int) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*,int,int) ;
 unsigned long VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

void FUNC_10(struct iwl_trans *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_0(VAR_7);
 unsigned long VAR_9 = VAR_6 + VAR_3;
 bool VAR_10 = FUNC_8(VAR_5, &VAR_7->status);
 u32 VAR_11, VAR_12;

 if (VAR_8->msix_enabled) {
  VAR_11 = VAR_2;
  VAR_12 = VAR_4;
 } else {
  VAR_11 = VAR_0;
  VAR_12 = VAR_1;
 }




 if (VAR_10)
  FUNC_1(VAR_7);

 FUNC_3(VAR_7);
 while (FUNC_9(VAR_9, VAR_6)) {
  u32 VAR_13 = FUNC_4(VAR_7, VAR_11);


  if (VAR_13 & VAR_12) {

   FUNC_6(VAR_7, VAR_11, VAR_13 & VAR_12);
   break;
  }

  FUNC_7(1);
 }





 if (VAR_10)
  FUNC_2(VAR_7);

 FUNC_5(VAR_7);
}
