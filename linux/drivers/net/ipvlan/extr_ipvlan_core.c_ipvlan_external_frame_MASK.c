
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct ipvl_port {int dummy; } ;
struct ipvl_addr {int dummy; } ;
struct ethhdr {int h_source; } ;
struct TYPE_2__ {int dev_addr; } ;


 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct ipvl_addr* FUNC_2 (struct ipvl_port*,void*,int,int) ;
 void* FUNC_3 (struct ipvl_port*,struct sk_buff*,int*) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_0, struct ipvl_port *VAR_1)
{
 struct ethhdr *VAR_2 = FUNC_0(VAR_0);
 struct ipvl_addr *VAR_3;
 void *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2->h_source, VAR_0->dev->dev_addr)) {
  VAR_4 = FUNC_3(VAR_1, VAR_0, &VAR_5);
  if (!VAR_4)
   return 1;

  VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_5, 0);
  if (VAR_3)
   return 0;
 }

 return 1;
}
