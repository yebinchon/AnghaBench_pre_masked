
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ksz_port {int dummy; } ;
struct ksz_device {scalar_t__ chip_id; int port_cnt; int port_mask; int mib_cnt; int mib_port_cnt; TYPE_3__* ports; int dev; int reg_mib_cnt; int phy_errata_9477; int cpu_ports; int num_statics; int num_alus; int num_vlans; int name; TYPE_1__* ds; } ;
struct ksz_chip_data {scalar_t__ chip_id; int port_cnt; int phy_errata_9477; int cpu_ports; int num_statics; int num_alus; int num_vlans; int dev_name; } ;
struct TYPE_5__ {void* counters; int cnt_mutex; } ;
struct TYPE_6__ {TYPE_2__ mib; } ;
struct TYPE_4__ {int * ops; } ;


 int FUNC_0 (struct ksz_chip_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int,int ) ;
 struct ksz_chip_data* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ksz_device *VAR_7)
{
 int VAR_8;

 VAR_7->ds->ops = &VAR_6;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  const struct ksz_chip_data *VAR_9 = &VAR_5[VAR_8];

  if (VAR_7->chip_id == VAR_9->chip_id) {
   VAR_7->name = VAR_9->dev_name;
   VAR_7->num_vlans = VAR_9->num_vlans;
   VAR_7->num_alus = VAR_9->num_alus;
   VAR_7->num_statics = VAR_9->num_statics;
   VAR_7->port_cnt = VAR_9->port_cnt;
   VAR_7->cpu_ports = VAR_9->cpu_ports;
   VAR_7->phy_errata_9477 = VAR_9->phy_errata_9477;

   break;
  }
 }


 if (!VAR_7->port_cnt)
  return -VAR_0;

 VAR_7->port_mask = (1 << VAR_7->port_cnt) - 1;

 VAR_7->reg_mib_cnt = VAR_3;
 VAR_7->mib_cnt = VAR_4;

 VAR_8 = VAR_7->mib_port_cnt;
 VAR_7->ports = FUNC_1(VAR_7->dev, sizeof(struct ksz_port) * VAR_8,
      VAR_2);
 if (!VAR_7->ports)
  return -VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_7->mib_port_cnt; VAR_8++) {
  FUNC_2(&VAR_7->ports[VAR_8].mib.cnt_mutex);
  VAR_7->ports[VAR_8].mib.counters =
   FUNC_1(VAR_7->dev,
         sizeof(u64) *
         (VAR_4 + 1),
         VAR_2);
  if (!VAR_7->ports[VAR_8].mib.counters)
   return -VAR_1;
 }

 return 0;
}
