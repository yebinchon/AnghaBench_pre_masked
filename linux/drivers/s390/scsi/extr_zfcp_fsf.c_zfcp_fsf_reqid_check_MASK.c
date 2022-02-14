
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {struct qdio_buffer** res_q; struct zfcp_adapter* adapter; } ;
struct zfcp_fsf_req {int dummy; } ;
struct zfcp_adapter {TYPE_1__* ccw_device; int req_list; } ;
struct qdio_buffer_element {int eflags; scalar_t__ addr; } ;
struct qdio_buffer {struct qdio_buffer_element* element; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned long,int ) ;
 int FUNC_3 (struct zfcp_fsf_req*) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 struct zfcp_fsf_req* FUNC_5 (int ,unsigned long) ;

void FUNC_6(struct zfcp_qdio *VAR_2, int VAR_3)
{
 struct zfcp_adapter *VAR_4 = VAR_2->adapter;
 struct qdio_buffer *VAR_5 = VAR_2->res_q[VAR_3];
 struct qdio_buffer_element *VAR_6;
 struct zfcp_fsf_req *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {

  VAR_6 = &VAR_5->element[VAR_9];
  VAR_8 = (unsigned long) VAR_6->addr;
  VAR_7 = FUNC_5(VAR_4->req_list, VAR_8);

  if (!VAR_7) {




   FUNC_4(VAR_4);
   FUNC_2("error: unknown req_id (%lx) on adapter %s.\n",
         VAR_8, FUNC_0(&VAR_4->ccw_device->dev));
  }

  FUNC_3(VAR_7);

  if (FUNC_1(VAR_6->eflags & VAR_1))
   break;
 }
}
