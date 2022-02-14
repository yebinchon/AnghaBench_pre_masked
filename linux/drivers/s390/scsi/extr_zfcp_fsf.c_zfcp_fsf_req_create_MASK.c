
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct zfcp_qdio {struct zfcp_adapter* adapter; } ;
struct zfcp_fsf_req {scalar_t__ req_id; TYPE_4__* qtcb; int qdio_req; struct zfcp_adapter* adapter; int completion; int timer; int list; } ;
struct TYPE_5__ {int * qtcb_pool; } ;
struct zfcp_adapter {scalar_t__ req_no; int qdio; int fsf_req_seq_no; TYPE_1__ pool; } ;
struct fsf_qtcb {int dummy; } ;
typedef int mempool_t ;
struct TYPE_7__ {scalar_t__ req_handle; size_t fsf_command; } ;
struct TYPE_6__ {scalar_t__ req_id; int ulp_info; int qtcb_version; int qtcb_type; int req_seq_no; } ;
struct TYPE_8__ {TYPE_3__ header; TYPE_2__ prefix; } ;


 int VAR_0 ;
 struct zfcp_fsf_req* FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct zfcp_fsf_req* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (int ,int *,scalar_t__,int ,TYPE_4__*,int) ;

__attribute__((used)) static struct zfcp_fsf_req *FUNC_10(struct zfcp_qdio *VAR_4,
      u32 VAR_5, u8 VAR_6,
      mempool_t *VAR_7)
{
 struct zfcp_adapter *VAR_8 = VAR_4->adapter;
 struct zfcp_fsf_req *VAR_9 = FUNC_6(VAR_7);

 if (FUNC_5(!VAR_9))
  return FUNC_0(-VAR_0);

 if (VAR_8->req_no == 0)
  VAR_8->req_no++;

 FUNC_1(&VAR_9->list);
 FUNC_4(&VAR_9->timer, ((void*)0), 0);
 FUNC_2(&VAR_9->completion);

 VAR_9->adapter = VAR_8;
 VAR_9->req_id = VAR_8->req_no;

 if (FUNC_3(VAR_5 != VAR_2)) {
  if (FUNC_3(*VAR_7))
   VAR_9->qtcb = FUNC_7(
    VAR_8->pool.qtcb_pool);
  else
   VAR_9->qtcb = FUNC_7(((void*)0));

  if (FUNC_5(!VAR_9->qtcb)) {
   FUNC_8(VAR_9);
   return FUNC_0(-VAR_0);
  }

  VAR_9->qtcb->prefix.req_seq_no = VAR_8->fsf_req_seq_no;
  VAR_9->qtcb->prefix.req_id = VAR_9->req_id;
  VAR_9->qtcb->prefix.ulp_info = 26;
  VAR_9->qtcb->prefix.qtcb_type = VAR_3[VAR_5];
  VAR_9->qtcb->prefix.qtcb_version = VAR_1;
  VAR_9->qtcb->header.req_handle = VAR_9->req_id;
  VAR_9->qtcb->header.fsf_command = VAR_5;
 }

 FUNC_9(VAR_8->qdio, &VAR_9->qdio_req, VAR_9->req_id, VAR_6,
      VAR_9->qtcb, sizeof(struct fsf_qtcb));

 return VAR_9;
}
