
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_bpmp_thermal_zone {TYPE_3__* tegra; int idx; } ;
struct TYPE_5__ {int size; struct tegra_bpmp_message* data; } ;
struct TYPE_4__ {int enabled; int low; int high; int zone; } ;
struct tegra_bpmp_message {TYPE_2__ tx; int mrq; TYPE_1__ set_trip; int type; } ;
struct mrq_thermal_host_to_bpmp_request {TYPE_2__ tx; int mrq; TYPE_1__ set_trip; int type; } ;
typedef int req ;
typedef int msg ;
struct TYPE_6__ {int bpmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int VAR_3, int VAR_4)
{
 struct tegra_bpmp_thermal_zone *VAR_5 = VAR_2;
 struct mrq_thermal_host_to_bpmp_request VAR_6;
 struct tegra_bpmp_message VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_0;
 VAR_6.set_trip.zone = VAR_5->idx;
 VAR_6.set_trip.enabled = 1;
 VAR_6.set_trip.low = VAR_3;
 VAR_6.set_trip.high = VAR_4;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.mrq = VAR_1;
 VAR_7.tx.data = &VAR_6;
 VAR_7.tx.size = sizeof(VAR_6);

 return FUNC_1(VAR_5->tegra->bpmp, &VAR_7);
}
