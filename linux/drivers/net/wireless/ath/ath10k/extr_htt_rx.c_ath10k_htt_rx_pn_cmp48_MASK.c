
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union htt_rx_pn_t {int pn48; } ;



__attribute__((used)) static bool FUNC_0(union htt_rx_pn_t *VAR_0,
       union htt_rx_pn_t *VAR_1)
{
 return ((VAR_0->pn48 & 0xffffffffffffULL) <=
  (VAR_1->pn48 & 0xffffffffffffULL));
}
