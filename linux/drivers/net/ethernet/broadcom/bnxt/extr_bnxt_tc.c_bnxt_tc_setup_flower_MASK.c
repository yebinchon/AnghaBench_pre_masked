
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct flow_cls_offload {int command; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct bnxt*,int ,struct flow_cls_offload*) ;
 int FUNC_1 (struct bnxt*,struct flow_cls_offload*) ;
 int FUNC_2 (struct bnxt*,struct flow_cls_offload*) ;

int FUNC_3(struct bnxt *VAR_1, u16 VAR_2,
    struct flow_cls_offload *VAR_3)
{
 switch (VAR_3->command) {
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 130:
  return FUNC_1(VAR_1, VAR_3);
 case 128:
  return FUNC_2(VAR_1, VAR_3);
 default:
  return -VAR_0;
 }
}
