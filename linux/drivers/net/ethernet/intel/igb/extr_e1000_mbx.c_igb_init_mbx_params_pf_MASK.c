
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsts; scalar_t__ acks; scalar_t__ reqs; scalar_t__ msgs_rx; scalar_t__ msgs_tx; } ;
struct TYPE_3__ {int unlock; int check_for_rst; int check_for_ack; int check_for_msg; int write_posted; int read_posted; int write; int read; } ;
struct e1000_mbx_info {TYPE_2__ stats; TYPE_1__ ops; int size; scalar_t__ usec_delay; scalar_t__ timeout; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

s32 FUNC_0(struct e1000_hw *VAR_9)
{
 struct e1000_mbx_info *VAR_10 = &VAR_9->mbx;

 VAR_10->timeout = 0;
 VAR_10->usec_delay = 0;

 VAR_10->size = VAR_0;

 VAR_10->ops.read = VAR_4;
 VAR_10->ops.write = VAR_7;
 VAR_10->ops.read_posted = VAR_5;
 VAR_10->ops.write_posted = VAR_8;
 VAR_10->ops.check_for_msg = VAR_2;
 VAR_10->ops.check_for_ack = VAR_1;
 VAR_10->ops.check_for_rst = VAR_3;
 VAR_10->ops.unlock = VAR_6;

 VAR_10->stats.msgs_tx = 0;
 VAR_10->stats.msgs_rx = 0;
 VAR_10->stats.reqs = 0;
 VAR_10->stats.acks = 0;
 VAR_10->stats.rsts = 0;

 return 0;
}
