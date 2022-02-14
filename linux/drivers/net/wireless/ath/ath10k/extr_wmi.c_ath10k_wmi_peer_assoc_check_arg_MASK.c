
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_rates; } ;
struct TYPE_3__ {scalar_t__ num_rates; } ;
struct wmi_peer_assoc_complete_arg {int peer_mpdu_density; TYPE_2__ peer_ht_rates; TYPE_1__ peer_legacy_rates; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct wmi_peer_assoc_complete_arg *VAR_2)
{
 if (VAR_2->peer_mpdu_density > 16)
  return -VAR_0;
 if (VAR_2->peer_legacy_rates.num_rates > VAR_1)
  return -VAR_0;
 if (VAR_2->peer_ht_rates.num_rates > VAR_1)
  return -VAR_0;

 return 0;
}
