
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macvlan_port {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (struct macvlan_port const*) ;
 scalar_t__ FUNC_2 (struct macvlan_port const*,unsigned char const*) ;
 int FUNC_3 (struct macvlan_port const*) ;

__attribute__((used)) static bool FUNC_4(const struct macvlan_port *VAR_0,
         const unsigned char *VAR_1)
{




 if (!FUNC_3(VAR_0) && !FUNC_1(VAR_0) &&
     FUNC_0(VAR_0->dev->dev_addr, VAR_1))
  return 1;

 if (FUNC_2(VAR_0, VAR_1))
  return 1;

 return 0;
}
