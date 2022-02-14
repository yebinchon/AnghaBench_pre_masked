
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct rtw_pwr_seq_cmd {int dummy; } ;
struct TYPE_2__ {int cut_version; } ;
struct rtw_dev {TYPE_1__ hal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,int ,int ,struct rtw_pwr_seq_cmd*) ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_2,
         struct rtw_pwr_seq_cmd **VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u32 VAR_7 = 0;
 struct rtw_pwr_seq_cmd *VAR_8;
 int VAR_9;

 VAR_6 = VAR_2->hal.cut_version;
 VAR_4 = FUNC_1(VAR_6);
 switch (FUNC_2(VAR_2)) {
 case 129:
  VAR_5 = FUNC_0(2);
  break;
 case 128:
  VAR_5 = FUNC_0(1);
  break;
 default:
  return -VAR_1;
 }

 do {
  VAR_8 = VAR_3[VAR_7];
  if (!VAR_8)
   break;

  VAR_9 = FUNC_3(VAR_2, VAR_5, VAR_4, VAR_8);
  if (VAR_9)
   return -VAR_0;

  VAR_7++;
 } while (1);

 return 0;
}
