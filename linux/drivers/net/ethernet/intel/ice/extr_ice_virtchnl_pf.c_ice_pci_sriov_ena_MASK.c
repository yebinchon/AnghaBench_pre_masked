
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_pf {int num_vfs_supported; int flags; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct ice_pf*,int) ;
 int FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct ice_pf*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ice_pf *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_5(VAR_5->pdev);
 struct device *VAR_8 = &VAR_5->pdev->dev;
 int VAR_9;

 if (!FUNC_4(VAR_5)) {
  FUNC_0(VAR_8, "Cannot enable SR-IOV, device not ready\n");
  return -VAR_0;
 }

 if (!FUNC_7(VAR_3, VAR_5->flags)) {
  FUNC_0(VAR_8, "This device is not capable of SR-IOV\n");
  return -VAR_1;
 }

 if (VAR_7 && VAR_7 != VAR_6)
  FUNC_3(VAR_5);
 else if (VAR_7 && VAR_7 == VAR_6)
  return VAR_6;

 if (VAR_6 > VAR_5->num_vfs_supported) {
  FUNC_0(VAR_8, "Can't enable %d VFs, max VFs supported is %d\n",
   VAR_6, VAR_5->num_vfs_supported);
  return -VAR_2;
 }

 FUNC_1(VAR_8, "Allocating %d VFs\n", VAR_6);
 VAR_9 = FUNC_2(VAR_5, VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_8, "Failed to enable SR-IOV: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_6(VAR_4, VAR_5->flags);
 return VAR_6;
}
