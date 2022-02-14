
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int dummy; } ;
struct isp_csiphy {int mutex; struct media_entity* entity; int * vdd; TYPE_1__* isp; int csi2; } ;
struct TYPE_2__ {scalar_t__ revision; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct isp_csiphy*,int) ;
 int FUNC_1 (struct isp_csiphy*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct isp_csiphy*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct isp_csiphy *VAR_3, struct media_entity *VAR_4)
{
 int VAR_5;

 if (VAR_3->vdd == ((void*)0)) {
  FUNC_2(VAR_3->isp->dev,
   "Power regulator for CSI PHY not available\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_3->mutex);

 VAR_5 = FUNC_8(VAR_3->vdd);
 if (VAR_5 < 0)
  goto done;

 VAR_5 = FUNC_5(VAR_3->csi2);
 if (VAR_5 < 0)
  goto done;

 VAR_3->entity = VAR_4;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 < 0)
  goto done;

 if (VAR_3->isp->revision == VAR_2) {
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  if (VAR_5) {
   FUNC_7(VAR_3->vdd);
   goto done;
  }

  FUNC_0(VAR_3, 1);
 }
done:
 if (VAR_5 < 0)
  VAR_3->entity = ((void*)0);

 FUNC_4(&VAR_3->mutex);
 return VAR_5;
}
