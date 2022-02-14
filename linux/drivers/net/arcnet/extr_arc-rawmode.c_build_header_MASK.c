
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct sk_buff {int dummy; } ;
struct net_device {int flags; int * dev_addr; } ;
struct TYPE_2__ {scalar_t__ dest; int source; } ;
struct archdr {TYPE_1__ hard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct archdr* FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3, struct net_device *VAR_4,
   unsigned short VAR_5, uint8_t VAR_6)
{
 int VAR_7 = VAR_0;
 struct archdr *VAR_8 = FUNC_0(VAR_3, VAR_7);







 VAR_8->hard.source = *VAR_4->dev_addr;



 if (VAR_4->flags & (VAR_1 | VAR_2)) {



  VAR_8->hard.dest = 0;
  return VAR_7;
 }

 VAR_8->hard.dest = VAR_6;

 return VAR_7;
}
