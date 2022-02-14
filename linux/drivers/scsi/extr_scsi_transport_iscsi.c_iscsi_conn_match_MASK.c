
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct attribute_container {int * class; } ;
struct TYPE_4__ {struct attribute_container ac; } ;
struct iscsi_internal {TYPE_1__ conn_cont; } ;
struct iscsi_cls_session {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct iscsi_cls_conn {TYPE_2__ dev; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_6__ {int class; } ;


 TYPE_3__ VAR_0 ;
 struct iscsi_cls_conn* FUNC_0 (struct device*) ;
 struct iscsi_cls_session* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct Scsi_Host* FUNC_3 (struct iscsi_cls_session*) ;
 struct iscsi_internal* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct attribute_container *VAR_1,
      struct device *VAR_2)
{
 struct iscsi_cls_session *VAR_3;
 struct iscsi_cls_conn *VAR_4;
 struct Scsi_Host *VAR_5;
 struct iscsi_internal *VAR_6;

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_4->dev.parent);
 VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5->transportt)
  return 0;

 VAR_6 = FUNC_4(VAR_5->transportt);
 if (VAR_6->conn_cont.ac.class != &VAR_0.class)
  return 0;

 return &VAR_6->conn_cont.ac == VAR_1;
}
