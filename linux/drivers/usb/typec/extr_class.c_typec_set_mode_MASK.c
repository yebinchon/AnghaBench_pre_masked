
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {TYPE_1__* mux; } ;
struct TYPE_2__ {int (* set ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(struct typec_port *VAR_0, int VAR_1)
{
 return VAR_0->mux ? VAR_0->mux->set(VAR_0->mux, VAR_1) : 0;
}
