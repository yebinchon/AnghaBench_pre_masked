
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwn_t ;
struct fchs_s {int dummy; } ;
struct TYPE_2__ {int class_valid; scalar_t__ rxsz; } ;
struct fc_logi_s {int node_name; int port_name; TYPE_1__ class3; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

enum fc_parse_status
FUNC_2(struct fchs_s *VAR_3, wwn_t VAR_4, wwn_t VAR_5)
{
 struct fc_logi_s *VAR_6 = (struct fc_logi_s *) (VAR_3 + 1);

 if (VAR_6->class3.class_valid != 1)
  return VAR_1;

 if ((FUNC_0(VAR_6->class3.rxsz) <
  (VAR_0 - sizeof(struct fchs_s)))
     || (VAR_6->class3.rxsz == 0))
  return VAR_1;

 if (!FUNC_1(VAR_6->port_name, VAR_5))
  return VAR_1;

 if (!FUNC_1(VAR_6->node_name, VAR_4))
  return VAR_1;

 return VAR_2;
}
