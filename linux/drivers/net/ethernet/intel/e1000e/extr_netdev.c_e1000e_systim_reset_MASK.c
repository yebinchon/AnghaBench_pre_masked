
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ptp_clock_info {scalar_t__ (* adjfreq ) (struct ptp_clock_info*,int ) ;} ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; int hwtstamp_config; int systim_lock; int cc; int tc; TYPE_1__* pdev; int ptp_delta; struct e1000_hw hw; struct ptp_clock_info ptp_clock_info; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_2 (struct e1000_adapter*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct ptp_clock_info*,int ) ;
 int FUNC_9 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_10(struct e1000_adapter *VAR_2)
{
 struct ptp_clock_info *VAR_3 = &VAR_2->ptp_clock_info;
 struct e1000_hw *VAR_4 = &VAR_2->hw;
 unsigned long VAR_5;
 u32 VAR_6;
 s32 VAR_7;

 if (!(VAR_2->flags & VAR_0))
  return;

 if (VAR_3->adjfreq) {

  VAR_7 = VAR_3->adjfreq(VAR_3, VAR_2->ptp_delta);
 } else {

  VAR_7 = FUNC_2(VAR_2, &VAR_6);
  if (!VAR_7)
   FUNC_3(VAR_1, VAR_6);
 }

 if (VAR_7) {
  FUNC_0(&VAR_2->pdev->dev,
    "Failed to restore TIMINCA clock rate delta: %d\n",
    VAR_7);
  return;
 }


 FUNC_6(&VAR_2->systim_lock, VAR_5);
 FUNC_9(&VAR_2->tc, &VAR_2->cc,
    FUNC_5(FUNC_4()));
 FUNC_7(&VAR_2->systim_lock, VAR_5);


 FUNC_1(VAR_2, &VAR_2->hwtstamp_config);
}
