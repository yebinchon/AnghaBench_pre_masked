
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct device {int dummy; } ;
struct csid_device {int vdda; int clock; int nclocks; int irq; scalar_t__ base; TYPE_1__* camss; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct device*) ;
 int FUNC_2 (struct csid_device*) ;
 int FUNC_3 (struct csid_device*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct csid_device* FUNC_12 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct csid_device *VAR_3 = FUNC_12(VAR_1);
 struct device *VAR_4 = VAR_3->camss->dev;
 int VAR_5;

 if (VAR_2) {
  u32 VAR_6;

  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_11(VAR_3->vdda);
  if (VAR_5 < 0) {
   FUNC_8(VAR_4);
   return VAR_5;
  }

  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 < 0) {
   FUNC_10(VAR_3->vdda);
   FUNC_8(VAR_4);
   return VAR_5;
  }

  VAR_5 = FUNC_1(VAR_3->nclocks, VAR_3->clock, VAR_4);
  if (VAR_5 < 0) {
   FUNC_10(VAR_3->vdda);
   FUNC_8(VAR_4);
   return VAR_5;
  }

  FUNC_6(VAR_3->irq);

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0) {
   FUNC_5(VAR_3->irq);
   FUNC_0(VAR_3->nclocks, VAR_3->clock);
   FUNC_10(VAR_3->vdda);
   FUNC_8(VAR_4);
   return VAR_5;
  }

  VAR_6 = FUNC_9(VAR_3->base + VAR_0);
  FUNC_4(VAR_4, "CSID HW Version = 0x%08x\n", VAR_6);
 } else {
  FUNC_5(VAR_3->irq);
  FUNC_0(VAR_3->nclocks, VAR_3->clock);
  VAR_5 = FUNC_10(VAR_3->vdda);
  FUNC_8(VAR_4);
 }

 return VAR_5;
}
