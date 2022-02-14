
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct kwqe {int dummy; } ;
struct TYPE_4__ {int flags; int op_code; } ;
struct iscsi_kwqe_conn_destroy {int context_id; scalar_t__ reserved0; TYPE_1__ hdr; } ;
struct bnx2i_hba {TYPE_3__* cnic; } ;
struct bnx2i_endpoint {int ep_cid; scalar_t__ ep_iscsi_cid; TYPE_2__* hba; } ;
struct TYPE_6__ {int (* submit_kwqes ) (TYPE_3__*,struct kwqe**,int) ;} ;
struct TYPE_5__ {int cnic_dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iscsi_kwqe_conn_destroy*,int,int) ;
 int FUNC_1 (TYPE_3__*,struct kwqe**,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct bnx2i_hba *VAR_5, struct bnx2i_endpoint *VAR_6)
{
 struct kwqe *VAR_7[2];
 struct iscsi_kwqe_conn_destroy VAR_8;
 int VAR_9 = -VAR_1;

 FUNC_0(&VAR_8, 0x00, sizeof(struct iscsi_kwqe_conn_destroy));

 VAR_8.hdr.op_code = VAR_4;
 VAR_8.hdr.flags =
  (VAR_3 << VAR_2);

 if (FUNC_2(VAR_0, &VAR_6->hba->cnic_dev_type))
  VAR_8.context_id = VAR_6->ep_cid;
 else
  VAR_8.context_id = (VAR_6->ep_cid >> 7);

 VAR_8.reserved0 = (u16)VAR_6->ep_iscsi_cid;

 VAR_7[0] = (struct kwqe *) &VAR_8;
 if (VAR_5->cnic && VAR_5->cnic->submit_kwqes)
  VAR_9 = VAR_5->cnic->submit_kwqes(VAR_5->cnic, VAR_7, 1);

 return VAR_9;
}
