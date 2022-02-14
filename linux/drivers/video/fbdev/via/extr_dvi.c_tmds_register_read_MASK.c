
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_2__* chip_info; } ;
struct TYPE_4__ {scalar_t__ tmds_chip_slave_addr; int i2c_port; } ;
struct TYPE_5__ {TYPE_1__ tmds_chip_info; } ;


 int FUNC_0 (int ,int,int,int*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 u8 VAR_2;

 FUNC_0(VAR_0->chip_info->tmds_chip_info.i2c_port,
      (u8) VAR_0->chip_info->tmds_chip_info.tmds_chip_slave_addr,
      (u8) VAR_1, &VAR_2);
 return VAR_2;
}
