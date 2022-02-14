
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int dev; } ;
struct ac100_dev {int * dev; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int) ;
 struct ac100_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct sunxi_rsb_device*,int *) ;
 int FUNC_7 (struct sunxi_rsb_device*,struct ac100_dev*) ;

__attribute__((used)) static int FUNC_8(struct sunxi_rsb_device *VAR_5)
{
 struct ac100_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_5->dev;
 FUNC_7(VAR_5, VAR_6);

 VAR_6->regmap = FUNC_6(VAR_5, &VAR_4);
 if (FUNC_1(VAR_6->regmap)) {
  VAR_7 = FUNC_2(VAR_6->regmap);
  FUNC_3(VAR_6->dev, "regmap init failed: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_5(VAR_6->dev, VAR_2, VAR_3,
       FUNC_0(VAR_3), ((void*)0), 0, ((void*)0));
 if (VAR_7) {
  FUNC_3(VAR_6->dev, "failed to add MFD devices: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
