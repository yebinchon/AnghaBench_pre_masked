
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int ucsi; struct device* dev; int ppm; int irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int *,int ,int,int ,struct ucsi_ccg*) ;
 int FUNC_5 (struct ucsi_ccg*) ;
 int FUNC_6 (struct device*,int *) ;

__attribute__((used)) static int FUNC_7(struct ucsi_ccg *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4, "ucsi_ccg_start fail, err=%d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_3->irq, ((void*)0), VAR_2,
          VAR_0 | VAR_1,
          FUNC_3(VAR_4), VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4, "request_threaded_irq failed - %d\n", VAR_5);
  return VAR_5;
 }

 VAR_3->ucsi = FUNC_6(VAR_4, &VAR_3->ppm);
 if (FUNC_0(VAR_3->ucsi)) {
  FUNC_2(VAR_3->dev, "ucsi_register_ppm failed\n");
  return FUNC_1(VAR_3->ucsi);
 }

 return 0;
}
