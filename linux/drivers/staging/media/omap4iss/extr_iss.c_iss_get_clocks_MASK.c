
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {void* iss_ctrlclk; int dev; void* iss_fck; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct iss_device *VAR_0)
{
 VAR_0->iss_fck = FUNC_3(VAR_0->dev, "iss_fck");
 if (FUNC_0(VAR_0->iss_fck)) {
  FUNC_2(VAR_0->dev, "Unable to get iss_fck clock info\n");
  return FUNC_1(VAR_0->iss_fck);
 }

 VAR_0->iss_ctrlclk = FUNC_3(VAR_0->dev, "iss_ctrlclk");
 if (FUNC_0(VAR_0->iss_ctrlclk)) {
  FUNC_2(VAR_0->dev, "Unable to get iss_ctrlclk clock info\n");
  return FUNC_1(VAR_0->iss_ctrlclk);
 }

 return 0;
}
