
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initiator; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ servparams; int imagepair; } ;
struct fc_prli_s {TYPE_2__ parampage; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

enum fc_parse_status
FUNC_0(struct fc_prli_s *VAR_3)
{
 if (VAR_3->parampage.type != VAR_2)
  return VAR_0;

 if (!VAR_3->parampage.imagepair)
  return VAR_0;

 if (!VAR_3->parampage.servparams.initiator)
  return VAR_0;

 return VAR_1;
}
