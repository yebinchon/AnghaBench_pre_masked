
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_clk_info {int cclk_ps; int res; int tre; int dack_re; int dack_timer; int retransmit_min; int retransmit_max; int persist_timer_min; int persist_timer_max; int keepalive_idle_timer; int keepalive_interval; int initial_srtt; int finwait2_timer; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_4 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_5 (struct adapter*,int ) ;

int FUNC_6(struct cudbg_init *VAR_11,
      struct cudbg_buffer *VAR_12,
      struct cudbg_error *VAR_13)
{
 struct adapter *VAR_14 = VAR_11->adap;
 struct cudbg_buffer VAR_15 = { 0 };
 struct cudbg_clk_info *VAR_16;
 u64 VAR_17;
 int VAR_18;

 if (!VAR_14->params.vpd.cclk)
  return VAR_0;

 VAR_18 = FUNC_3(VAR_11, VAR_12, sizeof(struct cudbg_clk_info),
       &VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_16 = (struct cudbg_clk_info *)VAR_15.data;
 VAR_16->cclk_ps = 1000000000 / VAR_14->params.vpd.cclk;
 VAR_16->res = FUNC_5(VAR_14, VAR_10);
 VAR_16->tre = FUNC_2(VAR_16->res);
 VAR_16->dack_re = FUNC_0(VAR_16->res);
 VAR_17 = (VAR_16->cclk_ps << VAR_16->tre) / 1000000;

 VAR_16->dack_timer =
  (VAR_16->cclk_ps << VAR_16->dack_re) / 1000000 *
  FUNC_5(VAR_14, VAR_1);
 VAR_16->retransmit_min =
  VAR_17 * FUNC_5(VAR_14, VAR_9);
 VAR_16->retransmit_max =
  VAR_17 * FUNC_5(VAR_14, VAR_8);
 VAR_16->persist_timer_min =
  VAR_17 * FUNC_5(VAR_14, VAR_7);
 VAR_16->persist_timer_max =
  VAR_17 * FUNC_5(VAR_14, VAR_6);
 VAR_16->keepalive_idle_timer =
  VAR_17 * FUNC_5(VAR_14, VAR_4);
 VAR_16->keepalive_interval =
  VAR_17 * FUNC_5(VAR_14, VAR_5);
 VAR_16->initial_srtt =
  VAR_17 * FUNC_1(FUNC_5(VAR_14, VAR_3));
 VAR_16->finwait2_timer =
  VAR_17 * FUNC_5(VAR_14, VAR_2);

 return FUNC_4(VAR_11, &VAR_15, VAR_12);
}
