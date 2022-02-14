
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qedi_ctx {TYPE_1__* pdev; int dbg_ctx; } ;
struct TYPE_5__ {int * req_buf; int req_dma_addr; int * resp_buf; int resp_dma_addr; int * req_bd_tbl; int req_bd_dma; void* resp_bd_tbl; int resp_bd_dma; int * resp_wr_ptr; int resp_buf_size; int * req_wr_ptr; scalar_t__ req_buf_size; } ;
struct qedi_conn {TYPE_3__* cls_conn; TYPE_2__ gen_pdu; int iscsi_conn_id; } ;
struct TYPE_6__ {int dd_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct qedi_ctx *VAR_6,
        struct qedi_conn *VAR_7)
{
 VAR_7->gen_pdu.req_buf =
  FUNC_1(&VAR_6->pdev->dev,
       VAR_2,
       &VAR_7->gen_pdu.req_dma_addr,
       VAR_1);
 if (!VAR_7->gen_pdu.req_buf)
  goto login_req_buf_failure;

 VAR_7->gen_pdu.req_buf_size = 0;
 VAR_7->gen_pdu.req_wr_ptr = VAR_7->gen_pdu.req_buf;

 VAR_7->gen_pdu.resp_buf =
  FUNC_1(&VAR_6->pdev->dev,
       VAR_2,
       &VAR_7->gen_pdu.resp_dma_addr,
       VAR_1);
 if (!VAR_7->gen_pdu.resp_buf)
  goto login_resp_buf_failure;

 VAR_7->gen_pdu.resp_buf_size = VAR_2;
 VAR_7->gen_pdu.resp_wr_ptr = VAR_7->gen_pdu.resp_buf;

 VAR_7->gen_pdu.req_bd_tbl =
  FUNC_1(&VAR_6->pdev->dev, VAR_5,
       &VAR_7->gen_pdu.req_bd_dma, VAR_1);
 if (!VAR_7->gen_pdu.req_bd_tbl)
  goto login_req_bd_tbl_failure;

 VAR_7->gen_pdu.resp_bd_tbl =
  FUNC_1(&VAR_6->pdev->dev, VAR_5,
       &VAR_7->gen_pdu.resp_bd_dma,
       VAR_1);
 if (!VAR_7->gen_pdu.resp_bd_tbl)
  goto login_resp_bd_tbl_failure;

 FUNC_0(&VAR_6->dbg_ctx, VAR_4,
    "Allocation successful, cid=0x%x\n",
    VAR_7->iscsi_conn_id);
 return 0;

login_resp_bd_tbl_failure:
 FUNC_2(&VAR_6->pdev->dev, VAR_5,
     VAR_7->gen_pdu.req_bd_tbl,
     VAR_7->gen_pdu.req_bd_dma);
 VAR_7->gen_pdu.req_bd_tbl = ((void*)0);

login_req_bd_tbl_failure:
 FUNC_2(&VAR_6->pdev->dev, VAR_2,
     VAR_7->gen_pdu.resp_buf,
     VAR_7->gen_pdu.resp_dma_addr);
 VAR_7->gen_pdu.resp_buf = ((void*)0);
login_resp_buf_failure:
 FUNC_2(&VAR_6->pdev->dev, VAR_2,
     VAR_7->gen_pdu.req_buf,
     VAR_7->gen_pdu.req_dma_addr);
 VAR_7->gen_pdu.req_buf = ((void*)0);
login_req_buf_failure:
 FUNC_3(VAR_3, VAR_7->cls_conn->dd_data,
     "login resource alloc failed!!\n");
 return -VAR_0;
}
