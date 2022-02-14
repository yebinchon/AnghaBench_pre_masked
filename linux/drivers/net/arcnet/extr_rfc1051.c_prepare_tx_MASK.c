
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int (* copy_to_card ) (struct net_device*,int,int,struct arc_hardware*,int) ;} ;
struct arcnet_local {int lastload_dest; TYPE_1__ hw; int cur_tx; int next_tx; } ;
struct arc_hardware {int* offset; int dest; } ;
struct archdr {struct arc_hardware soft; struct arc_hardware hard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct net_device*,char*,int,int,...) ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,struct arc_hardware*,int) ;
 int FUNC_3 (struct net_device*,int,int,struct arc_hardware*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, struct archdr *VAR_7, int VAR_8,
        int VAR_9)
{
 struct arcnet_local *VAR_10 = FUNC_1(VAR_6);
 struct arc_hardware *VAR_11 = &VAR_7->hard;
 int VAR_12;

 FUNC_0(VAR_1, VAR_6, "prepare_tx: txbufs=%d/%d/%d\n",
     VAR_10->next_tx, VAR_10->cur_tx, VAR_9);


 VAR_8 -= VAR_0;

 if (VAR_8 > VAR_5) {

  FUNC_0(VAR_2, VAR_6, "Bug!  prepare_tx with size %d (> %d)\n",
      VAR_8, VAR_5);
  VAR_8 = VAR_5;
 }
 if (VAR_8 > VAR_4) {
  VAR_11->offset[0] = 0;
  VAR_11->offset[1] = VAR_12 = 512 - VAR_8;
 } else if (VAR_8 > VAR_3) {
  VAR_11->offset[0] = 0;
  VAR_11->offset[1] = VAR_12 = 512 - VAR_8 - 3;
 } else {
  VAR_11->offset[0] = VAR_12 = 256 - VAR_8;
 }

 VAR_10->hw.copy_to_card(VAR_6, VAR_9, 0, VAR_11, VAR_0);
 VAR_10->hw.copy_to_card(VAR_6, VAR_9, VAR_12, &VAR_7->soft, VAR_8);

 VAR_10->lastload_dest = VAR_11->dest;

 return 1;
}
