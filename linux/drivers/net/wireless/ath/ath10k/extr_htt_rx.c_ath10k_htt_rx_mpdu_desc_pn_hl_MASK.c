
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union htt_rx_pn_t {int pn48; int pn24; } ;
typedef int u64 ;
struct TYPE_2__ {int pn_63_32; } ;
struct htt_hl_rx_desc {int pn_31_0; TYPE_1__ u0; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct htt_hl_rx_desc *VAR_0,
       union htt_rx_pn_t *VAR_1,
       int VAR_2)
{
 switch (VAR_2) {
 case 48:
  VAR_1->pn48 = FUNC_0(VAR_0->pn_31_0) +
      ((u64)(FUNC_0(VAR_0->u0.pn_63_32) & 0xFFFF) << 32);
  break;
 case 24:
  VAR_1->pn24 = FUNC_0(VAR_0->pn_31_0);
  break;
 };
}
