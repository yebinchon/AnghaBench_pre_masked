
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct niu_tcam_entry {int* key; int* key_mask; } ;
struct TYPE_15__ {scalar_t__ proto; int l4_4_bytes; } ;
struct TYPE_11__ {int spi; } ;
struct TYPE_9__ {int pdst; int psrc; scalar_t__ tos; int ip4dst; int ip4src; } ;
struct TYPE_16__ {TYPE_7__ usr_ip4_spec; TYPE_3__ ah_ip4_spec; TYPE_1__ tcp_ip4_spec; } ;
struct TYPE_13__ {int l4_4_bytes; } ;
struct TYPE_12__ {int spi; } ;
struct TYPE_10__ {int pdst; int psrc; scalar_t__ tos; int ip4dst; int ip4src; } ;
struct TYPE_14__ {TYPE_5__ usr_ip4_spec; TYPE_4__ ah_ip4_spec; TYPE_2__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_8__ h_u; TYPE_6__ m_u; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct ethtool_rx_flow_spec *VAR_8,
           struct niu_tcam_entry *VAR_9,
           int VAR_10, u64 VAR_11)
{
 u8 VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_13 = FUNC_1(VAR_8->h_u.tcp_ip4_spec.ip4src);
 VAR_15 = FUNC_1(VAR_8->m_u.tcp_ip4_spec.ip4src);
 VAR_14 = FUNC_1(VAR_8->h_u.tcp_ip4_spec.ip4dst);
 VAR_16 = FUNC_1(VAR_8->m_u.tcp_ip4_spec.ip4dst);

 VAR_9->key[0] = VAR_11 << VAR_1;
 VAR_9->key_mask[0] = VAR_0;
 VAR_9->key[1] = (u64)VAR_10 << VAR_3;
 VAR_9->key_mask[1] = VAR_2;

 VAR_9->key[3] = (u64)VAR_13 << VAR_7;
 VAR_9->key[3] |= VAR_14;

 VAR_9->key_mask[3] = (u64)VAR_15 << VAR_7;
 VAR_9->key_mask[3] |= VAR_16;

 VAR_9->key[2] |= ((u64)VAR_8->h_u.tcp_ip4_spec.tos <<
         VAR_6);
 VAR_9->key_mask[2] |= ((u64)VAR_8->m_u.tcp_ip4_spec.tos <<
       VAR_6);
 switch (VAR_8->flow_type) {
 case 129:
 case 128:
 case 130:
  VAR_19 = FUNC_0(VAR_8->h_u.tcp_ip4_spec.psrc);
  VAR_21 = FUNC_0(VAR_8->m_u.tcp_ip4_spec.psrc);
  VAR_20 = FUNC_0(VAR_8->h_u.tcp_ip4_spec.pdst);
  VAR_22 = FUNC_0(VAR_8->m_u.tcp_ip4_spec.pdst);

  VAR_9->key[2] |= (((u64)VAR_19 << 16) | VAR_20);
  VAR_9->key_mask[2] |= (((u64)VAR_21 << 16) | VAR_22);
  FUNC_2(VAR_8->flow_type, &VAR_12);
  break;
 case 133:
 case 132:
  VAR_17 = FUNC_1(VAR_8->h_u.ah_ip4_spec.spi);
  VAR_18 = FUNC_1(VAR_8->m_u.ah_ip4_spec.spi);

  VAR_9->key[2] |= VAR_17;
  VAR_9->key_mask[2] |= VAR_18;
  FUNC_2(VAR_8->flow_type, &VAR_12);
  break;
 case 131:
  VAR_17 = FUNC_1(VAR_8->h_u.usr_ip4_spec.l4_4_bytes);
  VAR_18 = FUNC_1(VAR_8->m_u.usr_ip4_spec.l4_4_bytes);

  VAR_9->key[2] |= VAR_17;
  VAR_9->key_mask[2] |= VAR_18;
  VAR_12 = VAR_8->h_u.usr_ip4_spec.proto;
  break;
 default:
  break;
 }

 VAR_9->key[2] |= ((u64)VAR_12 << VAR_5);
 if (VAR_12) {
  VAR_9->key_mask[2] |= VAR_4;
 }
}
