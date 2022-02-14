
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_3__* chip_info; } ;
struct TYPE_6__ {scalar_t__ lvds_chip_name; } ;
struct TYPE_5__ {scalar_t__ tmds_chip_name; } ;
struct TYPE_7__ {TYPE_2__ lvds_chip_info; TYPE_1__ tmds_chip_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;

void FUNC_0(u32 *VAR_6)
{
 *VAR_6 = VAR_0;

 if (VAR_5->chip_info->tmds_chip_info.tmds_chip_name == VAR_4)
  *VAR_6 |= VAR_1;

 if (VAR_5->chip_info->lvds_chip_info.lvds_chip_name == VAR_3)
  *VAR_6 |= VAR_2;
}
