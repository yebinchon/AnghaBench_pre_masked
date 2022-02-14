
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_qdio {int dummy; } ;
struct zfcp_fsf_req {int qdio_req; struct fsf_qtcb* qtcb; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int adapter_features; struct zfcp_qdio* qdio; } ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {void* resp_buf_length; void* req_buf_length; } ;
struct TYPE_4__ {TYPE_1__ support; } ;
struct fsf_qtcb {TYPE_2__ bottom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scatterlist*) ;
 scalar_t__ FUNC_1 (struct zfcp_adapter*) ;
 int FUNC_2 (struct zfcp_qdio*,int *,struct scatterlist*,struct scatterlist*) ;
 void* FUNC_3 (struct scatterlist*) ;
 scalar_t__ FUNC_4 (struct zfcp_qdio*,int *,struct scatterlist*) ;
 int FUNC_5 (struct zfcp_qdio*,int *,int ) ;
 int FUNC_6 (struct zfcp_qdio*,int *) ;
 int FUNC_7 (struct zfcp_qdio*,int *) ;
 scalar_t__ FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct zfcp_qdio*,int *) ;

__attribute__((used)) static int FUNC_10(struct zfcp_fsf_req *VAR_3,
           struct scatterlist *VAR_4,
           struct scatterlist *VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_3->adapter;
 struct zfcp_qdio *VAR_7 = VAR_6->qdio;
 struct fsf_qtcb *VAR_8 = VAR_3->qtcb;
 u32 VAR_9 = VAR_6->adapter_features;

 if (FUNC_1(VAR_6)) {
  if (FUNC_4(VAR_7, &VAR_3->qdio_req, VAR_4))
   return -VAR_0;
  VAR_8->bottom.support.req_buf_length =
   FUNC_3(VAR_4);
  if (FUNC_4(VAR_7, &VAR_3->qdio_req, VAR_5))
   return -VAR_0;
  VAR_8->bottom.support.resp_buf_length =
   FUNC_3(VAR_5);

  FUNC_5(VAR_7, &VAR_3->qdio_req, FUNC_0(VAR_4));
  FUNC_6(VAR_7, &VAR_3->qdio_req);
  FUNC_7(VAR_7, &VAR_3->qdio_req);
  return 0;
 }


 if (FUNC_8(VAR_4) && FUNC_8(VAR_5)) {
  FUNC_2(VAR_7, &VAR_3->qdio_req,
      VAR_4, VAR_5);
  return 0;
 }

 if (!(VAR_9 & VAR_2))
  return -VAR_1;

 if (FUNC_4(VAR_7, &VAR_3->qdio_req, VAR_4))
  return -VAR_0;

 VAR_8->bottom.support.req_buf_length = FUNC_3(VAR_4);

 FUNC_6(VAR_7, &VAR_3->qdio_req);
 FUNC_9(VAR_7, &VAR_3->qdio_req);

 if (FUNC_4(VAR_7, &VAR_3->qdio_req, VAR_5))
  return -VAR_0;

 VAR_8->bottom.support.resp_buf_length = FUNC_3(VAR_5);

 FUNC_6(VAR_7, &VAR_3->qdio_req);

 return 0;
}
