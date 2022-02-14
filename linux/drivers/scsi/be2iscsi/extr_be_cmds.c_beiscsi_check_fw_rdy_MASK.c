
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct beiscsi_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*,int) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct beiscsi_hba *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7 = 0;

 VAR_5 = 1000;
 while (VAR_5--) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6 & VAR_1)
   break;
  if ((VAR_6 & VAR_3) == VAR_2) {
   VAR_7 = 1;
   break;
  }
  FUNC_2(60);
 }

 if (!VAR_7) {
  FUNC_0(VAR_4, VAR_0,
         "BC_%d : FW not ready 0x%x\n", VAR_6);
 }

 return VAR_7;
}
