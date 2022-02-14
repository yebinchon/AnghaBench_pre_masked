
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status_error0; } ;
union ice_32b_rx_flex_desc {TYPE_1__ wb; } ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct ice_rx_ptype_decoded {scalar_t__ outer_ip; scalar_t__ outer_ip_ver; int inner_prot; scalar_t__ known; } ;
struct ice_ring {TYPE_4__* vsi; TYPE_2__* netdev; } ;
struct TYPE_8__ {TYPE_3__* back; } ;
struct TYPE_7__ {int hw_csum_rx_error; } ;
struct TYPE_6__ {int features; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct ice_rx_ptype_decoded FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct ice_ring *VAR_11, struct sk_buff *VAR_12,
     union ice_32b_rx_flex_desc *VAR_13, u8 VAR_14)
{
 struct ice_rx_ptype_decoded VAR_15;
 u32 VAR_16, VAR_17;
 bool VAR_18, VAR_19;

 VAR_17 = FUNC_2(VAR_13->wb.status_error0);
 VAR_16 = VAR_17;

 VAR_15 = FUNC_1(VAR_14);


 VAR_12->ip_summed = VAR_0;
 FUNC_3(VAR_12);


 if (!(VAR_11->netdev->features & VAR_10))
  return;


 if (!(VAR_17 & FUNC_0(VAR_3)))
  return;

 if (!(VAR_15.known && VAR_15.outer_ip))
  return;

 VAR_18 = (VAR_15.outer_ip == VAR_7) &&
        (VAR_15.outer_ip_ver == VAR_8);
 VAR_19 = (VAR_15.outer_ip == VAR_7) &&
        (VAR_15.outer_ip_ver == VAR_9);

 if (VAR_18 && (VAR_16 & (FUNC_0(VAR_5) |
     FUNC_0(VAR_4))))
  goto checksum_fail;
 else if (VAR_19 && (VAR_17 &
   (FUNC_0(VAR_2))))
  goto checksum_fail;




 if (VAR_16 & FUNC_0(VAR_6))
  goto checksum_fail;


 switch (VAR_15.inner_prot) {
 case 129:
 case 128:
 case 130:
  VAR_12->ip_summed = VAR_1;
 default:
  break;
 }
 return;

checksum_fail:
 VAR_11->vsi->back->hw_csum_rx_error++;
}
