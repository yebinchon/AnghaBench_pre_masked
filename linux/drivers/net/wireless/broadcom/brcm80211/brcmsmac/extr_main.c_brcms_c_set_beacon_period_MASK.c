
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {TYPE_2__* hw; TYPE_1__* default_bss; } ;
struct TYPE_4__ {int d11core; } ;
struct TYPE_3__ {int beacon_period; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_info*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct brcms_c_info *VAR_4, u16 VAR_5)
{
 u32 VAR_6;

 if (VAR_5 == 0)
  return -VAR_1;

 VAR_4->default_bss->beacon_period = VAR_5;

 VAR_6 = VAR_5 << 10;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4->hw->d11core, FUNC_0(VAR_2),
       (VAR_6 << VAR_0));
 FUNC_1(VAR_4->hw->d11core, FUNC_0(VAR_3), VAR_6);
 FUNC_3(VAR_4);

 return 0;
}
