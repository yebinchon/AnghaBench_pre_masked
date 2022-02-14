
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct knav_queue_inst {int dummy; } ;
struct TYPE_3__ {int base_id; int num_queues; } ;


 TYPE_1__* VAR_0 ;
 struct knav_queue_inst* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline struct knav_queue_inst *FUNC_1(int VAR_1)
{
 if (VAR_0->base_id <= VAR_1 &&
     VAR_0->base_id + VAR_0->num_queues > VAR_1) {
  VAR_1 -= VAR_0->base_id;
  return FUNC_0(VAR_0, VAR_1);
 }
 return ((void*)0);
}
