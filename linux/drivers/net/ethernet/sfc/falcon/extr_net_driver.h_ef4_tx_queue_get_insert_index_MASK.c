
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {unsigned int insert_count; unsigned int ptr_mask; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(const struct ef4_tx_queue *VAR_0)
{
 return VAR_0->insert_count & VAR_0->ptr_mask;
}
