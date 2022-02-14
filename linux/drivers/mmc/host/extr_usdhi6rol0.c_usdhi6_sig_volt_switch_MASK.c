
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_4(FUNC_2(VAR_0), VAR_1->signal_voltage);
 if (VAR_2)
  FUNC_0(FUNC_1(VAR_0),
         "Failed to set pinstate err=%d\n", VAR_2);
 return VAR_2;
}
