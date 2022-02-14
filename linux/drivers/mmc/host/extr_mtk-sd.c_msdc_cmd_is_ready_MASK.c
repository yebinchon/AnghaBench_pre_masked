
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int error; int dev; scalar_t__ base; } ;
struct mmc_request {int dummy; } ;
struct mmc_command {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_2 (struct mmc_command*) ;
 int FUNC_3 (struct msdc_host*,int ,struct mmc_request*,struct mmc_command*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static inline bool FUNC_7(struct msdc_host *VAR_7,
  struct mmc_request *VAR_8, struct mmc_command *VAR_9)
{

 unsigned long VAR_10 = VAR_6 + FUNC_4(20);

 while ((FUNC_5(VAR_7->base + VAR_3) & VAR_4) &&
   FUNC_6(VAR_6, VAR_10))
  FUNC_0();
 if (FUNC_5(VAR_7->base + VAR_3) & VAR_4) {
  FUNC_1(VAR_7->dev, "CMD bus busy detected\n");
  VAR_7->error |= VAR_2;
  FUNC_3(VAR_7, VAR_1, VAR_8, VAR_9);
  return 0;
 }

 if (FUNC_2(VAR_9) == VAR_0 || VAR_9->data) {
  VAR_10 = VAR_6 + FUNC_4(20);

  while ((FUNC_5(VAR_7->base + VAR_3) & VAR_5) &&
    FUNC_6(VAR_6, VAR_10))
   FUNC_0();
  if (FUNC_5(VAR_7->base + VAR_3) & VAR_5) {
   FUNC_1(VAR_7->dev, "Controller busy detected\n");
   VAR_7->error |= VAR_2;
   FUNC_3(VAR_7, VAR_1, VAR_8, VAR_9);
   return 0;
  }
 }
 return 1;
}
