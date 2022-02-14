
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_channel {scalar_t__ rx_pkt_n_frags; } ;


 int FUNC_0 (struct efx_channel*) ;

__attribute__((used)) static inline void FUNC_1(struct efx_channel *VAR_0)
{
 if (VAR_0->rx_pkt_n_frags)
  FUNC_0(VAR_0);
}
