
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq_els_data {int explan; int reason; } ;
struct fc_frame {int dummy; } ;
typedef enum fc_els_cmd { ____Placeholder_fc_els_cmd } fc_els_cmd ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_frame*,int ,int ) ;
 int FUNC_5 (struct fc_frame*) ;

void FUNC_6(struct fc_frame *VAR_0, enum fc_els_cmd VAR_1,
    struct fc_seq_els_data *VAR_2)
{
 switch (VAR_1) {
 case 130:
  FUNC_4(VAR_0, VAR_2->reason, VAR_2->explan);
  break;
 case 131:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0);
  break;
 default:
  FUNC_0(FUNC_5(VAR_0), "Invalid ELS CMD:%x\n", VAR_1);
 }
}
