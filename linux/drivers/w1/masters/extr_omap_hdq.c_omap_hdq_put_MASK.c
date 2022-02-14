
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdq_data {scalar_t__ hdq_usecount; int hdq_mutex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdq_data*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hdq_data *VAR_5)
{
 int VAR_6 = 0;

 VAR_6 = FUNC_3(&VAR_5->hdq_mutex);
 if (VAR_6 < 0)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_2,
      VAR_3);
 if (0 == VAR_5->hdq_usecount) {
  FUNC_0(VAR_5->dev, "attempt to decrement use count"
   " when it is zero");
  VAR_6 = -VAR_1;
 } else {
  VAR_5->hdq_usecount--;
  FUNC_2(VAR_4);
  if (0 == VAR_5->hdq_usecount)
   FUNC_5(VAR_5->dev);
 }
 FUNC_4(&VAR_5->hdq_mutex);

 return VAR_6;
}
