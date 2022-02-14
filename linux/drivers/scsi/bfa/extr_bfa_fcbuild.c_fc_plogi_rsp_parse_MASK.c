
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwn_t ;
struct fchs_s {int dummy; } ;
struct fc_ls_rjt_s {int reason_code; } ;
struct TYPE_2__ {int rxsz; int class_valid; } ;
struct fc_logi_s {TYPE_1__ class3; int port_name; } ;
struct fc_els_cmd_s {int els_code; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

enum fc_parse_status
FUNC_2(struct fchs_s *VAR_5, int VAR_6, wwn_t VAR_7)
{
 struct fc_els_cmd_s *VAR_8 = (struct fc_els_cmd_s *) (VAR_5 + 1);
 struct fc_logi_s *VAR_9;
 struct fc_ls_rjt_s *VAR_10;

 switch (VAR_8->els_code) {
 case 128:
  VAR_10 = (struct fc_ls_rjt_s *) (VAR_5 + 1);
  if (VAR_10->reason_code == VAR_0)
   return VAR_2;
  else
   return VAR_3;
 case 129:
  VAR_9 = (struct fc_logi_s *) (VAR_5 + 1);
  if (VAR_6 < sizeof(struct fc_logi_s))
   return VAR_3;

  if (!FUNC_1(VAR_9->port_name, VAR_7))
   return VAR_3;

  if (!VAR_9->class3.class_valid)
   return VAR_3;

  if (FUNC_0(VAR_9->class3.rxsz) < (VAR_1))
   return VAR_3;

  return VAR_4;
 default:
  return VAR_3;
 }
}
