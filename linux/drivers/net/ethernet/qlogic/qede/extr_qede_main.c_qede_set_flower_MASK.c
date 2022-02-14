
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct flow_cls_offload {int command; int cookie; } ;
typedef int __be16 ;


 int VAR_0 ;


 int FUNC_0 (struct qede_dev*,int ,struct flow_cls_offload*) ;
 int FUNC_1 (struct qede_dev*,int ) ;

__attribute__((used)) static int
FUNC_2(struct qede_dev *VAR_1, struct flow_cls_offload *VAR_2,
  __be16 VAR_3)
{
 switch (VAR_2->command) {
 case 128:
  return FUNC_0(VAR_1, VAR_3, VAR_2);
 case 129:
  return FUNC_1(VAR_1, VAR_2->cookie);
 default:
  return -VAR_0;
 }
}
