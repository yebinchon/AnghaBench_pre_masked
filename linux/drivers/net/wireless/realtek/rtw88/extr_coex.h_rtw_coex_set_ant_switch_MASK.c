
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* coex_set_ant_switch ) (struct rtw_dev*,int ,int ) ;} ;


 int FUNC_0 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static inline
void FUNC_1(struct rtw_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct rtw_chip_info *VAR_3 = VAR_0->chip;

 if (!VAR_3->ops->coex_set_ant_switch)
  return;

 VAR_3->ops->coex_set_ant_switch(VAR_0, VAR_1, VAR_2);
}
