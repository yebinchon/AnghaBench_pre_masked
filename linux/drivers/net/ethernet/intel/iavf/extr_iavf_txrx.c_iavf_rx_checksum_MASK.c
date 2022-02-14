
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
union iavf_rx_desc {TYPE_2__ wb; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct iavf_vsi {TYPE_4__* back; TYPE_3__* netdev; } ;
struct iavf_rx_ptype_decoded {scalar_t__ outer_ip; scalar_t__ outer_ip_ver; int inner_prot; scalar_t__ known; } ;
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
 int VAR_17 ;
 struct iavf_rx_ptype_decoded FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4(struct iavf_vsi *VAR_18,
        struct sk_buff *VAR_19,
        union iavf_rx_desc *VAR_20)
{
 struct iavf_rx_ptype_decoded VAR_21;
 u32 VAR_22, VAR_23;
 bool VAR_24, VAR_25;
 u8 VAR_26;
 u64 VAR_27;

 VAR_27 = FUNC_2(VAR_20->wb.qword1.status_error_len);
 VAR_26 = (VAR_27 & VAR_4) >> VAR_5;
 VAR_22 = (VAR_27 & VAR_2) >>
     VAR_3;
 VAR_23 = (VAR_27 & VAR_6) >>
      VAR_7;
 VAR_21 = FUNC_1(VAR_26);

 VAR_19->ip_summed = VAR_0;

 FUNC_3(VAR_19);


 if (!(VAR_18->netdev->features & VAR_17))
  return;


 if (!(VAR_23 & FUNC_0(VAR_13)))
  return;


 if (!(VAR_21.known && VAR_21.outer_ip))
  return;

 VAR_24 = (VAR_21.outer_ip == VAR_14) &&
        (VAR_21.outer_ip_ver == VAR_15);
 VAR_25 = (VAR_21.outer_ip == VAR_14) &&
        (VAR_21.outer_ip_ver == VAR_16);

 if (VAR_24 &&
     (VAR_22 & (FUNC_0(VAR_9) |
    FUNC_0(VAR_8))))
  goto checksum_fail;


 if (VAR_25 &&
     VAR_23 & FUNC_0(VAR_12))

  return;


 if (VAR_22 & FUNC_0(VAR_10))
  goto checksum_fail;





 if (VAR_22 & FUNC_0(VAR_11))
  return;


 switch (VAR_21.inner_prot) {
 case 129:
 case 128:
 case 130:
  VAR_19->ip_summed = VAR_1;

 default:
  break;
 }

 return;

checksum_fail:
 VAR_18->back->hw_csum_rx_error++;
}
