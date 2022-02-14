
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {int dev; TYPE_1__* info; } ;
struct TYPE_2__ {scalar_t__ global2_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct mv88e6xxx_chip *VAR_1)
{
 if (VAR_1->info->global2_addr) {
  FUNC_0(VAR_1->dev, "this chip requires CONFIG_NET_DSA_MV88E6XXX_GLOBAL2 enabled\n");
  return -VAR_0;
 }

 return 0;
}
