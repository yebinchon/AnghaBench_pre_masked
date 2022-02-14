
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int radio_monitor; int radio_timer; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_c_info *VAR_2)
{

 if (VAR_2->radio_monitor)
  return;

 VAR_2->radio_monitor = 1;
 FUNC_1(VAR_2->hw, 1, VAR_0);
 FUNC_0(VAR_2->radio_timer, VAR_1, 1);
}
