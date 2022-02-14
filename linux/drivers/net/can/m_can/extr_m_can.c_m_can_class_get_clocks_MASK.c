
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_can_classdev {int dev; void* cclk; void* hclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,char*) ;

int FUNC_3(struct m_can_classdev *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->hclk = FUNC_2(VAR_1->dev, "hclk");
 VAR_1->cclk = FUNC_2(VAR_1->dev, "cclk");

 if (FUNC_0(VAR_1->cclk)) {
  FUNC_1(VAR_1->dev, "no clock found\n");
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
