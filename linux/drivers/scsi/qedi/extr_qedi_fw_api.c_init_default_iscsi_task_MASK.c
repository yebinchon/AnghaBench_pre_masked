
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct iscsi_task_params {int conn_icid; int cq_rss_number; struct e4_iscsi_task_context* context; } ;
struct TYPE_14__ {void* icid; int flags1; } ;
struct TYPE_13__ {int task_type; int cq_rss_number; } ;
struct TYPE_12__ {void* task_cid; int cdu_validation; } ;
struct TYPE_11__ {int task_type; } ;
struct TYPE_8__ {int * data; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
struct TYPE_10__ {TYPE_2__ pdu_hdr; } ;
struct e4_iscsi_task_context {TYPE_7__ ustorm_ag_context; TYPE_6__ ustorm_st_context; TYPE_5__ mstorm_ag_context; TYPE_4__ mstorm_st_context; TYPE_3__ ystorm_st_context; } ;
struct data_hdr {int * data; } ;
typedef enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct e4_iscsi_task_context*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct iscsi_task_params *VAR_1,
        struct data_hdr *VAR_2,
        enum iscsi_task_type VAR_3)
{
 struct e4_iscsi_task_context *VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 u8 VAR_7;

 VAR_4 = VAR_1->context;
 VAR_7 = VAR_4->mstorm_ag_context.cdu_validation;
 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->mstorm_ag_context.cdu_validation = VAR_7;

 for (VAR_6 = 0; VAR_6 <
      FUNC_0(VAR_4->ystorm_st_context.pdu_hdr.data.data);
      VAR_6++) {
  VAR_5 = FUNC_3(VAR_2->data[VAR_6]);
  VAR_4->ystorm_st_context.pdu_hdr.data.data[VAR_6] = VAR_5;
 }

 VAR_4->mstorm_st_context.task_type = VAR_3;
 VAR_4->mstorm_ag_context.task_cid =
         FUNC_2(VAR_1->conn_icid);

 FUNC_1(VAR_4->ustorm_ag_context.flags1,
    VAR_0, 1);

 VAR_4->ustorm_st_context.task_type = VAR_3;
 VAR_4->ustorm_st_context.cq_rss_number = VAR_1->cq_rss_number;
 VAR_4->ustorm_ag_context.icid = FUNC_2(VAR_1->conn_icid);
}
