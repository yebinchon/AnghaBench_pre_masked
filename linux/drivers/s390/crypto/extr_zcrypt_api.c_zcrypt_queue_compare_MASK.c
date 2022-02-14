
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_queue {TYPE_1__* queue; int load; } ;
struct TYPE_2__ {scalar_t__ total_request_count; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct zcrypt_queue *VAR_0,
     struct zcrypt_queue *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 if (!VAR_1)
  return 0;
 VAR_2 += FUNC_0(&VAR_0->load);
 VAR_3 += FUNC_0(&VAR_1->load);
 if (VAR_2 == VAR_3)
  return VAR_0->queue->total_request_count >
   VAR_1->queue->total_request_count;
 return VAR_2 > VAR_3;
}
