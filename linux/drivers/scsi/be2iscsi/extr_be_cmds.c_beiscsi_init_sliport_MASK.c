
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int ctrl; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*) ;

int FUNC_4(struct beiscsi_hba *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_3;


 VAR_5->state &= ~VAR_0;


 VAR_5->state &= ~VAR_1;





 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_5, VAR_4, VAR_2,
       "BC_%d : SLI Function Reset failed\n");
  return VAR_6;
 }


 return FUNC_2(&VAR_5->ctrl, 1);
}
