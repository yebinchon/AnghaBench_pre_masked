
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fchs_s {scalar_t__ cat_info; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

enum fc_parse_status
FUNC_0(struct fchs_s *VAR_4, int VAR_5)
{
 if ((VAR_4->cat_info == VAR_0)
     || (VAR_4->cat_info == VAR_1))
  return VAR_3;

 return VAR_2;
}
