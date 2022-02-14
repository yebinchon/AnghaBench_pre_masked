
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_csi2_device {int available; int wait; void* state; int subclk; int * phy; int regs1; struct iss_device* iss; } ;
struct iss_device {int csiphy2; int csiphy1; struct iss_csi2_device csi2b; struct iss_csi2_device csi2a; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iss_csi2_device*,char*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct iss_device *VAR_5)
{
 struct iss_csi2_device *VAR_6 = &VAR_5->csi2a;
 struct iss_csi2_device *VAR_7 = &VAR_5->csi2b;
 int VAR_8;

 VAR_6->iss = VAR_5;
 VAR_6->available = 1;
 VAR_6->regs1 = VAR_1;
 VAR_6->phy = &VAR_5->csiphy1;
 VAR_6->subclk = VAR_3;
 VAR_6->state = VAR_0;
 FUNC_1(&VAR_6->wait);

 VAR_8 = FUNC_0(VAR_6, "a");
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->iss = VAR_5;
 VAR_7->available = 1;
 VAR_7->regs1 = VAR_2;
 VAR_7->phy = &VAR_5->csiphy2;
 VAR_7->subclk = VAR_4;
 VAR_7->state = VAR_0;
 FUNC_1(&VAR_7->wait);

 VAR_8 = FUNC_0(VAR_7, "b");
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
