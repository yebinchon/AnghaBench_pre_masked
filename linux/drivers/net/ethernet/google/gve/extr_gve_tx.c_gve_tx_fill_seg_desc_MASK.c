
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l3_offset; int seg_addr; void* seg_len; void* mss; int type_flags; } ;
union gve_tx_desc {TYPE_1__ seg; } ;
typedef int u64 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(union gve_tx_desc *VAR_2,
     struct sk_buff *VAR_3, bool VAR_4,
     u16 VAR_5, u64 VAR_6)
{
 VAR_2->seg.type_flags = VAR_0;
 if (VAR_4) {
  if (FUNC_2(VAR_3))
   VAR_2->seg.type_flags |= VAR_1;
  VAR_2->seg.l3_offset = FUNC_3(VAR_3) >> 1;
  VAR_2->seg.mss = FUNC_0(FUNC_4(VAR_3)->gso_size);
 }
 VAR_2->seg.seg_len = FUNC_0(VAR_5);
 VAR_2->seg.seg_addr = FUNC_1(VAR_6);
}
