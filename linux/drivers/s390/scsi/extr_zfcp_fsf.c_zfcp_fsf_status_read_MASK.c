
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; struct zfcp_adapter* adapter; } ;
struct zfcp_fsf_req {struct fsf_status_read_buffer* data; int qdio_req; } ;
struct TYPE_2__ {int sr_data; int status_read_req; } ;
struct zfcp_adapter {TYPE_1__ pool; } ;
struct page {int dummy; } ;
struct fsf_status_read_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 struct page* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct fsf_status_read_buffer*,int ,int) ;
 struct fsf_status_read_buffer* FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fsf_status_read_buffer*) ;
 int FUNC_9 (char*,struct zfcp_fsf_req*) ;
 struct zfcp_fsf_req* FUNC_10 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_11 (struct zfcp_fsf_req*) ;
 int FUNC_12 (struct zfcp_fsf_req*) ;
 int FUNC_13 (struct zfcp_qdio*,int *,struct fsf_status_read_buffer*,int) ;
 scalar_t__ FUNC_14 (struct zfcp_qdio*) ;
 int FUNC_15 (struct zfcp_qdio*,int *) ;

int FUNC_16(struct zfcp_qdio *VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_5->adapter;
 struct zfcp_fsf_req *VAR_7;
 struct fsf_status_read_buffer *VAR_8;
 struct page *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_6(&VAR_5->req_q_lock);
 if (FUNC_14(VAR_5))
  goto out;

 VAR_7 = FUNC_10(VAR_5, VAR_2,
      VAR_4,
      VAR_6->pool.status_read_req);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  goto out;
 }

 VAR_9 = FUNC_2(VAR_6->pool.sr_data, VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto failed_buf;
 }
 VAR_8 = FUNC_5(VAR_9);
 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_7->data = VAR_8;

 FUNC_13(VAR_5, &VAR_7->qdio_req, VAR_8, sizeof(*VAR_8));
 FUNC_15(VAR_5, &VAR_7->qdio_req);

 VAR_10 = FUNC_12(VAR_7);
 if (VAR_10)
  goto failed_req_send;


 goto out;

failed_req_send:
 VAR_7->data = ((void*)0);
 FUNC_3(FUNC_8(VAR_8), VAR_6->pool.sr_data);
failed_buf:
 FUNC_9("fssr__1", VAR_7);
 FUNC_11(VAR_7);
out:
 FUNC_7(&VAR_5->req_q_lock);
 return VAR_10;
}
