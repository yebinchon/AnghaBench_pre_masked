
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {int data; } ;
typedef TYPE_1__ sts_cont_entry_t ;
struct scsi_qla_host {int dummy; } ;
struct scsi_cmnd {int result; } ;
struct rsp_que {TYPE_2__* status_srb; struct qla_hw_data* hw; } ;
struct qla_hw_data {int pdev; } ;
struct TYPE_12__ {int (* done ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ srb_t ;


 int FUNC_0 (TYPE_2__*) ;
 int* FUNC_1 (TYPE_2__*) ;
 struct scsi_cmnd* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int*,int ,int) ;
 struct scsi_qla_host* FUNC_8 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (scalar_t__,struct scsi_qla_host*,int,int*,int) ;
 int FUNC_10 (int ,struct scsi_qla_host*,int,char*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_12(struct rsp_que *VAR_3, sts_cont_entry_t *VAR_4)
{
 uint8_t VAR_5 = 0;
 struct qla_hw_data *VAR_6 = VAR_3->hw;
 struct scsi_qla_host *VAR_7 = FUNC_8(VAR_6->pdev);
 srb_t *VAR_8 = VAR_3->status_srb;
 struct scsi_cmnd *VAR_9;
 uint32_t VAR_10;
 uint8_t *VAR_11;

 if (!VAR_8 || !FUNC_0(VAR_8))
  return;

 VAR_10 = FUNC_0(VAR_8);
 VAR_11 = FUNC_1(VAR_8);

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_10(VAR_2, VAR_7, 0x3025,
      "cmd is NULL: already returned to OS (sp=%p).\n", VAR_8);

  VAR_3->status_srb = ((void*)0);
  return;
 }

 if (VAR_10 > sizeof(VAR_4->data))
  VAR_5 = sizeof(VAR_4->data);
 else
  VAR_5 = VAR_10;


 if (FUNC_3(VAR_6))
  FUNC_6(VAR_4->data, sizeof(VAR_4->data));
 FUNC_7(VAR_11, VAR_4->data, VAR_5);
 FUNC_9(VAR_1 + VAR_0, VAR_7, 0x302c,
  VAR_11, VAR_5);

 VAR_10 -= VAR_5;
 VAR_11 += VAR_5;

 FUNC_5(VAR_8, VAR_11);
 FUNC_4(VAR_8, VAR_10);


 if (VAR_10 == 0) {
  VAR_3->status_srb = ((void*)0);
  VAR_8->done(VAR_8, VAR_9->result);
 }
}
