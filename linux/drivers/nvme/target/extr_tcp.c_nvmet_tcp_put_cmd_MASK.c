
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_tcp_cmd {TYPE_1__* queue; int entry; } ;
struct TYPE_2__ {int free_list; struct nvmet_tcp_cmd connect; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct nvmet_tcp_cmd *VAR_0)
{
 if (FUNC_1(VAR_0 == &VAR_0->queue->connect))
  return;

 FUNC_0(&VAR_0->entry, &VAR_0->queue->free_list);
}
