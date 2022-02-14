
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_dev {int proxy; int args; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct vnic_dev*,int,int *,int *,int) ;
 int FUNC_2 (struct vnic_dev*,int ,int,int *,int *,int) ;

int FUNC_3(struct vnic_dev *VAR_2, enum vnic_devcmd_cmd VAR_3,
 u64 *VAR_4, u64 *VAR_5, int VAR_6)
{
 FUNC_0(VAR_2->args, 0, sizeof(VAR_2->args));

 switch (VAR_2->proxy) {
 case 129:
  return FUNC_2(VAR_2, VAR_1, VAR_3,
    VAR_4, VAR_5, VAR_6);
 case 130:
  return FUNC_2(VAR_2, VAR_0, VAR_3,
    VAR_4, VAR_5, VAR_6);
 case 128:
 default:
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
