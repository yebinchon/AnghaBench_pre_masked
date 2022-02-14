
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int freq; } ;
struct can_priv {TYPE_1__ clock; } ;
struct can_bittiming_const {int sjw_max; int tseg1_min; int tseg1_max; int tseg2_min; int tseg2_max; int brp_inc; int brp_min; int brp_max; } ;
struct can_bittiming {int prop_seg; int phase_seg1; int sjw; int phase_seg2; int brp; int bitrate; int sample_point; scalar_t__ tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 struct can_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct can_bittiming *VAR_3,
          const struct can_bittiming_const *VAR_4)
{
 struct can_priv *VAR_5 = FUNC_1(VAR_2);
 int VAR_6, VAR_7;
 u64 VAR_8;

 VAR_6 = VAR_3->prop_seg + VAR_3->phase_seg1;
 if (!VAR_3->sjw)
  VAR_3->sjw = 1;
 if (VAR_3->sjw > VAR_4->sjw_max ||
     VAR_6 < VAR_4->tseg1_min || VAR_6 > VAR_4->tseg1_max ||
     VAR_3->phase_seg2 < VAR_4->tseg2_min || VAR_3->phase_seg2 > VAR_4->tseg2_max)
  return -VAR_1;

 VAR_8 = (u64)VAR_5->clock.freq * (u64)VAR_3->tq;
 if (VAR_4->brp_inc > 1)
  FUNC_0(VAR_8, VAR_4->brp_inc);
 VAR_8 += 500000000UL - 1;
 FUNC_0(VAR_8, 1000000000UL);
 if (VAR_4->brp_inc > 1)
  VAR_8 *= VAR_4->brp_inc;
 VAR_3->brp = (u32)VAR_8;

 if (VAR_3->brp < VAR_4->brp_min || VAR_3->brp > VAR_4->brp_max)
  return -VAR_0;

 VAR_7 = VAR_3->prop_seg + VAR_3->phase_seg1 + VAR_3->phase_seg2 + 1;
 VAR_3->bitrate = VAR_5->clock.freq / (VAR_3->brp * VAR_7);
 VAR_3->sample_point = ((VAR_6 + 1) * 1000) / VAR_7;

 return 0;
}
