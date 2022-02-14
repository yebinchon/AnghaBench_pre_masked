
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int state; int on_channel; int roc_freq; int is_roc; } ;
struct ath10k {TYPE_2__ scan; TYPE_1__* hw; int scan_channel; int data_lock; } ;
struct TYPE_3__ {int wiphy; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_0, u32 VAR_1)
{
 FUNC_4(&VAR_0->data_lock);

 switch (VAR_0->scan.state) {
 case 130:
 case 128:
  FUNC_1(VAR_0, "received scan foreign chan event in an invalid scan state: %s (%d)\n",
       FUNC_0(VAR_0->scan.state),
       VAR_0->scan.state);
  break;
 case 129:
 case 131:
  VAR_0->scan_channel = FUNC_3(VAR_0->hw->wiphy, VAR_1);

  if (VAR_0->scan.is_roc && VAR_0->scan.roc_freq == VAR_1)
   FUNC_2(&VAR_0->scan.on_channel);
  break;
 }
}
