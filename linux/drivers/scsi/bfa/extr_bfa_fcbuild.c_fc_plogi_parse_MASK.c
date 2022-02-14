
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct TYPE_2__ {int class_valid; scalar_t__ rxsz; } ;
struct fc_logi_s {TYPE_1__ class3; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

enum fc_parse_status
FUNC_1(struct fchs_s *VAR_4)
{
 struct fc_logi_s *VAR_5 = (struct fc_logi_s *) (VAR_4 + 1);

 if (VAR_5->class3.class_valid != 1)
  return VAR_2;

 if ((FUNC_0(VAR_5->class3.rxsz) < VAR_1)
     || (FUNC_0(VAR_5->class3.rxsz) > VAR_0)
     || (VAR_5->class3.rxsz == 0))
  return VAR_2;

 return VAR_3;
}
