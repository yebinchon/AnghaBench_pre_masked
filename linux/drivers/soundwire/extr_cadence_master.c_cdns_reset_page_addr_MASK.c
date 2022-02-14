
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_msg {unsigned int dev_num; } ;
struct sdw_cdns {int dummy; } ;
struct sdw_bus {int dummy; } ;
typedef int msg ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;


 struct sdw_cdns* FUNC_0 (struct sdw_bus*) ;
 int FUNC_1 (struct sdw_cdns*,struct sdw_msg*) ;
 int FUNC_2 (struct sdw_msg*,int ,int) ;

enum sdw_command_response
FUNC_3(struct sdw_bus *VAR_0, unsigned int VAR_1)
{
 struct sdw_cdns *VAR_2 = FUNC_0(VAR_0);
 struct sdw_msg VAR_3;


 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.dev_num = VAR_1;

 return FUNC_1(VAR_2, &VAR_3);
}
