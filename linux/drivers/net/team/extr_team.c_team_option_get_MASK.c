
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_option_inst {TYPE_1__* option; } ;
struct team_gsetter_ctx {int dummy; } ;
struct team {int dummy; } ;
struct TYPE_2__ {int (* getter ) (struct team*,struct team_gsetter_ctx*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct team*,struct team_gsetter_ctx*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_1,
      struct team_option_inst *VAR_2,
      struct team_gsetter_ctx *VAR_3)
{
 if (!VAR_2->option->getter)
  return -VAR_0;
 return VAR_2->option->getter(VAR_1, VAR_3);
}
