
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtw_pwr_seq_cmd {int dummy; } ;
struct TYPE_2__ {scalar_t__ rpwm_addr; } ;
struct rtw_dev {TYPE_1__ hci; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {struct rtw_pwr_seq_cmd** pwr_off_seq; struct rtw_pwr_seq_cmd** pwr_on_seq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct rtw_dev*) ;
 scalar_t__ FUNC_2 (struct rtw_dev*,struct rtw_pwr_seq_cmd**) ;
 int FUNC_3 (struct rtw_dev*,int ) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__) ;
 int FUNC_5 (struct rtw_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct rtw_dev *VAR_7, bool VAR_8)
{
 struct rtw_chip_info *VAR_9 = VAR_7->chip;
 struct rtw_pwr_seq_cmd **VAR_10;
 u8 VAR_11;
 bool VAR_12;

 VAR_11 = FUNC_4(VAR_7, VAR_7->hci.rpwm_addr);


 if (FUNC_3(VAR_7, VAR_4) == 0xC078) {
  VAR_11 = (VAR_11 ^ VAR_0) & VAR_0;
  FUNC_5(VAR_7, VAR_7->hci.rpwm_addr, VAR_11);
 }

 if (FUNC_4(VAR_7, VAR_3) == 0xea)
  VAR_12 = 0;
 else if (FUNC_1(VAR_7) == VAR_6 &&
   (FUNC_4(VAR_7, VAR_5 + 1) & FUNC_0(0)))
  VAR_12 = 0;
 else
  VAR_12 = 1;

 if (VAR_8 && VAR_12)
  return -VAR_1;

 VAR_10 = VAR_8 ? VAR_9->pwr_on_seq : VAR_9->pwr_off_seq;
 if (FUNC_2(VAR_7, VAR_10))
  return -VAR_2;

 return 0;
}
