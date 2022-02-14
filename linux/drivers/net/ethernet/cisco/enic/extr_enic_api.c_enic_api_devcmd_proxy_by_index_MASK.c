
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct enic {int enic_api_lock; int devcmd_lock; struct vnic_dev* vdev; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 struct enic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vnic_dev*,int,int *,int *,int) ;
 int FUNC_6 (struct vnic_dev*,int) ;
 int FUNC_7 (struct vnic_dev*) ;

int FUNC_8(struct net_device *VAR_0, int VAR_1,
 enum vnic_devcmd_cmd VAR_2, u64 *VAR_3, u64 *VAR_4, int VAR_5)
{
 int VAR_6;
 struct enic *VAR_7 = FUNC_0(VAR_0);
 struct vnic_dev *VAR_8 = VAR_7->vdev;

 FUNC_1(&VAR_7->enic_api_lock);
 FUNC_2(&VAR_7->devcmd_lock);

 FUNC_6(VAR_8, VAR_1);
 VAR_6 = FUNC_5(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_7(VAR_8);

 FUNC_4(&VAR_7->devcmd_lock);
 FUNC_3(&VAR_7->enic_api_lock);

 return VAR_6;
}
