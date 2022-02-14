
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_dev {int dummy; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_dev*,int ,int*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct vnic_dev *VAR_1, enum vnic_devcmd_cmd VAR_2,
 int *VAR_3)
{
 u64 VAR_4 = VAR_2, VAR_5 = 0;
 int VAR_6 = 1000;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0, &VAR_4, &VAR_5, VAR_6);
 if (!VAR_7)
  *VAR_3 = (int)VAR_4;

 return VAR_7;
}
