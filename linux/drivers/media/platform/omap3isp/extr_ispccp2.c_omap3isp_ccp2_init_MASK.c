
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_ccp2_device {int * phy; int * vdds_csib; int wait; } ;
struct isp_device {scalar_t__ revision; int isp_csiphy1; int isp_csiphy2; int dev; struct isp_ccp2_device isp_ccp2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct isp_ccp2_device*) ;
 int FUNC_3 (struct isp_ccp2_device*) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct isp_device *VAR_3)
{
 struct isp_ccp2_device *VAR_4 = &VAR_3->isp_ccp2;
 int VAR_5;

 FUNC_6(&VAR_4->wait);
 if (VAR_3->revision == VAR_2) {
  VAR_4->vdds_csib = FUNC_5(VAR_3->dev, "vdds_csib");
  if (FUNC_0(VAR_4->vdds_csib)) {
   if (FUNC_1(VAR_4->vdds_csib) == -VAR_0) {
    FUNC_4(VAR_3->dev,
     "Can't get regulator vdds_csib, deferring probing\n");
    return -VAR_0;
   }
   FUNC_4(VAR_3->dev,
    "Could not get regulator vdds_csib\n");
   VAR_4->vdds_csib = ((void*)0);
  }
  VAR_4->phy = &VAR_3->isp_csiphy2;
 } else if (VAR_3->revision == VAR_1) {
  VAR_4->phy = &VAR_3->isp_csiphy1;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_3(VAR_4);
 return 0;
}
