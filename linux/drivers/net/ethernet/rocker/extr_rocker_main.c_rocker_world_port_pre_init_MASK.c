
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_world_ops {int (* port_pre_init ) (struct rocker_port*) ;int port_priv_size; } ;
struct rocker_port {int wpriv; TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rocker_port*) ;

__attribute__((used)) static int FUNC_3(struct rocker_port *VAR_2)
{
 struct rocker_world_ops *VAR_3 = VAR_2->rocker->wops;
 int VAR_4;

 VAR_2->wpriv = FUNC_1(VAR_3->port_priv_size, VAR_1);
 if (!VAR_2->wpriv)
  return -VAR_0;
 if (!VAR_3->port_pre_init)
  return 0;
 VAR_4 = VAR_3->port_pre_init(VAR_2);
 if (VAR_4)
  FUNC_0(VAR_2->wpriv);
 return 0;
}
