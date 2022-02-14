
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int physical_size; } ;
struct rtw_dev {TYPE_1__ efuse; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* cfg_ldo25 ) (struct rtw_dev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ,int) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_7, u8 *VAR_8)
{
 struct rtw_chip_info *VAR_9 = VAR_7->chip;
 u32 VAR_10 = VAR_7->efuse.physical_size;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 FUNC_3(VAR_7);


 VAR_9->ops->cfg_ldo25(VAR_7, 0);

 VAR_11 = FUNC_0(VAR_7, VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_11 &= ~(VAR_3 | VAR_0);
  VAR_11 |= (VAR_12 & VAR_2) << VAR_4;
  FUNC_1(VAR_7, VAR_6, VAR_11 & (~VAR_1));

  VAR_13 = 1000000;
  do {
   FUNC_4(1);
   VAR_11 = FUNC_0(VAR_7, VAR_6);
   if (--VAR_13 == 0)
    return -VAR_5;
  } while (!(VAR_11 & VAR_1));

  *(VAR_8 + VAR_12) = (u8)(VAR_11 & VAR_3);
 }

 return 0;
}
