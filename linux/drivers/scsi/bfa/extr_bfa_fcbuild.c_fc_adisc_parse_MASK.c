
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwn_t ;
typedef scalar_t__ u32 ;
struct fchs_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ els_code; } ;
struct fc_adisc_s {scalar_t__ nport_id; int orig_node_name; int orig_port_name; TYPE_1__ els_cmd; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

enum fc_parse_status
FUNC_1(struct fchs_s *VAR_3, void *VAR_4, u32 VAR_5, wwn_t VAR_6,
        wwn_t VAR_7)
{
 struct fc_adisc_s *VAR_8 = (struct fc_adisc_s *) VAR_4;

 if (VAR_8->els_cmd.els_code != VAR_0)
  return VAR_1;

 if ((VAR_8->nport_id == (VAR_5))
     && FUNC_0(VAR_8->orig_port_name, VAR_7)
     && FUNC_0(VAR_8->orig_node_name, VAR_6))
  return VAR_2;

 return VAR_1;
}
