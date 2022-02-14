
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scm_request {TYPE_2__* aob; struct request** request; } ;
struct request {int dummy; } ;
struct TYPE_3__ {size_t msb_count; } ;
struct TYPE_4__ {TYPE_1__ request; } ;



__attribute__((used)) static inline void FUNC_0(struct scm_request *VAR_0,
       struct request *VAR_1)
{
 VAR_0->request[VAR_0->aob->request.msb_count] = VAR_1;
}
