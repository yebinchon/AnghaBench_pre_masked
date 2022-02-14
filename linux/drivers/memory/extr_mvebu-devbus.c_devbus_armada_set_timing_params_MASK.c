
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct devbus_write_params {int sync_enable; int wr_low; int wr_high; int ale_wr; } ;
struct devbus_read_params {int bus_width; int badr_skew; int rd_hold; int acc_next; int rd_setup; int acc_first; int turn_off; } ;
struct devbus {scalar_t__ base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct devbus *VAR_11,
        struct device_node *VAR_12,
        struct devbus_read_params *VAR_13,
        struct devbus_write_params *VAR_14)
{
 u32 VAR_15;


 VAR_15 = VAR_13->bus_width << VAR_3 |
  VAR_13->badr_skew << VAR_2 |
  VAR_13->rd_hold << VAR_4 |
  VAR_13->acc_next << VAR_1 |
  VAR_13->rd_setup << VAR_5 |
  VAR_13->acc_first << VAR_0 |
  VAR_13->turn_off;

 FUNC_0(VAR_11->dev, "read parameters register 0x%p = 0x%x\n",
  VAR_11->base + VAR_6,
  VAR_15);

 FUNC_1(VAR_15, VAR_11->base + VAR_6);


 VAR_15 = VAR_14->sync_enable << VAR_7 |
  VAR_14->wr_low << VAR_10 |
  VAR_14->wr_high << VAR_9 |
  VAR_14->ale_wr;

 FUNC_0(VAR_11->dev, "write parameters register: 0x%p = 0x%x\n",
  VAR_11->base + VAR_8,
  VAR_15);

 FUNC_1(VAR_15, VAR_11->base + VAR_8);
}
