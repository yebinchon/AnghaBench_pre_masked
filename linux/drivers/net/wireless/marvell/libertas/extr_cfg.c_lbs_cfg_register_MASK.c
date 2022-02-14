
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* wiphy; } ;
struct lbs_private {int wiphy_registered; int scan_work; int dev; struct wireless_dev* wdev; } ;
struct TYPE_2__ {int max_scan_ssids; int interface_modes; int reg_notifier; int n_cipher_suites; int cipher_suites; int ** bands; int signal_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct lbs_private*) ;
 scalar_t__ FUNC_4 (struct lbs_private*) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct lbs_private*) ;
 int VAR_9 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(struct lbs_private *VAR_10)
{
 struct wireless_dev *VAR_11 = VAR_10->wdev;
 int VAR_12;

 VAR_11->wiphy->max_scan_ssids = 1;
 VAR_11->wiphy->signal_type = VAR_0;

 VAR_11->wiphy->interface_modes =
   FUNC_1(VAR_5) |
   FUNC_1(VAR_2);
 if (FUNC_5(VAR_10))
  VAR_11->wiphy->interface_modes |= FUNC_1(VAR_4);
 if (FUNC_4(VAR_10))
  VAR_11->wiphy->interface_modes |= FUNC_1(VAR_3);

 VAR_11->wiphy->bands[VAR_1] = &VAR_7;





 VAR_11->wiphy->cipher_suites = VAR_6;
 VAR_11->wiphy->n_cipher_suites = FUNC_0(VAR_6);
 VAR_11->wiphy->reg_notifier = VAR_8;

 VAR_12 = FUNC_8(VAR_11->wiphy);
 if (VAR_12 < 0)
  FUNC_6("cannot register wiphy device\n");

 VAR_10->wiphy_registered = 1;

 VAR_12 = FUNC_7(VAR_10->dev);
 if (VAR_12)
  FUNC_6("cannot register network device\n");

 FUNC_2(&VAR_10->scan_work, VAR_9);

 FUNC_3(VAR_10);

 return VAR_12;
}
