
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct swStat {int mem_freed; } ;
struct TYPE_6__ {scalar_t__ intr_type; } ;
struct TYPE_5__ {TYPE_1__* stats_info; } ;
struct s2io_nic {int num_entries; scalar_t__ s2io_entries; scalar_t__ entries; TYPE_3__ config; scalar_t__ last_link_state; TYPE_2__ mac_control; } ;
struct s2io_msix_entry {int dummy; } ;
struct net_device {int dev_addr; int name; } ;
struct msix_entry {int dummy; } ;
struct TYPE_4__ {struct swStat sw_stat; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct s2io_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct s2io_nic*) ;
 int FUNC_6 (struct s2io_nic*) ;
 int FUNC_7 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4)
{
 struct s2io_nic *VAR_5 = FUNC_3(VAR_4);
 struct swStat *VAR_6 = &VAR_5->mac_control.stats_info->sw_stat;
 int VAR_7 = 0;





 FUNC_4(VAR_4);
 VAR_5->last_link_state = 0;


 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_1, "%s: H/W initialization failed\n",
     VAR_4->name);
  goto hw_init_failed;
 }

 if (FUNC_1(VAR_4, VAR_4->dev_addr) == VAR_2) {
  FUNC_0(VAR_1, "Set Mac Address Failed\n");
  FUNC_5(VAR_5);
  VAR_7 = -VAR_0;
  goto hw_init_failed;
 }
 FUNC_7(VAR_5);
 return 0;

hw_init_failed:
 if (VAR_5->config.intr_type == VAR_3) {
  if (VAR_5->entries) {
   FUNC_2(VAR_5->entries);
   VAR_6->mem_freed += VAR_5->num_entries *
    sizeof(struct msix_entry);
  }
  if (VAR_5->s2io_entries) {
   FUNC_2(VAR_5->s2io_entries);
   VAR_6->mem_freed += VAR_5->num_entries *
    sizeof(struct s2io_msix_entry);
  }
 }
 return VAR_7;
}
