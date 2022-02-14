
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct beiscsi_hba {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*,int) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct beiscsi_hba *VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = VAR_6 & VAR_3;
 if ((VAR_7 & VAR_2) ==
     VAR_4) {
  FUNC_2(VAR_0, &VAR_5->state);
  FUNC_0(VAR_5, VAR_1,
         "BC_%d : HBA error recoverable: 0x%x\n", VAR_6);
  VAR_8 = 1;
 } else {
  FUNC_0(VAR_5, VAR_1,
         "BC_%d : HBA in UE: 0x%x\n", VAR_6);
 }

 return VAR_8;
}
