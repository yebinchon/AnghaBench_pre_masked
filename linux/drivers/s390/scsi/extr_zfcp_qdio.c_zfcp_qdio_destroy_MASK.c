
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {int res_q; int req_q; TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ ccw_device; } ;


 int VAR_0 ;
 int FUNC_0 (struct zfcp_qdio*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct zfcp_qdio *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->adapter->ccw_device)
  FUNC_1(VAR_1->adapter->ccw_device);

 FUNC_2(VAR_1->req_q, VAR_0);
 FUNC_2(VAR_1->res_q, VAR_0);
 FUNC_0(VAR_1);
}
