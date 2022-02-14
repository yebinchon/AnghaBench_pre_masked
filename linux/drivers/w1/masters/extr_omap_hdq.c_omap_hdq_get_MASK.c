
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdq_data {int hdq_usecount; int mode; int hdq_mutex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hdq_data*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hdq_data*,int ) ;
 int FUNC_3 (struct hdq_data*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct hdq_data *VAR_12)
{
 int VAR_13 = 0;

 VAR_13 = FUNC_4(&VAR_12->hdq_mutex);
 if (VAR_13 < 0) {
  VAR_13 = -VAR_0;
  goto rtn;
 }

 if (VAR_6 == VAR_12->hdq_usecount) {
  FUNC_1(VAR_12->dev, "attempt to exceed the max use count");
  VAR_13 = -VAR_1;
  goto out;
 } else {
  VAR_12->hdq_usecount++;
  FUNC_7(VAR_11);
  if (1 == VAR_12->hdq_usecount) {

   FUNC_6(VAR_12->dev);


   if (!(FUNC_2(VAR_12, VAR_9) &
    VAR_10)) {
    VAR_13 = FUNC_0(VAR_12);
    if (VAR_13)

     VAR_12->hdq_usecount--;
   } else {

    FUNC_3(VAR_12, VAR_2,
     VAR_3 |
     VAR_4 |
     VAR_12->mode);
    FUNC_3(VAR_12, VAR_7,
     VAR_8);
    FUNC_2(VAR_12, VAR_5);
   }
  }
 }

out:
 FUNC_5(&VAR_12->hdq_mutex);
rtn:
 return VAR_13;
}
