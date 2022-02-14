
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {TYPE_1__* adapter; int req_q_free; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct zfcp_qdio *VAR_1)
{
 if (FUNC_0(&VAR_1->req_q_free) ||
     !(FUNC_0(&VAR_1->adapter->status) & VAR_0))
  return 1;
 return 0;
}
