
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_param {int value; } ;
struct iscsi_conn {int param_list; struct cxgbit_sock* context; } ;
struct TYPE_2__ {struct cxgbit_device* cdev; } ;
struct cxgbit_sock {TYPE_1__ com; } ;
struct cxgbit_device {scalar_t__ mdsl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iscsi_conn*,char*,scalar_t__) ;
 struct iscsi_param* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;

int FUNC_3(struct iscsi_conn *VAR_1)
{
 struct cxgbit_sock *VAR_2 = VAR_1->context;
 struct cxgbit_device *VAR_3 = VAR_2->com.cdev;
 struct iscsi_param *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_0,
       VAR_1->param_list);
 if (!VAR_4)
  return -1;

 if (FUNC_2(VAR_4->value, 0, &VAR_5) < 0)
  return -1;

 if (VAR_5 > VAR_3->mdsl) {
  if (FUNC_0(
   VAR_1, "MaxXmitDataSegmentLength=%u", VAR_3->mdsl))
   return -1;
 }

 return 0;
}
