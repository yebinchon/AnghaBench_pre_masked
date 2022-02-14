
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct core_component* comp; } ;
struct TYPE_4__ {struct core_component* comp; } ;
struct most_channel {TYPE_1__ pipe1; TYPE_2__ pipe0; int channel_id; int iface; } ;
struct core_component {scalar_t__ (* disconnect_channel ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct most_channel* FUNC_0 (char*,char*) ;
 struct core_component* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(char *VAR_2, char *VAR_3, char *VAR_4)
{
 struct most_channel *VAR_5;
 struct core_component *VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6)
  return -VAR_1;
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_1;

 if (VAR_6->disconnect_channel(VAR_5->iface, VAR_5->channel_id))
  return -VAR_0;
 if (VAR_5->pipe0.comp == VAR_6)
  VAR_5->pipe0.comp = ((void*)0);
 if (VAR_5->pipe1.comp == VAR_6)
  VAR_5->pipe1.comp = ((void*)0);
 return 0;
}
