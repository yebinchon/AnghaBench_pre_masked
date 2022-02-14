
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u16 ;
struct qedi_endpoint {TYPE_1__* qedi; } ;
struct qedi_ctx {scalar_t__ max_sqes; int dbg_ctx; } ;
struct qedi_cmd {int dummy; } ;
struct iscsi_endpoint {struct qedi_endpoint* dd_data; } ;
struct iscsi_cls_session {int dd_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* shost; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct qedi_endpoint*) ;
 scalar_t__ VAR_1 ;
 struct qedi_ctx* FUNC_1 (struct Scsi_Host*) ;
 struct iscsi_cls_session* FUNC_2 (int *,struct Scsi_Host*,scalar_t__,int ,int,int ,int ) ;
 int FUNC_3 (struct iscsi_cls_session*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct qedi_ctx*,int ) ;

__attribute__((used)) static struct iscsi_cls_session *
FUNC_5(struct iscsi_endpoint *VAR_3, u16 VAR_4,
      u16 VAR_5, uint32_t VAR_6)
{
 struct Scsi_Host *VAR_7;
 struct iscsi_cls_session *VAR_8;
 struct qedi_ctx *VAR_9;
 struct qedi_endpoint *VAR_10;

 if (!VAR_3)
  return ((void*)0);

 VAR_10 = VAR_3->dd_data;
 VAR_7 = VAR_10->qedi->shost;
 VAR_9 = FUNC_1(VAR_7);

 if (VAR_4 > VAR_9->max_sqes)
  VAR_4 = VAR_9->max_sqes;
 else if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;

 VAR_8 = FUNC_2(&VAR_2, VAR_7,
       VAR_4, 0, sizeof(struct qedi_cmd),
       VAR_6, VAR_0);
 if (!VAR_8) {
  FUNC_0(&VAR_9->dbg_ctx,
    "Failed to setup session for ep=%p\n", VAR_10);
  return ((void*)0);
 }

 if (FUNC_4(VAR_9, VAR_8->dd_data)) {
  FUNC_0(&VAR_9->dbg_ctx,
    "Failed to setup cmd pool for ep=%p\n", VAR_10);
  goto session_teardown;
 }

 return VAR_8;

session_teardown:
 FUNC_3(VAR_8);
 return ((void*)0);
}
