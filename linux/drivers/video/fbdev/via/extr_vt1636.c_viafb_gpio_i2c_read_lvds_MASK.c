
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int lvds_chip_slave_addr; int i2c_port; } ;


 int FUNC_0 (int ,int ,int ,int *) ;

u8 FUNC_1(struct lvds_setting_information
 *VAR_0, struct lvds_chip_information *VAR_1,
 u8 VAR_2)
{
 u8 VAR_3;

 FUNC_0(VAR_1->i2c_port,
      VAR_1->lvds_chip_slave_addr, VAR_2, &VAR_3);
 return VAR_3;
}
