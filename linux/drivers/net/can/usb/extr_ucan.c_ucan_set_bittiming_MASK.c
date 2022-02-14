
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sjw; int phase_seg2; int phase_seg1; int prop_seg; int sample_point; int brp; int tq; } ;
struct TYPE_6__ {TYPE_2__ bittiming; } ;
struct ucan_priv {TYPE_3__ can; TYPE_1__* ctl_msg_buffer; } ;
struct ucan_ctl_cmd_set_bittiming {int sjw; int phase_seg2; int phase_seg1; int prop_seg; void* sample_point; void* brp; int tq; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct ucan_ctl_cmd_set_bittiming cmd_set_bittiming; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ucan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ucan_priv*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 int VAR_2;
 struct ucan_priv *VAR_3 = FUNC_2(VAR_1);
 struct ucan_ctl_cmd_set_bittiming *VAR_4;

 VAR_4 = &VAR_3->ctl_msg_buffer->cmd_set_bittiming;
 VAR_4->tq = FUNC_1(VAR_3->can.bittiming.tq);
 VAR_4->brp = FUNC_0(VAR_3->can.bittiming.brp);
 VAR_4->sample_point =
     FUNC_0(VAR_3->can.bittiming.sample_point);
 VAR_4->prop_seg = VAR_3->can.bittiming.prop_seg;
 VAR_4->phase_seg1 = VAR_3->can.bittiming.phase_seg1;
 VAR_4->phase_seg2 = VAR_3->can.bittiming.phase_seg2;
 VAR_4->sjw = VAR_3->can.bittiming.sjw;

 VAR_2 = FUNC_3(VAR_3, VAR_0, 0,
        sizeof(*VAR_4));
 return (VAR_2 < 0) ? VAR_2 : 0;
}
