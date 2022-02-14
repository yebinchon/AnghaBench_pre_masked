
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int wakeup_request; int doze_request; } ;
struct ks_wlan_private {char* firmware_version; TYPE_1__ sleepstatus; int wstats; int nstats; void* last_wakeup; void* last_doze; scalar_t__ version_size; struct net_device* net_dev; int dev_state; struct ks_sdio_card* if_hw; } ;
struct ks_sdio_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ks_wlan_private*) ;
 void* VAR_1 ;
 int FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct ks_wlan_private*) ;

__attribute__((used)) static void FUNC_6(struct ks_wlan_private *VAR_2,
    struct ks_sdio_card *VAR_3,
    struct net_device *VAR_4)
{

 VAR_2->if_hw = VAR_3;

 VAR_2->dev_state = VAR_0;
 VAR_2->net_dev = VAR_4;
 VAR_2->firmware_version[0] = '\0';
 VAR_2->version_size = 0;
 VAR_2->last_doze = VAR_1;
 VAR_2->last_wakeup = VAR_1;
 FUNC_4(&VAR_2->nstats, 0, sizeof(VAR_2->nstats));
 FUNC_4(&VAR_2->wstats, 0, sizeof(VAR_2->wstats));


 FUNC_0(&VAR_2->sleepstatus.doze_request, 0);
 FUNC_0(&VAR_2->sleepstatus.wakeup_request, 0);
 FUNC_0(&VAR_2->sleepstatus.wakeup_request, 0);

 FUNC_5(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(VAR_4);
 FUNC_2(VAR_2);
}
