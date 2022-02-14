
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwn_t ;
struct TYPE_2__ {scalar_t__ els_code; } ;
struct fc_adisc_s {int orig_port_name; TYPE_1__ els_cmd; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

enum fc_parse_status
FUNC_1(struct fc_adisc_s *VAR_3, int VAR_4, wwn_t VAR_5,
     wwn_t VAR_6)
{

 if (VAR_4 < sizeof(struct fc_adisc_s))
  return VAR_1;

 if (VAR_3->els_cmd.els_code != VAR_0)
  return VAR_1;

 if (!FUNC_0(VAR_3->orig_port_name, VAR_5))
  return VAR_1;

 return VAR_2;
}
