
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {int orientation; TYPE_1__* sw; } ;
typedef enum typec_orientation { ____Placeholder_typec_orientation } typec_orientation ;
struct TYPE_2__ {int (* set ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(struct typec_port *VAR_0,
     enum typec_orientation VAR_1)
{
 int VAR_2;

 if (VAR_0->sw) {
  VAR_2 = VAR_0->sw->set(VAR_0->sw, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_0->orientation = VAR_1;

 return 0;
}
