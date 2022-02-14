
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {int rec_count; int event_count; scalar_t__ dev_count; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ks_wlan_private *VAR_0)
{
 VAR_0->dev_count = 0;
 FUNC_0(&VAR_0->event_count, 0);
 FUNC_0(&VAR_0->rec_count, 0);
}
