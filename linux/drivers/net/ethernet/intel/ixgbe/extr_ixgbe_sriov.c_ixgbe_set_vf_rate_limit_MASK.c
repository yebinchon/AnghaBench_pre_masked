
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ixgbe_ring_feature {int mask; } ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int vf_rate_link_speed; TYPE_1__* vfinfo; struct ixgbe_hw hw; struct ixgbe_ring_feature* ring_feature; } ;
struct TYPE_3__ {int tx_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_7 ;
 int FUNC_1 (int,int ) ;



__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_8, int VAR_9)
{
 struct ixgbe_ring_feature *VAR_10 = &VAR_8->ring_feature[VAR_7];
 struct ixgbe_hw *VAR_11 = &VAR_8->hw;
 u32 VAR_12 = 0;
 u16 VAR_13, VAR_14;
 u16 VAR_15 = VAR_8->vfinfo[VAR_9].tx_rate;

 if (VAR_15) {

  VAR_12 = VAR_8->vf_rate_link_speed;


  VAR_12 <<= VAR_3;
  VAR_12 /= VAR_15;


  VAR_12 &= VAR_2 |
        VAR_1;


  VAR_12 |= VAR_4;
 }






 switch (VAR_11->mac.type) {
 case 129:
  FUNC_0(VAR_11, VAR_5, 0x4);
  break;
 case 128:
  FUNC_0(VAR_11, VAR_5, 0x14);
  break;
 default:
  break;
 }


 VAR_14 = FUNC_1(1, ~VAR_10->mask);


 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  unsigned int VAR_16 = (VAR_9 * VAR_14) + VAR_13;

  FUNC_0(VAR_11, VAR_6, VAR_16);
  FUNC_0(VAR_11, VAR_0, VAR_12);
 }
}
