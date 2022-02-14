
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status_error_len; } ;
struct TYPE_6__ {TYPE_1__ qword1; } ;
union i40e_rx_desc {TYPE_2__ wb; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int csum_level; int ip_summed; } ;
struct i40e_vsi {TYPE_4__* back; TYPE_3__* netdev; } ;
struct i40e_rx_ptype_decoded {scalar_t__ outer_ip; scalar_t__ outer_ip_ver; scalar_t__ tunnel_type; int inner_prot; scalar_t__ known; } ;
struct TYPE_8__ {int hw_csum_rx_error; } ;
struct TYPE_7__ {int features; } ;


 int FUNC_0 (int ) ;
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



 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 struct i40e_rx_ptype_decoded FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4(struct i40e_vsi *VAR_19,
        struct sk_buff *VAR_20,
        union i40e_rx_desc *VAR_21)
{
 struct i40e_rx_ptype_decoded VAR_22;
 u32 VAR_23, VAR_24;
 bool VAR_25, VAR_26;
 u8 VAR_27;
 u64 VAR_28;

 VAR_28 = FUNC_2(VAR_21->wb.qword1.status_error_len);
 VAR_27 = (VAR_28 & VAR_4) >> VAR_5;
 VAR_23 = (VAR_28 & VAR_2) >>
     VAR_3;
 VAR_24 = (VAR_28 & VAR_6) >>
      VAR_7;
 VAR_22 = FUNC_1(VAR_27);

 VAR_20->ip_summed = VAR_0;

 FUNC_3(VAR_20);


 if (!(VAR_19->netdev->features & VAR_18))
  return;


 if (!(VAR_24 & FUNC_0(VAR_13)))
  return;


 if (!(VAR_22.known && VAR_22.outer_ip))
  return;

 VAR_25 = (VAR_22.outer_ip == VAR_14) &&
        (VAR_22.outer_ip_ver == VAR_15);
 VAR_26 = (VAR_22.outer_ip == VAR_14) &&
        (VAR_22.outer_ip_ver == VAR_16);

 if (VAR_25 &&
     (VAR_23 & (FUNC_0(VAR_9) |
    FUNC_0(VAR_8))))
  goto checksum_fail;


 if (VAR_26 &&
     VAR_24 & FUNC_0(VAR_12))

  return;


 if (VAR_23 & FUNC_0(VAR_10))
  goto checksum_fail;





 if (VAR_23 & FUNC_0(VAR_11))
  return;





 if (VAR_22.tunnel_type >= VAR_17)
  VAR_20->csum_level = 1;


 switch (VAR_22.inner_prot) {
 case 129:
 case 128:
 case 130:
  VAR_20->ip_summed = VAR_1;

 default:
  break;
 }

 return;

checksum_fail:
 VAR_19->back->hw_csum_rx_error++;
}
