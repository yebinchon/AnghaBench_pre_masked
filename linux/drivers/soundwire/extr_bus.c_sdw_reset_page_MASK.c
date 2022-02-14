
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int err_threshold; } ;
struct sdw_bus {TYPE_2__* ops; TYPE_1__ prop; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;
struct TYPE_4__ {int (* reset_page_addr ) (struct sdw_bus*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sdw_bus*,int ) ;

__attribute__((used)) static int FUNC_2(struct sdw_bus *VAR_1, u16 VAR_2)
{
 int VAR_3 = VAR_1->prop.err_threshold;
 enum sdw_command_response VAR_4;
 int VAR_5 = 0, VAR_6;

 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
  VAR_4 = VAR_1->ops->reset_page_addr(VAR_1, VAR_2);
  VAR_5 = FUNC_0(VAR_4);

  if (VAR_5 == 0 || VAR_5 == -VAR_0)
   return VAR_5;
 }

 return VAR_5;
}
