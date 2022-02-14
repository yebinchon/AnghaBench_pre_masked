
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct core_component* comp; } ;
struct TYPE_4__ {struct core_component* comp; } ;
struct most_channel {int cfg; int channel_id; int iface; TYPE_1__ pipe1; TYPE_2__ pipe0; } ;
struct core_component {int (* probe_channel ) (int ,int ,int *,char*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,char*,char*) ;

__attribute__((used)) static
inline int FUNC_1(struct most_channel *VAR_1,
         struct core_component *VAR_2,
         char *VAR_3,
         char *VAR_4)
{
 int VAR_5;
 struct core_component **VAR_6;

 if (!VAR_1->pipe0.comp)
  VAR_6 = &VAR_1->pipe0.comp;
 else if (!VAR_1->pipe1.comp)
  VAR_6 = &VAR_1->pipe1.comp;
 else
  return -VAR_0;

 *VAR_6 = VAR_2;
 VAR_5 = VAR_2->probe_channel(VAR_1->iface, VAR_1->channel_id, &VAR_1->cfg, VAR_3,
      VAR_4);
 if (VAR_5) {
  *VAR_6 = ((void*)0);
  return VAR_5;
 }
 return 0;
}
