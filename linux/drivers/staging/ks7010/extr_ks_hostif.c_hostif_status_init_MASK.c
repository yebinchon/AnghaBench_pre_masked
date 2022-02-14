
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {int current_rate; int connect_status; scalar_t__ infra_status; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ks_wlan_private *VAR_1)
{
 VAR_1->infra_status = 0;
 VAR_1->current_rate = 4;
 VAR_1->connect_status = VAR_0;
}
