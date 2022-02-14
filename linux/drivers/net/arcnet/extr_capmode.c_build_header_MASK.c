
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct sk_buff {int dummy; } ;
struct net_device {int flags; int * dev_addr; } ;
struct TYPE_6__ {scalar_t__ dest; int source; } ;
struct TYPE_4__ {int * cookie; } ;
struct TYPE_5__ {TYPE_1__ cap; } ;
struct archdr {TYPE_3__ hard; TYPE_2__ soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct net_device*,char*,int) ;
 struct archdr* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4,
   struct net_device *VAR_5,
   unsigned short VAR_6,
   uint8_t VAR_7)
{
 int VAR_8 = VAR_0;
 struct archdr *VAR_9 = FUNC_1(VAR_4, VAR_8);

 FUNC_0(VAR_1, VAR_5, "Preparing header for cap packet %x.\n",
     *((int *)&VAR_9->soft.cap.cookie[0]));







 VAR_9->hard.source = *VAR_5->dev_addr;



 if (VAR_5->flags & (VAR_2 | VAR_3)) {



  VAR_9->hard.dest = 0;
  return VAR_8;
 }

 VAR_9->hard.dest = VAR_7;

 return VAR_8;
}
