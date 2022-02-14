
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int successful_suspends; } ;
struct TYPE_4__ {int successful_suspends; } ;
struct TYPE_6__ {TYPE_2__ r_on; TYPE_1__ r_off; } ;
struct wil6210_priv {TYPE_3__ suspend_stats; scalar_t__ keep_radio_on_during_sleep; int vif_mutex; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 struct wil6210_priv* FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (struct wil6210_priv*,int) ;
 int FUNC_6 (struct wil6210_priv*,char*,char*) ;
 int FUNC_7 (struct wil6210_priv*,int,int) ;
 int FUNC_8 (struct wil6210_priv*,int,int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 struct pci_dev *VAR_3 = FUNC_4(VAR_0);
 struct wil6210_priv *VAR_4 = FUNC_3(VAR_3);
 bool VAR_5, VAR_6;

 FUNC_6(VAR_4, "suspend: %s\n", VAR_1 ? "runtime" : "system");

 FUNC_0(&VAR_4->vif_mutex);
 VAR_6 = FUNC_7(VAR_4, 1, 0);
 FUNC_1(&VAR_4->vif_mutex);
 VAR_5 = VAR_6 && VAR_4->keep_radio_on_during_sleep;

 VAR_2 = FUNC_5(VAR_4, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_8(VAR_4, VAR_1, VAR_5);
 if (!VAR_2) {



  if (!VAR_5) {

   FUNC_2(VAR_3);
   VAR_4->suspend_stats.r_off.successful_suspends++;
  } else {
   VAR_4->suspend_stats.r_on.successful_suspends++;
  }
 }
out:
 return VAR_2;
}
