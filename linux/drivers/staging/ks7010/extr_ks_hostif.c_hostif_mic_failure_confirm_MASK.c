
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int failure; } ;
struct TYPE_4__ {TYPE_1__ mic_failure; } ;
struct ks_wlan_private {TYPE_2__ wpa; int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static
void FUNC_2(struct ks_wlan_private *VAR_1)
{
 FUNC_1(VAR_1->net_dev, "mic_failure=%u\n",
     VAR_1->wpa.mic_failure.failure);
 FUNC_0(VAR_1, VAR_0);
}
