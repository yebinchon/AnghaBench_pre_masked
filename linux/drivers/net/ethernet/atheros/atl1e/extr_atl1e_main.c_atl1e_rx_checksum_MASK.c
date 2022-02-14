
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int ip_summed; } ;
struct iphdr {scalar_t__ frag_off; } ;
struct atl1e_recv_ret_status {int pkt_flag; int err_flag; } ;
struct atl1e_adapter {int dummy; } ;


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
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct atl1e_adapter *VAR_10,
    struct sk_buff *VAR_11, struct atl1e_recv_ret_status *VAR_12)
{
 u8 *VAR_13 = (u8 *)(VAR_12 + 1);
 struct iphdr *VAR_14;
 u16 VAR_15 = VAR_1;
 u16 VAR_16;
 u16 VAR_17;

 FUNC_0(VAR_11);
 VAR_16 = VAR_12->pkt_flag;
 VAR_17 = VAR_12->err_flag;
 if (((VAR_16 & VAR_5) || (VAR_16 & VAR_6)) &&
  ((VAR_16 & VAR_8) || (VAR_16 & VAR_9))) {
  if (VAR_16 & VAR_5) {
   if (VAR_16 & VAR_4)
    VAR_15 += 8;
   VAR_14 = (struct iphdr *) (VAR_13 + VAR_15);
   if (VAR_14->frag_off != 0 && !(VAR_16 & VAR_7))
    goto hw_xsum;
  }
  if (!(VAR_17 & (VAR_2 | VAR_3))) {
   VAR_11->ip_summed = VAR_0;
   return;
  }
 }

hw_xsum :
 return;
}
