
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry_list; } ;
struct TYPE_4__ {TYPE_1__ in_buf_pool; } ;
struct qeth_card {TYPE_2__ qdio; } ;
struct qeth_buffer_pool_entry {int list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct qeth_card *VAR_0,
  struct qeth_buffer_pool_entry *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->qdio.in_buf_pool.entry_list);
}
