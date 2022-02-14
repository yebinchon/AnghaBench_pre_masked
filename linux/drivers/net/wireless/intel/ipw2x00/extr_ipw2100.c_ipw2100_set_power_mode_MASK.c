
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int power_mode; scalar_t__ port_type; scalar_t__ adhoc_power; } ;
struct host_command {int host_command_length; int* host_command_parameters; int host_command; int host_command_sequence; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_2(struct ipw2100_priv *VAR_6, int VAR_7)
{
 struct host_command VAR_8 = {
  .host_command = VAR_4,
  .host_command_sequence = 0,
  .host_command_length = 4
 };
 int VAR_9;

 VAR_8.host_command_parameters[0] = VAR_7;

 VAR_9 = FUNC_1(VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_7 == VAR_3)
  VAR_6->power_mode = FUNC_0(VAR_6->power_mode);
 else
  VAR_6->power_mode = VAR_2 | VAR_7;
 return 0;
}
