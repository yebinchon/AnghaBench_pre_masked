
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int DriverLock; scalar_t__ ResetRequested; } ;
struct TYPE_3__ {int is_imask; } ;
struct s_smc {TYPE_2__ os; TYPE_1__ hw; } ;
struct net_device {int dummy; } ;
typedef TYPE_2__ skfddi_priv ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct s_smc*) ;
 int FUNC_5 (int ) ;
 struct s_smc* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct s_smc *VAR_8;
 skfddi_priv *VAR_9;

 VAR_8 = FUNC_6(VAR_7);
 VAR_9 = &VAR_8->os;


 if (FUNC_5(FUNC_0(VAR_0)) == 0) {

  return VAR_3;
 }

 if ((FUNC_5(VAR_4) & VAR_8->hw.is_imask) == 0) {

  return VAR_3;
 }
 FUNC_1();
 FUNC_7(&VAR_9->DriverLock);


 FUNC_4(VAR_8);

 if (VAR_8->os.ResetRequested) {
  FUNC_2(VAR_8);
  VAR_8->os.ResetRequested = VAR_1;
 }
 FUNC_8(&VAR_9->DriverLock);
 FUNC_3();

 return VAR_2;
}
