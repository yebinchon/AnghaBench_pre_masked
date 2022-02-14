
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct vnic_dev {int (* devcmd_rtn ) (struct vnic_dev*,int,int) ;void** args; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int FUNC_0 (struct vnic_dev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct vnic_dev *VAR_0,
 enum vnic_devcmd_cmd VAR_1, u64 *VAR_2, u64 *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_0->args[0] = *VAR_2;
 VAR_0->args[1] = *VAR_3;

 VAR_5 = VAR_0->devcmd_rtn(VAR_0, VAR_1, VAR_4);

 *VAR_2 = VAR_0->args[0];
 *VAR_3 = VAR_0->args[1];

 return VAR_5;
}
