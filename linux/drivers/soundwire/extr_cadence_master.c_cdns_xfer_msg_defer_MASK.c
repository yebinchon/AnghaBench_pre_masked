
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_msg {int len; } ;
struct sdw_defer {int length; } ;
struct sdw_cdns {struct sdw_defer* defer; } ;
struct sdw_bus {int dummy; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdw_cdns*,struct sdw_msg*,int,int ,int,int) ;
 struct sdw_cdns* FUNC_1 (struct sdw_bus*) ;
 int FUNC_2 (struct sdw_cdns*,struct sdw_msg*,int*) ;

enum sdw_command_response
FUNC_3(struct sdw_bus *VAR_2,
      struct sdw_msg *VAR_3, struct sdw_defer *VAR_4)
{
 struct sdw_cdns *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = 0, VAR_7;


 if (VAR_3->len > 1)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5, VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_1;

 VAR_5->defer = VAR_4;
 VAR_5->defer->length = VAR_3->len;

 return FUNC_0(VAR_5, VAR_3, VAR_6, 0, VAR_3->len, 1);
}
