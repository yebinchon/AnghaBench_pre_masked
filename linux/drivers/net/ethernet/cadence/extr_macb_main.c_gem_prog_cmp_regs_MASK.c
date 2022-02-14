
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u32 ;
struct macb {int dummy; } ;
struct ethtool_tcpip4_spec {int ip4src; int ip4dst; int psrc; int pdst; } ;
struct TYPE_4__ {struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_3__ {struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {int ring_cookie; TYPE_2__ m_u; TYPE_1__ h_u; int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct macb*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct macb *VAR_20, struct ethtool_rx_flow_spec *VAR_21)
{
 struct ethtool_tcpip4_spec *VAR_22, *VAR_23;
 uint16_t VAR_24 = VAR_21->location;
 u32 VAR_25, VAR_26, VAR_27;
 bool VAR_28 = 0;
 bool VAR_29 = 0;
 bool VAR_30 = 0;

 VAR_22 = &(VAR_21->h_u.tcp_ip4_spec);
 VAR_23 = &(VAR_21->m_u.tcp_ip4_spec);


 if (VAR_23->ip4src == 0xFFFFFFFF) {

  VAR_25 = 0;
  VAR_26 = 0;
  VAR_25 = VAR_22->ip4src;
  VAR_26 = FUNC_0(VAR_17, 1, VAR_26);
  VAR_26 = FUNC_0(VAR_14, VAR_6, VAR_26);
  VAR_26 = FUNC_0(VAR_19, VAR_5, VAR_26);
  FUNC_5(VAR_20, VAR_15, FUNC_4(FUNC_2(VAR_24)), VAR_25);
  FUNC_5(VAR_20, VAR_16, FUNC_4(FUNC_2(VAR_24)), VAR_26);
  VAR_28 = 1;
 }


 if (VAR_23->ip4dst == 0xFFFFFFFF) {

  VAR_25 = 0;
  VAR_26 = 0;
  VAR_25 = VAR_22->ip4dst;
  VAR_26 = FUNC_0(VAR_17, 1, VAR_26);
  VAR_26 = FUNC_0(VAR_14, VAR_6, VAR_26);
  VAR_26 = FUNC_0(VAR_19, VAR_4, VAR_26);
  FUNC_5(VAR_20, VAR_15, FUNC_4(FUNC_1(VAR_24)), VAR_25);
  FUNC_5(VAR_20, VAR_16, FUNC_4(FUNC_1(VAR_24)), VAR_26);
  VAR_29 = 1;
 }


 if ((VAR_23->psrc == 0xFFFF) || (VAR_23->pdst == 0xFFFF)) {

  VAR_25 = 0;
  VAR_26 = 0;
  VAR_26 = FUNC_0(VAR_14, VAR_7, VAR_26);
  if (VAR_23->psrc == VAR_23->pdst) {
   VAR_25 = FUNC_0(VAR_18, VAR_22->psrc, VAR_25);
   VAR_25 = FUNC_0(VAR_13, VAR_22->pdst, VAR_25);
   VAR_26 = FUNC_0(VAR_17, 1, VAR_26);
   VAR_26 = FUNC_0(VAR_19, VAR_9, VAR_26);
  } else {

   VAR_26 = FUNC_0(VAR_17, 0, VAR_26);
   VAR_25 = FUNC_0(VAR_18, 0xFFFF, VAR_25);
   if (VAR_23->psrc == 0xFFFF) {
    VAR_25 = FUNC_0(VAR_13, VAR_22->psrc, VAR_25);
    VAR_26 = FUNC_0(VAR_19, VAR_9, VAR_26);
   } else {
    VAR_25 = FUNC_0(VAR_13, VAR_22->pdst, VAR_25);
    VAR_26 = FUNC_0(VAR_19, VAR_8, VAR_26);
   }
  }
  FUNC_5(VAR_20, VAR_15, FUNC_4(FUNC_3(VAR_24)), VAR_25);
  FUNC_5(VAR_20, VAR_16, FUNC_4(FUNC_3(VAR_24)), VAR_26);
  VAR_30 = 1;
 }

 VAR_27 = 0;
 VAR_27 = FUNC_0(VAR_10, (VAR_21->ring_cookie) & 0xFF, VAR_27);
 VAR_27 = FUNC_0(VAR_3, VAR_12, VAR_27);
 if (VAR_28)
  VAR_27 = FUNC_0(VAR_0, FUNC_2(VAR_24), VAR_27);
 if (VAR_29)
  VAR_27 = FUNC_0(VAR_1, FUNC_1(VAR_24), VAR_27);
 if (VAR_30)
  VAR_27 = FUNC_0(VAR_2, FUNC_3(VAR_24), VAR_27);
 FUNC_5(VAR_20, VAR_11, VAR_24, VAR_27);
}
