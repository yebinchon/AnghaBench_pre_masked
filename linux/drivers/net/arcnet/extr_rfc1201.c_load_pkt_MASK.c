
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int (* copy_to_card ) (struct net_device*,int,int,struct arc_rfc1201*,int) ;} ;
struct arcnet_local {int lastload_dest; TYPE_1__ hw; } ;
struct arc_rfc1201 {int* offset; int split_flag; int dest; int sequence; int proto; } ;
struct arc_hardware {int* offset; int split_flag; int dest; int sequence; int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,struct arc_rfc1201*,int) ;
 int FUNC_3 (struct net_device*,int,int,struct arc_rfc1201*,int) ;
 int FUNC_4 (struct net_device*,int,int,struct arc_rfc1201*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4, struct arc_hardware *VAR_5,
       struct arc_rfc1201 *VAR_6, int VAR_7, int VAR_8)
{
 struct arcnet_local *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;



 if (VAR_7 > VAR_2) {
  VAR_5->offset[0] = 0;
  VAR_5->offset[1] = VAR_10 = 512 - VAR_7;
 } else if (VAR_7 > VAR_1) {
  struct arc_rfc1201 VAR_11;

  VAR_11.proto = VAR_6->proto;
  VAR_11.split_flag = 0xff;
  VAR_11.sequence = FUNC_0(0xffff);

  VAR_5->offset[0] = 0;
  VAR_10 = 512 - VAR_7;
  VAR_5->offset[1] = VAR_10 - VAR_3;
  VAR_9->hw.copy_to_card(VAR_4, VAR_8, VAR_10 - VAR_3,
        &VAR_11, VAR_3);
 } else {
  VAR_5->offset[0] = VAR_10 = 256 - VAR_7;
 }

 VAR_9->hw.copy_to_card(VAR_4, VAR_8, 0, VAR_5, VAR_0);
 VAR_9->hw.copy_to_card(VAR_4, VAR_8, VAR_10, VAR_6, VAR_7);

 VAR_9->lastload_dest = VAR_5->dest;
}
