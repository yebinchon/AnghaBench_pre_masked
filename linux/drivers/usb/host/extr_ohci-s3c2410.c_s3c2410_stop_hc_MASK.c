
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_hcd_info {int (* enable_oc ) (struct s3c2410_hcd_info*,int ) ;int * hcd; int * report_oc; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct s3c2410_hcd_info* FUNC_2 (int *) ;
 int FUNC_3 (struct s3c2410_hcd_info*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_2)
{
 struct s3c2410_hcd_info *VAR_3 = FUNC_2(&VAR_2->dev);

 FUNC_1(&VAR_2->dev, "s3c2410_stop_hc:\n");

 if (VAR_3 != ((void*)0)) {
  VAR_3->report_oc = ((void*)0);
  VAR_3->hcd = ((void*)0);

  if (VAR_3->enable_oc != ((void*)0))
   (VAR_3->enable_oc)(VAR_3, 0);
 }

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
}
