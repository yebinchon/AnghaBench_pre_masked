
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_wcnss {int rproc; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (int ,int ,size_t*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct qcom_wcnss *VAR_6 = VAR_5;
 size_t VAR_7;
 char *VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_3, &VAR_7);
 if (!FUNC_0(VAR_8) && VAR_7 > 0 && VAR_8[0])
  FUNC_1(VAR_6->dev, "fatal error received: %s\n", VAR_8);

 FUNC_3(VAR_6->rproc, VAR_2);

 return VAR_0;
}
