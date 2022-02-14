
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int operation_mode; } ;
struct iw_statistics {int status; } ;
struct ks_wlan_private {scalar_t__ dev_state; int net_dev; int confirm_wait; TYPE_1__ reg; struct iw_statistics wstats; } ;
struct TYPE_5__ {scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ks_wlan_private*,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static
int FUNC_7(struct ks_wlan_private *VAR_8)
{
 struct iw_statistics *VAR_9 = &VAR_8->wstats;

 FUNC_5(VAR_8->net_dev, "in_interrupt = %ld\n", FUNC_4());

 if (VAR_8->dev_state < VAR_0)
  return -VAR_1;

 if (FUNC_2(&VAR_6))
  return -VAR_2;


 VAR_9->status = VAR_8->reg.operation_mode;


 FUNC_3(VAR_8, VAR_4);


 if (!FUNC_6
     (&VAR_8->confirm_wait, VAR_3 / 2)) {
  FUNC_5(VAR_8->net_dev, "wait time out!!\n");
 }

 FUNC_1(&VAR_6);
 VAR_7.expires = VAR_5 + VAR_3;
 FUNC_0(&VAR_7);

 return 0;
}
