
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef int port_t ;
struct TYPE_2__ {int rx_ring_buffers; int tx_ring_buffers; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static inline u16 FUNC_2(port_t *VAR_0, u16 VAR_1, int VAR_2)
{
 u16 VAR_3 = FUNC_1(VAR_0)->rx_ring_buffers;
 u16 VAR_4 = FUNC_1(VAR_0)->tx_ring_buffers;

 VAR_1 %= (VAR_2 ? VAR_4 : VAR_3);
 return FUNC_0(VAR_0) * (VAR_3 + VAR_4) +
  VAR_2 * VAR_3 + VAR_1;
}
