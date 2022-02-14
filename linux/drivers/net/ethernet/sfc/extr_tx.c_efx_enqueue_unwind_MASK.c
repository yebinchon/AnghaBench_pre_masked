
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int insert_count; } ;
struct efx_tx_buffer {int dummy; } ;


 struct efx_tx_buffer* FUNC_0 (struct efx_tx_queue*) ;
 int FUNC_1 (struct efx_tx_queue*,struct efx_tx_buffer*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct efx_tx_queue *VAR_0,
          unsigned int VAR_1)
{
 struct efx_tx_buffer *VAR_2;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;


 while (VAR_0->insert_count != VAR_1) {
  --VAR_0->insert_count;
  VAR_2 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_2, &VAR_4, &VAR_3);
 }
}
