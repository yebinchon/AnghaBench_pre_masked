
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {TYPE_1__* ieee; } ;
struct host_command {int host_command_length; int * host_command_parameters; int host_command_sequence; int host_command; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ipw2100_priv*) ;
 int FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_4(struct ipw2100_priv *VAR_2,
         u32 VAR_3, int VAR_4)
{
 struct host_command VAR_5 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = 4
 };
 int VAR_6;

 VAR_5.host_command_parameters[0] = VAR_3;

 FUNC_0("enter\n");

 if (VAR_2->ieee->iw_mode == VAR_1) {
  if (!VAR_4) {
   VAR_6 = FUNC_1(VAR_2);
   if (VAR_6)
    return VAR_6;
  }

  FUNC_3(VAR_2, &VAR_5);

  if (!VAR_4) {
   VAR_6 = FUNC_2(VAR_2);
   if (VAR_6)
    return VAR_6;
  }
 }

 FUNC_0("exit\n");

 return 0;
}
