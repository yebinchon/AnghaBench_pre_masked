
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct ntb_transport_client {TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct ntb_transport_client *VAR_3)
{
 VAR_3->driver.bus = &VAR_1;

 if (FUNC_1(&VAR_2))
  return -VAR_0;

 return FUNC_0(&VAR_3->driver);
}
