
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int rq_flags; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ retries; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct request*) ;

__attribute__((used)) static inline void FUNC_1(struct request *VAR_1)
{
 if (!(VAR_1->rq_flags & VAR_0)) {
  FUNC_0(VAR_1)->retries = 0;
  FUNC_0(VAR_1)->flags = 0;
  VAR_1->rq_flags |= VAR_0;
 }
}
