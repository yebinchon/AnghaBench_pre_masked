
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {scalar_t__ gfx_chip_name; scalar_t__ gfx_chip_revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,scalar_t__) ;
 TYPE_2__* VAR_16 ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_1();


 FUNC_2(VAR_7, VAR_14, 0x80, VAR_5);

 FUNC_2(VAR_9, VAR_14, 0x10, VAR_4);

 FUNC_2(VAR_8, VAR_14, 0x06, VAR_0 + VAR_1 + VAR_2);


 FUNC_0();


 if ((VAR_16->chip_info->gfx_chip_name == VAR_12)
  || (VAR_16->chip_info->gfx_chip_name == VAR_13))
  FUNC_2(VAR_8, VAR_14, 0x08, VAR_3);
 if ((VAR_16->chip_info->gfx_chip_name == VAR_11)
     && (VAR_16->chip_info->gfx_chip_revision == VAR_6))
  FUNC_2(VAR_10, VAR_15, 0x02, VAR_1);

}
