
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int dummy; } ;
struct efx_tx_buffer {int unmap_len; int flags; int len; } ;


 int FUNC_0 (int ) ;
 struct efx_tx_buffer* FUNC_1 (struct efx_tx_queue const*) ;

__attribute__((used)) static inline struct efx_tx_buffer *
FUNC_2(const struct efx_tx_queue *VAR_0)
{
 struct efx_tx_buffer *VAR_1 =
  FUNC_1(VAR_0);

 FUNC_0(VAR_1->len);
 FUNC_0(VAR_1->flags);
 FUNC_0(VAR_1->unmap_len);

 return VAR_1;
}
