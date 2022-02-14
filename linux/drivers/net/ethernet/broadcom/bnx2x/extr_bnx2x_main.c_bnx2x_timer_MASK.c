
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct timer_list {int dummy; } ;
struct bnx2x {int fw_drv_pulse_wr_seq; scalar_t__ state; scalar_t__ current_interval; int timer; int dev; } ;
struct TYPE_2__ {int mcp_pulse_mb; } ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int FUNC_8 (struct bnx2x*) ;
 struct bnx2x* VAR_4 ;
 struct bnx2x* FUNC_9 (int ,struct timer_list*,int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_12(struct timer_list *VAR_8)
{
 struct bnx2x *VAR_9 = FUNC_9(VAR_9, VAR_8, VAR_7);

 if (!FUNC_11(VAR_9->dev))
  return;

 if (FUNC_3(VAR_9) &&
     !FUNC_2(VAR_9)) {
  int VAR_10 = FUNC_1(VAR_9);
  u16 VAR_11;
  u16 VAR_12;

  ++VAR_9->fw_drv_pulse_wr_seq;
  VAR_9->fw_drv_pulse_wr_seq &= VAR_1;
  VAR_11 = VAR_9->fw_drv_pulse_wr_seq;
  FUNC_6(VAR_9);

  VAR_12 = (FUNC_5(VAR_9, VAR_5[VAR_10].mcp_pulse_mb) &
        VAR_2);





  if (((VAR_11 - VAR_12) & VAR_2) > 5)
   FUNC_0("MFW seems hanged: drv_pulse (0x%x) != mcp_pulse (0x%x)\n",
      VAR_11, VAR_12);
 }

 if (VAR_9->state == VAR_0)
  FUNC_7(VAR_9, VAR_3);


 if (FUNC_4(VAR_9))
  FUNC_8(VAR_9);

 FUNC_10(&VAR_9->timer, VAR_6 + VAR_9->current_interval);
}
