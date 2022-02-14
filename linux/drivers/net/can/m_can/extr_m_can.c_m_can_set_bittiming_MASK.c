
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int freq; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; int bitrate; int sample_point; } ;
struct TYPE_4__ {int ctrlmode; TYPE_1__ clock; struct can_bittiming data_bittiming; struct can_bittiming bittiming; } ;
struct m_can_classdev {TYPE_2__ can; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct m_can_classdev*,int ,int) ;
 struct m_can_classdev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_14)
{
 struct m_can_classdev *VAR_15 = FUNC_1(VAR_14);
 const struct can_bittiming *VAR_16 = &VAR_15->can.bittiming;
 const struct can_bittiming *VAR_17 = &VAR_15->can.data_bittiming;
 u16 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 VAR_18 = VAR_16->brp - 1;
 VAR_19 = VAR_16->sjw - 1;
 VAR_20 = VAR_16->prop_seg + VAR_16->phase_seg1 - 1;
 VAR_21 = VAR_16->phase_seg2 - 1;
 VAR_22 = (VAR_18 << VAR_9) | (VAR_19 << VAR_10) |
  (VAR_20 << VAR_11) | (VAR_21 << VAR_12);
 FUNC_0(VAR_15, VAR_7, VAR_22);

 if (VAR_15->can.ctrlmode & VAR_0) {
  VAR_22 = 0;
  VAR_18 = VAR_17->brp - 1;
  VAR_19 = VAR_17->sjw - 1;
  VAR_20 = VAR_17->prop_seg + VAR_17->phase_seg1 - 1;
  VAR_21 = VAR_17->phase_seg2 - 1;





  if (VAR_17->bitrate > 2500000) {
   u32 VAR_23, VAR_24;




   VAR_24 = VAR_17->sample_point;




   VAR_23 = (VAR_15->can.clock.freq / 1000) *
          VAR_24 / VAR_17->bitrate;


   if (VAR_23 > 127) {
    FUNC_2(VAR_14, "TDCO value of %u is beyond maximum. Using maximum possible value\n",
         VAR_23);
    VAR_23 = 127;
   }

   VAR_22 |= VAR_5;
   FUNC_0(VAR_15, VAR_8,
        VAR_23 << VAR_13);
  }

  VAR_22 |= (VAR_18 << VAR_1) |
      (VAR_19 << VAR_2) |
      (VAR_20 << VAR_3) |
      (VAR_21 << VAR_4);

  FUNC_0(VAR_15, VAR_6, VAR_22);
 }

 return 0;
}
