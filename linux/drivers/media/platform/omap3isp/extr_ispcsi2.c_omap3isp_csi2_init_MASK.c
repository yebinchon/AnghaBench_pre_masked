
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_csi2_device {int available; int wait; void* state; int * phy; int regs2; int regs1; struct isp_device* isp; } ;
struct isp_device {scalar_t__ revision; int isp_csiphy1; int isp_csiphy2; struct isp_csi2_device isp_csi2c; struct isp_csi2_device isp_csi2a; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_csi2_device*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct isp_device *VAR_6)
{
 struct isp_csi2_device *VAR_7 = &VAR_6->isp_csi2a;
 struct isp_csi2_device *VAR_8 = &VAR_6->isp_csi2c;
 int VAR_9;

 VAR_7->isp = VAR_6;
 VAR_7->available = 1;
 VAR_7->regs1 = VAR_2;
 VAR_7->regs2 = VAR_3;
 VAR_7->phy = &VAR_6->isp_csiphy2;
 VAR_7->state = VAR_0;
 FUNC_1(&VAR_7->wait);

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6->revision == VAR_1) {
  VAR_8->isp = VAR_6;
  VAR_8->available = 1;
  VAR_8->regs1 = VAR_4;
  VAR_8->regs2 = VAR_5;
  VAR_8->phy = &VAR_6->isp_csiphy1;
  VAR_8->state = VAR_0;
  FUNC_1(&VAR_8->wait);
 }

 return 0;
}
