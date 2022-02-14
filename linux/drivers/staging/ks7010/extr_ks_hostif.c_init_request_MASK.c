
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int * body; } ;
struct TYPE_6__ {TYPE_2__ rate_set; int scan_type; int cts_mode; int phy_type; } ;
struct ks_wlan_private {TYPE_3__ reg; } ;
struct TYPE_4__ {int * body; int size; } ;
struct hostif_request {TYPE_1__ rate_set; int capability; void* scan_type; void* cts_mode; void* phy_type; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ks_wlan_private*) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct ks_wlan_private *VAR_0,
    struct hostif_request *VAR_1)
{
 VAR_1->phy_type = FUNC_0(VAR_0->reg.phy_type);
 VAR_1->cts_mode = FUNC_0(VAR_0->reg.cts_mode);
 VAR_1->scan_type = FUNC_0(VAR_0->reg.scan_type);
 VAR_1->rate_set.size = VAR_0->reg.rate_set.size;
 VAR_1->capability = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->rate_set.body[0], &VAR_0->reg.rate_set.body[0],
        VAR_0->reg.rate_set.size);
}
