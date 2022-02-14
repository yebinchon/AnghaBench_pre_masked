
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {scalar_t__ init_trans; int hdq_mutex; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hdq_data*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hdq_data*) ;
 int FUNC_5 (struct hdq_data*) ;
 int FUNC_6 (struct hdq_data*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, u8 VAR_2)
{
 struct hdq_data *VAR_3 = VAR_1;
 int VAR_4;
 u8 VAR_5;


 if (VAR_3->init_trans == 0)
  FUNC_5(VAR_3);






 if (VAR_2 == VAR_0)
  FUNC_4(VAR_3);

 VAR_4 = FUNC_2(&VAR_3->hdq_mutex);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "Could not acquire mutex\n");
  return;
 }
 VAR_3->init_trans++;
 FUNC_3(&VAR_3->hdq_mutex);

 VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "TX failure:Ctrl status %x\n", VAR_5);
  return;
 }


 if (VAR_3->init_trans > 1) {
  FUNC_6(VAR_3);
  VAR_4 = FUNC_2(&VAR_3->hdq_mutex);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev, "Could not acquire mutex\n");
   return;
  }
  VAR_3->init_trans = 0;
  FUNC_3(&VAR_3->hdq_mutex);
 }
}
