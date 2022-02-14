
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct TYPE_3__ {int notifier_call; } ;
struct ap_matrix_mdev {TYPE_1__ group_notifier; TYPE_1__ iommu_notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct mdev_device*) ;
 struct ap_matrix_mdev* FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,unsigned long*,TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct mdev_device *VAR_8)
{
 struct ap_matrix_mdev *VAR_9 = FUNC_1(VAR_8);
 unsigned long VAR_10;
 int VAR_11;


 if (!FUNC_3(VAR_1))
  return -VAR_0;

 VAR_9->group_notifier.notifier_call = VAR_6;
 VAR_10 = VAR_3;

 VAR_11 = FUNC_4(FUNC_0(VAR_8), VAR_2,
         &VAR_10, &VAR_9->group_notifier);
 if (VAR_11) {
  FUNC_2(VAR_1);
  return VAR_11;
 }

 VAR_9->iommu_notifier.notifier_call = VAR_7;
 VAR_10 = VAR_5;
 VAR_11 = FUNC_4(FUNC_0(VAR_8), VAR_4,
         &VAR_10, &VAR_9->iommu_notifier);
 if (!VAR_11)
  return VAR_11;

 FUNC_5(FUNC_0(VAR_8), VAR_2,
     &VAR_9->group_notifier);
 FUNC_2(VAR_1);
 return VAR_11;
}
