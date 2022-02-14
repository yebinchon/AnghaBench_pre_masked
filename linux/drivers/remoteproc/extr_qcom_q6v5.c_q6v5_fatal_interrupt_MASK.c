
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_q6v5 {int running; int rproc; int dev; int crash_reason; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ,int ,size_t*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct qcom_q6v5 *VAR_5 = VAR_4;
 size_t VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_5->crash_reason, &VAR_6);
 if (!FUNC_0(VAR_7) && VAR_6 > 0 && VAR_7[0])
  FUNC_1(VAR_5->dev, "fatal error received: %s\n", VAR_7);
 else
  FUNC_1(VAR_5->dev, "fatal error without message\n");

 VAR_5->running = 0;
 FUNC_3(VAR_5->rproc, VAR_2);

 return VAR_0;
}
