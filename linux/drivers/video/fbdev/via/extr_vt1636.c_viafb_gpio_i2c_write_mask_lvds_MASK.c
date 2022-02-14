
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int lvds_chip_slave_addr; int i2c_port; } ;
struct IODATA {int Index; int Mask; int Data; } ;


 int FUNC_0 (struct lvds_setting_information*,struct lvds_chip_information*,int) ;
 int FUNC_1 (int ,int ,int,int) ;

void FUNC_2(struct lvds_setting_information
         *VAR_0, struct lvds_chip_information
         *VAR_1, struct IODATA VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_2.Index;
 VAR_4 = FUNC_0(VAR_0, VAR_1,
  VAR_3);
 VAR_4 = (VAR_4 & (~VAR_2.Mask)) | VAR_2.Data;

 FUNC_1(VAR_1->i2c_port,
       VAR_1->lvds_chip_slave_addr, VAR_3, VAR_4);
}
