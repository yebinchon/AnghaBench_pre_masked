
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * dev_addr; } ;
struct TYPE_2__ {int (* copy_to_card ) (struct net_device*,int,int ,struct arc_hardware*,int ) ;} ;
struct arcnet_local {TYPE_1__ hw; } ;
struct archdr {int dummy; } ;
struct arc_hardware {int* offset; int dest; int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,char*) ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int ,struct arc_hardware*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct archdr *VAR_3,
      int VAR_4, int VAR_5)
{
 struct arcnet_local *VAR_6 = FUNC_1(VAR_2);
 struct arc_hardware VAR_7;

 FUNC_0(VAR_1, VAR_2, "tx: no encap for this host; load a protocol driver.\n");


 VAR_7.source = VAR_7.dest = VAR_2->dev_addr[0];


 VAR_7.offset[0] = 0xFF;

 VAR_6->hw.copy_to_card(VAR_2, VAR_5, 0, &VAR_7, VAR_0);

 return 1;
}
