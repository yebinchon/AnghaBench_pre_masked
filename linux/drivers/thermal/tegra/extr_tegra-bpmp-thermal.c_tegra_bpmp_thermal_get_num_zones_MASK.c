
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num; } ;
union mrq_thermal_bpmp_to_host_response {TYPE_3__ get_num_zones; } ;
struct TYPE_5__ {int size; union mrq_thermal_bpmp_to_host_response* data; } ;
struct TYPE_4__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {TYPE_2__ rx; TYPE_1__ tx; int mrq; int type; } ;
struct tegra_bpmp {int dummy; } ;
struct mrq_thermal_host_to_bpmp_request {TYPE_2__ rx; TYPE_1__ tx; int mrq; int type; } ;
typedef int req ;
typedef int reply ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp *VAR_2,
         int *VAR_3)
{
 struct mrq_thermal_host_to_bpmp_request VAR_4;
 union mrq_thermal_bpmp_to_host_response VAR_5;
 struct tegra_bpmp_message VAR_6;
 int VAR_7;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.mrq = VAR_1;
 VAR_6.tx.data = &VAR_4;
 VAR_6.tx.size = sizeof(VAR_4);
 VAR_6.rx.data = &VAR_5;
 VAR_6.rx.size = sizeof(VAR_5);

 VAR_7 = FUNC_1(VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_3 = VAR_5.get_num_zones.num;

 return 0;
}
