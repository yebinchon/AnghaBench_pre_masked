
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* coex_set_wl_rx_gain ) (struct rtw_dev*,int) ;} ;


 int FUNC_0 (struct rtw_dev*,int) ;

__attribute__((used)) static inline
void FUNC_1(struct rtw_dev *VAR_0, bool VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_0->chip;

 VAR_2->ops->coex_set_wl_rx_gain(VAR_0, VAR_1);
}
