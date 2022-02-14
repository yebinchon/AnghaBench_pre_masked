
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int dummy; } ;
struct efx_rx_buffer {int dummy; } ;
struct efx_channel {int dummy; } ;


 struct efx_rx_queue* FUNC_0 (struct efx_channel*) ;
 int FUNC_1 (struct efx_rx_queue*,struct efx_rx_buffer*,unsigned int) ;
 int FUNC_2 (struct efx_channel*,struct efx_rx_buffer*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct efx_channel *VAR_0,
      struct efx_rx_buffer *VAR_1,
      unsigned int VAR_2)
{
 struct efx_rx_queue *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_3, VAR_1, VAR_2);
}
