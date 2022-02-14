
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int temp; } ;
union mrq_thermal_bpmp_to_host_response {TYPE_5__ get_temp; } ;
struct tegra_bpmp_thermal_zone {TYPE_4__* tegra; int idx; } ;
struct TYPE_8__ {int size; union mrq_thermal_bpmp_to_host_response* data; } ;
struct TYPE_7__ {int size; struct tegra_bpmp_message* data; } ;
struct TYPE_6__ {int zone; } ;
struct tegra_bpmp_message {TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ get_temp; int type; } ;
struct mrq_thermal_host_to_bpmp_request {TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ get_temp; int type; } ;
typedef int req ;
typedef int reply ;
typedef int msg ;
struct TYPE_9__ {int bpmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int *VAR_3)
{
 struct tegra_bpmp_thermal_zone *VAR_4 = VAR_2;
 struct mrq_thermal_host_to_bpmp_request VAR_5;
 union mrq_thermal_bpmp_to_host_response VAR_6;
 struct tegra_bpmp_message VAR_7;
 int VAR_8;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.type = VAR_0;
 VAR_5.get_temp.zone = VAR_4->idx;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.mrq = VAR_1;
 VAR_7.tx.data = &VAR_5;
 VAR_7.tx.size = sizeof(VAR_5);
 VAR_7.rx.data = &VAR_6;
 VAR_7.rx.size = sizeof(VAR_6);

 VAR_8 = FUNC_1(VAR_4->tegra->bpmp, &VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_3 = VAR_6.get_temp.temp;

 return 0;
}
