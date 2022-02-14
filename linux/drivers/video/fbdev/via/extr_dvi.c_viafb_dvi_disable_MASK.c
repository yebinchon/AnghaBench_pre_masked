
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* chip_info; } ;
struct TYPE_4__ {scalar_t__ output_interface; } ;
struct TYPE_5__ {TYPE_1__ tmds_chip_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_3__* VAR_3 ;

void FUNC_2(void)
{
 if (VAR_3->chip_info->
  tmds_chip_info.output_interface == VAR_1)

  FUNC_1(VAR_0, VAR_2,
  FUNC_0(VAR_2, VAR_0) | 0x08);
}
