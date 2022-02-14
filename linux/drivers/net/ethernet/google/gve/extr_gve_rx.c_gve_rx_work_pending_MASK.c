
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ seqno; struct gve_rx_desc* desc_ring; } ;
struct gve_rx_ring {int cnt; int mask; TYPE_1__ desc; } ;
struct gve_rx_desc {int flags_seq; } ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct gve_rx_ring *VAR_0)
{
 struct gve_rx_desc *VAR_1;
 __be16 VAR_2;
 u32 VAR_3;

 VAR_3 = VAR_0->cnt & VAR_0->mask;
 VAR_1 = VAR_0->desc.desc_ring + VAR_3;

 VAR_2 = VAR_1->flags_seq;

 FUNC_1();

 return (FUNC_0(VAR_2) == VAR_0->desc.seqno);
}
