
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_general_admin_response {int dummy; } ;
struct pqi_general_admin_request {int function_code; } ;
struct pqi_ctrl_info {int dummy; } ;


 int FUNC_0 (struct pqi_ctrl_info*,struct pqi_general_admin_response*) ;
 int FUNC_1 (struct pqi_ctrl_info*,struct pqi_general_admin_request*) ;
 int FUNC_2 (struct pqi_general_admin_response*,int ) ;

__attribute__((used)) static int FUNC_3(
 struct pqi_ctrl_info *VAR_0,
 struct pqi_general_admin_request *VAR_1,
 struct pqi_general_admin_response *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_1);

 VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_2,
   VAR_1->function_code);

 return VAR_3;
}
