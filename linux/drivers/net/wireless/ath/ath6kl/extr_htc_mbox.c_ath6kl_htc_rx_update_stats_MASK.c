
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_bundle_lkahd; int rx_lkahds; int rx_pkts; } ;
struct htc_endpoint {TYPE_1__ ep_st; } ;



__attribute__((used)) static inline void FUNC_0(struct htc_endpoint *VAR_0,
           int VAR_1)
{
 VAR_0->ep_st.rx_pkts++;
 if (VAR_1 == 1)
  VAR_0->ep_st.rx_lkahds++;
 else if (VAR_1 > 1)
  VAR_0->ep_st.rx_bundle_lkahd++;
}
