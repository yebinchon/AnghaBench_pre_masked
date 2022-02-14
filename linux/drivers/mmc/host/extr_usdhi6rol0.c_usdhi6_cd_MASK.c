
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usdhi6_host {int status_mask; struct mmc_host* mmc; } ;
struct TYPE_2__ {int work; } ;
struct mmc_host {scalar_t__ card; TYPE_1__ detect; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_host*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usdhi6_host*,int ) ;
 int FUNC_3 (struct usdhi6_host*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct usdhi6_host *VAR_8 = VAR_7;
 struct mmc_host *VAR_9 = VAR_8->mmc;
 u16 VAR_10;


 VAR_10 = FUNC_2(VAR_8, VAR_2) & ~VAR_8->status_mask &
  VAR_3;

 if (!VAR_10)
  return VAR_1;


 FUNC_3(VAR_8, VAR_2, ~VAR_10);

 if (!FUNC_4(&VAR_9->detect.work) &&
     (((VAR_10 & VAR_5) &&
       !VAR_9->card) ||
      ((VAR_10 & VAR_4) &&
       VAR_9->card)))
  FUNC_0(VAR_9, FUNC_1(100));

 return VAR_0;
}
