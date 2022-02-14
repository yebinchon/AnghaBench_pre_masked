
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_port {TYPE_2__* app; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* port_get_stats_count ) (TYPE_2__*,struct nfp_port*) ;} ;


 int FUNC_0 (TYPE_2__*,struct nfp_port*) ;

int FUNC_1(struct nfp_port *VAR_0)
{
 if (!VAR_0 || !VAR_0->app || !VAR_0->app->type->port_get_stats_count)
  return 0;
 return VAR_0->app->type->port_get_stats_count(VAR_0->app, VAR_0);
}
