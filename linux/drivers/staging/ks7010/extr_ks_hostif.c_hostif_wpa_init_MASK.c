
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stop; scalar_t__ last_failure_time; scalar_t__ failure; } ;
struct TYPE_4__ {int rsn_enabled; TYPE_1__ mic_failure; } ;
struct ks_wlan_private {TYPE_2__ wpa; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ks_wlan_private *VAR_0)
{
 FUNC_0(&VAR_0->wpa, 0, sizeof(VAR_0->wpa));
 VAR_0->wpa.rsn_enabled = 0;
 VAR_0->wpa.mic_failure.failure = 0;
 VAR_0->wpa.mic_failure.last_failure_time = 0;
 VAR_0->wpa.mic_failure.stop = 0;
}
