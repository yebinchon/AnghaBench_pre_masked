
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int radio_monitor; int radio_timer; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct brcms_c_info *VAR_1)
{
 if (!VAR_1->radio_monitor)
  return 1;

 VAR_1->radio_monitor = 0;
 FUNC_0(VAR_1->hw, 0, VAR_0);
 return FUNC_1(VAR_1->radio_timer);
}
