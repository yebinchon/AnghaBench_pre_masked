
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 int VAR_5;

 if (!FUNC_1(&VAR_4->dev))
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "Couldn't configure OTG module\n");
  return VAR_5;
 }


 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "Can't init FSL OTG device\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "unable to register FSL OTG device\n");
  return VAR_5;
 }

 return VAR_5;
}
