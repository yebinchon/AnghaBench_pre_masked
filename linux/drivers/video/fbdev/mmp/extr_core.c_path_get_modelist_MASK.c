
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_path {TYPE_1__* panel; } ;
struct mmp_mode {int dummy; } ;
struct TYPE_2__ {int (* get_modelist ) (TYPE_1__*,struct mmp_mode**) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct mmp_mode**) ;

__attribute__((used)) static int FUNC_2(struct mmp_path *VAR_0,
  struct mmp_mode **VAR_1)
{
 FUNC_0(!VAR_0 || !VAR_1);

 if (VAR_0->panel && VAR_0->panel->get_modelist)
  return VAR_0->panel->get_modelist(VAR_0->panel, VAR_1);

 return 0;
}
