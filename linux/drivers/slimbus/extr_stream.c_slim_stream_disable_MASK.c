
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct slim_stream_runtime {int num_ports; int * ports; TYPE_1__* dev; } ;
struct slim_controller {int (* disable_stream ) (struct slim_stream_runtime*) ;} ;
struct TYPE_6__ {int mc; } ;
struct TYPE_5__ {struct slim_controller* ctrl; } ;


 int FUNC_0 (TYPE_2__,int ,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct slim_stream_runtime*,int *) ;
 int FUNC_2 (struct slim_controller*,TYPE_2__*) ;
 int FUNC_3 (struct slim_stream_runtime*) ;
 TYPE_2__ VAR_3 ;

int FUNC_4(struct slim_stream_runtime *VAR_4)
{
 FUNC_0(VAR_3, VAR_1,
    3, VAR_0, ((void*)0));
 struct slim_controller *VAR_5 = VAR_4->dev->ctrl;
 int VAR_6, VAR_7;

 if (VAR_5->disable_stream)
  VAR_5->disable_stream(VAR_4);

 VAR_6 = FUNC_2(VAR_5, &VAR_3);
 if (VAR_6)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_ports; VAR_7++)
  FUNC_1(VAR_4, &VAR_4->ports[VAR_7]);

 VAR_3.mc = VAR_2;

 return FUNC_2(VAR_5, &VAR_3);
}
