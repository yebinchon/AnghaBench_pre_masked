
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {scalar_t__ init_trans; int hdq_mutex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdq_data*,int ,int ) ;
 int FUNC_2 (struct hdq_data*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hdq_data*) ;
 int FUNC_6 (struct hdq_data*) ;

__attribute__((used)) static u8 FUNC_7(void *VAR_3)
{
 struct hdq_data *VAR_4 = VAR_3;
 u8 VAR_5 = 0;
 int VAR_6;


 if (VAR_4->init_trans == 0)
  FUNC_5(VAR_4);

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6) {
  VAR_6 = FUNC_3(&VAR_4->hdq_mutex);
  if (VAR_6 < 0) {
   FUNC_0(VAR_4->dev, "Could not acquire mutex\n");
   return -VAR_0;
  }
  VAR_4->init_trans = 0;
  FUNC_4(&VAR_4->hdq_mutex);
  FUNC_6(VAR_4);
  return -1;
 }

 FUNC_1(VAR_4, VAR_1,
         ~VAR_2);


 if (VAR_4->init_trans) {
  VAR_6 = FUNC_3(&VAR_4->hdq_mutex);
  if (VAR_6 < 0) {
   FUNC_0(VAR_4->dev, "Could not acquire mutex\n");
   return -VAR_0;
  }
  VAR_4->init_trans = 0;
  FUNC_4(&VAR_4->hdq_mutex);
  FUNC_6(VAR_4);
 }

 return VAR_5;
}
