
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw2100_priv {int config; int channel_mask; TYPE_2__* ieee; } ;
struct host_command {int host_command_length; int * host_command_parameters; int host_command_sequence; int host_command; } ;
struct TYPE_3__ {int flags; scalar_t__ enabled; } ;
struct TYPE_4__ {TYPE_1__ sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_4(struct ipw2100_priv *VAR_7)
{
 struct host_command VAR_8 = {
  .host_command = VAR_6,
  .host_command_sequence = 0,
  .host_command_length = 8
 };
 int VAR_9;

 FUNC_1("enter\n");

 FUNC_2("setting scan options\n");

 VAR_8.host_command_parameters[0] = 0;

 if (!(VAR_7->config & VAR_0))
  VAR_8.host_command_parameters[0] |= VAR_3;
 if ((VAR_7->ieee->sec.flags & VAR_5) && VAR_7->ieee->sec.enabled)
  VAR_8.host_command_parameters[0] |= VAR_2;
 if (VAR_7->config & VAR_1)
  VAR_8.host_command_parameters[0] |= VAR_4;

 VAR_8.host_command_parameters[1] = VAR_7->channel_mask;

 VAR_9 = FUNC_3(VAR_7, &VAR_8);

 FUNC_0("SET_SCAN_OPTIONS 0x%04X\n",
       VAR_8.host_command_parameters[0]);

 return VAR_9;
}
