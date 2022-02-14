
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hdq_data {int hdq_mutex; scalar_t__ hdq_usecount; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct hdq_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct hdq_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_1(&VAR_3->hdq_mutex);

 if (VAR_3->hdq_usecount) {
  FUNC_0(&VAR_2->dev, "removed when use count is not zero\n");
  FUNC_2(&VAR_3->hdq_mutex);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->hdq_mutex);


 FUNC_4(&VAR_2->dev);

 FUNC_5(&VAR_1);

 return 0;
}
