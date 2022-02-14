
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_atl_txd_s {int ctl; int ctl2; scalar_t__ buf_addr; } ;
struct aq_ring_s {size_t sw_tail; struct aq_ring_buff_s* buff_ring; int * dx_ring; } ;
struct aq_ring_buff_s {unsigned int len; unsigned int len_pkt; int len_l3; int len_l2; int mss; int len_l4; scalar_t__ is_eop; scalar_t__ is_tcp_cso; scalar_t__ is_udp_cso; scalar_t__ is_ip_cso; scalar_t__ pa; scalar_t__ is_ipv6; scalar_t__ is_gso; scalar_t__ is_sop; } ;
struct aq_hw_s {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
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
 size_t VAR_12 ;
 int FUNC_0 (struct aq_hw_s*) ;
 size_t FUNC_1 (struct aq_ring_s*,size_t) ;
 int FUNC_2 (struct aq_hw_s*,struct aq_ring_s*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct aq_hw_s *VAR_13,
         struct aq_ring_s *VAR_14,
         unsigned int VAR_15)
{
 struct aq_ring_buff_s *VAR_16 = ((void*)0);
 struct hw_atl_txd_s *VAR_17 = ((void*)0);
 unsigned int VAR_18 = 0U;
 unsigned int VAR_19 = 0U;
 unsigned int VAR_20 = 0U;
 bool VAR_21 = 0;

 VAR_16 = &VAR_14->buff_ring[VAR_14->sw_tail];
 VAR_19 = (VAR_16->is_eop && VAR_16->is_sop) ? VAR_16->len : VAR_16->len_pkt;

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  VAR_17 = (struct hw_atl_txd_s *)&VAR_14->dx_ring[VAR_14->sw_tail *
      VAR_12];
  VAR_17->ctl = 0;
  VAR_17->ctl2 = 0;
  VAR_17->buf_addr = 0;

  VAR_16 = &VAR_14->buff_ring[VAR_14->sw_tail];

  if (VAR_16->is_gso) {
   VAR_17->ctl |= (VAR_16->len_l3 << 31) |
    (VAR_16->len_l2 << 24) |
    VAR_6 |
    VAR_9;
   VAR_17->ctl2 |= (VAR_16->mss << 16) |
    (VAR_16->len_l4 << 8) |
    (VAR_16->len_l3 >> 1);

   VAR_19 -= (VAR_16->len_l4 +
        VAR_16->len_l3 +
        VAR_16->len_l2);
   VAR_21 = 1;

   if (VAR_16->is_ipv6)
    VAR_17->ctl |= VAR_4;
  } else {
   VAR_18 = VAR_16->len;

   VAR_17->buf_addr = VAR_16->pa;
   VAR_17->ctl |= (VAR_2 &
      ((u32)VAR_18 << 4));
   VAR_17->ctl |= VAR_10;

   VAR_17->ctl2 |= VAR_1 & (VAR_19 << 14);

   if (VAR_21) {
    VAR_17->ctl |= VAR_5;
    VAR_17->ctl2 |= VAR_0;
   }


   if (VAR_16->is_ip_cso)
    VAR_17->ctl |= VAR_3;

   if (VAR_16->is_udp_cso || VAR_16->is_tcp_cso)
    VAR_17->ctl |= VAR_7;

   if (FUNC_3(VAR_16->is_eop)) {
    VAR_17->ctl |= VAR_11;
    VAR_17->ctl |= VAR_8;
    VAR_21 = 0;
   }
  }

  VAR_14->sw_tail = FUNC_1(VAR_14, VAR_14->sw_tail);
 }

 FUNC_2(VAR_13, VAR_14);
 return FUNC_0(VAR_13);
}
