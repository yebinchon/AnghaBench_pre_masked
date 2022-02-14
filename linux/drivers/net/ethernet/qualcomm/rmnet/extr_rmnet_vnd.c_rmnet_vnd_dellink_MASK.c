
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rmnet_port {int nr_rmnet_devs; } ;
struct rmnet_endpoint {int * egress_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(u8 VAR_2, struct rmnet_port *VAR_3,
        struct rmnet_endpoint *VAR_4)
{
 if (VAR_2 >= VAR_1 || !VAR_4->egress_dev)
  return -VAR_0;

 VAR_4->egress_dev = ((void*)0);
 VAR_3->nr_rmnet_devs--;
 return 0;
}
