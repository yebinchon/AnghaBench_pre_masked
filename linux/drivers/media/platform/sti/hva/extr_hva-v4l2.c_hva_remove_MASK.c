
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; } ;
struct hva_dev {int v4l2_dev; int work_queue; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct hva_dev*) ;
 int FUNC_3 (struct hva_dev*) ;
 struct device* FUNC_4 (struct hva_dev*) ;
 int FUNC_5 (struct hva_dev*) ;
 struct hva_dev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct hva_dev *VAR_2 = FUNC_6(VAR_1);
 struct device *VAR_3 = FUNC_4(VAR_2);

 FUNC_5(VAR_2);

 FUNC_0(VAR_2->work_queue);

 FUNC_3(VAR_2);





 FUNC_7(&VAR_2->v4l2_dev);

 FUNC_1(VAR_3, "%s %s removed\n", VAR_0, VAR_1->name);

 return 0;
}
