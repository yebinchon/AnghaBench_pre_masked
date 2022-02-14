
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {int ndev; } ;
struct TYPE_2__ {int protocol; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (struct qede_dev*,struct flow_cls_offload*,int ) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static int FUNC_2(enum tc_setup_type VAR_1, void *VAR_2,
      void *VAR_3)
{
 struct flow_cls_offload *VAR_4;
 struct qede_dev *VAR_5 = VAR_3;

 if (!FUNC_1(VAR_5->ndev, VAR_2))
  return -VAR_0;

 switch (VAR_1) {
 case 128:
  VAR_4 = VAR_2;
  return FUNC_0(VAR_5, VAR_4, VAR_4->common.protocol);
 default:
  return -VAR_0;
 }
}
