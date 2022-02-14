
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ iu_type; int iu_length; } ;
struct pqi_general_admin_response {scalar_t__ function_code; scalar_t__ status; TYPE_1__ header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(
 struct pqi_general_admin_response *VAR_4, u8 VAR_5)
{
 if (VAR_4->header.iu_type != VAR_3)
  return -VAR_0;

 if (FUNC_0(&VAR_4->header.iu_length) !=
  VAR_1)
  return -VAR_0;

 if (VAR_4->function_code != VAR_5)
  return -VAR_0;

 if (VAR_4->status != VAR_2)
  return -VAR_0;

 return 0;
}
