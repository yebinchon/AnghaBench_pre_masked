
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_task_management_response {int response_code; } ;


 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static int FUNC_0(
 struct pqi_task_management_response *VAR_2)
{
 int VAR_3;

 switch (VAR_2->response_code) {
 case 130:
 case 129:
  VAR_3 = 0;
  break;
 case 128:
  VAR_3 = -VAR_0;
  break;
 default:
  VAR_3 = -VAR_1;
  break;
 }

 return VAR_3;
}
