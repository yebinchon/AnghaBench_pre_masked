
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct xpakStat {int warn_laser_output_power_low; int warn_laser_output_power_high; int warn_laser_bias_current_low; int warn_laser_bias_current_high; int warn_transceiver_temp_low; int warn_transceiver_temp_high; int alarm_laser_output_power_low; int xpak_regs_stat; int alarm_laser_output_power_high; int alarm_laser_bias_current_low; int alarm_laser_bias_current_high; int alarm_transceiver_temp_low; int alarm_transceiver_temp_high; } ;
struct stat_block {struct xpakStat xpak_stat; } ;
struct TYPE_2__ {struct stat_block* stats_info; } ;
struct s2io_nic {TYPE_1__ mac_control; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,unsigned long long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s2io_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int *,int,int,int) ;
 int FUNC_4 (int ,int,struct net_device*) ;
 int FUNC_5 (int ,int,int,struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 u16 VAR_5 = 0x0;
 u16 VAR_6 = 0x0;
 u16 VAR_7 = 0x0;
 u64 VAR_8 = 0x0;
 u64 VAR_9 = 0x0;

 struct s2io_nic *VAR_10 = FUNC_2(VAR_4);
 struct stat_block *VAR_11 = VAR_10->mac_control.stats_info;
 struct xpakStat *VAR_12 = &VAR_11->xpak_stat;


 VAR_9 = VAR_1;
 VAR_8 = 0x0;
 VAR_8 = FUNC_4(VAR_3, VAR_9, VAR_4);
 if ((VAR_8 == 0xFFFF) || (VAR_8 == 0x0000)) {
  FUNC_1(VAR_0,
     "ERR: MDIO slave access failed - Returned %llx\n",
     (unsigned long long)VAR_8);
  return;
 }


 if (VAR_8 != VAR_2) {
  FUNC_1(VAR_0, "Incorrect value at PMA address 0x0000 - "
     "Returned: %llx- Expected: 0x%x\n",
     (unsigned long long)VAR_8, VAR_2);
  return;
 }


 VAR_9 = 0xA100;
 FUNC_5(VAR_3, VAR_9, VAR_7, VAR_4);
 VAR_8 = FUNC_4(VAR_3, VAR_9, VAR_4);


 VAR_9 = 0xA070;
 VAR_8 = 0x0;
 VAR_8 = FUNC_4(VAR_3, VAR_9, VAR_4);

 VAR_5 = FUNC_0(VAR_8, 0x7);
 VAR_6 = 1;
 FUNC_3(&VAR_12->alarm_transceiver_temp_high,
         &VAR_12->xpak_regs_stat,
         0x0, VAR_5, VAR_6);

 if (FUNC_0(VAR_8, 0x6))
  VAR_12->alarm_transceiver_temp_low++;

 VAR_5 = FUNC_0(VAR_8, 0x3);
 VAR_6 = 2;
 FUNC_3(&VAR_12->alarm_laser_bias_current_high,
         &VAR_12->xpak_regs_stat,
         0x2, VAR_5, VAR_6);

 if (FUNC_0(VAR_8, 0x2))
  VAR_12->alarm_laser_bias_current_low++;

 VAR_5 = FUNC_0(VAR_8, 0x1);
 VAR_6 = 3;
 FUNC_3(&VAR_12->alarm_laser_output_power_high,
         &VAR_12->xpak_regs_stat,
         0x4, VAR_5, VAR_6);

 if (FUNC_0(VAR_8, 0x0))
  VAR_12->alarm_laser_output_power_low++;


 VAR_9 = 0xA074;
 VAR_8 = 0x0;
 VAR_8 = FUNC_4(VAR_3, VAR_9, VAR_4);

 if (FUNC_0(VAR_8, 0x7))
  VAR_12->warn_transceiver_temp_high++;

 if (FUNC_0(VAR_8, 0x6))
  VAR_12->warn_transceiver_temp_low++;

 if (FUNC_0(VAR_8, 0x3))
  VAR_12->warn_laser_bias_current_high++;

 if (FUNC_0(VAR_8, 0x2))
  VAR_12->warn_laser_bias_current_low++;

 if (FUNC_0(VAR_8, 0x1))
  VAR_12->warn_laser_output_power_high++;

 if (FUNC_0(VAR_8, 0x0))
  VAR_12->warn_laser_output_power_low++;
}
