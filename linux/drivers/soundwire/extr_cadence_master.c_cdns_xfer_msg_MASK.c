
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_msg {int len; } ;
struct sdw_cdns {int dummy; } ;
struct sdw_bus {int dummy; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdw_cdns*,struct sdw_msg*,int,int,int,int) ;
 struct sdw_cdns* FUNC_1 (struct sdw_bus*) ;
 int FUNC_2 (struct sdw_cdns*,struct sdw_msg*,int*) ;

enum sdw_command_response
FUNC_3(struct sdw_bus *VAR_2, struct sdw_msg *VAR_3)
{
 struct sdw_cdns *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0, VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_4, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_3->len / VAR_0; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_5, VAR_7 * VAR_0,
         VAR_0, 0);
  if (VAR_6 < 0)
   goto exit;
 }

 if (!(VAR_3->len % VAR_0))
  goto exit;

 VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_5, VAR_7 * VAR_0,
        VAR_3->len % VAR_0, 0);

exit:
 return VAR_6;
}
