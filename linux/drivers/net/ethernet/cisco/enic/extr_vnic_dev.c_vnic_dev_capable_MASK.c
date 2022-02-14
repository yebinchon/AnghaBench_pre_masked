
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vnic_dev {int dummy; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_dev*,int ,scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct vnic_dev *VAR_1, enum vnic_devcmd_cmd VAR_2)
{
 u64 VAR_3 = (u32)VAR_2, VAR_4 = 0;
 int VAR_5 = 1000;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_3, &VAR_4, VAR_5);

 return !(VAR_6 || VAR_3);
}
