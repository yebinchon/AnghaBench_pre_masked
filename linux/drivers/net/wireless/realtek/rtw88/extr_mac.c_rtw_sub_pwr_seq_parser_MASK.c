
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_pwr_seq_cmd {int cmd; int intf_mask; int cut_mask; int mask; int value; int offset; int base; } ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_pwr_seq_cmd*) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_6, u8 VAR_7,
      u8 VAR_8, struct rtw_pwr_seq_cmd *VAR_9)
{
 struct rtw_pwr_seq_cmd *VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 for (VAR_10 = VAR_9; VAR_10->cmd != VAR_3; VAR_10++) {
  if (!(VAR_10->intf_mask & VAR_7) ||
      !(VAR_10->cut_mask & VAR_8))
   continue;

  switch (VAR_10->cmd) {
  case 128:
   VAR_11 = VAR_10->offset;

   if (VAR_10->base == VAR_2)
    VAR_11 |= VAR_5;

   VAR_12 = FUNC_2(VAR_6, VAR_11);
   VAR_12 &= ~VAR_10->mask;
   VAR_12 |= (VAR_10->value & VAR_10->mask);
   FUNC_3(VAR_6, VAR_11, VAR_12);
   break;
  case 130:
   if (FUNC_1(VAR_6, VAR_10))
    return -VAR_0;
   break;
  case 131:
   if (VAR_10->value == VAR_4)
    FUNC_4(VAR_10->offset);
   else
    FUNC_0(VAR_10->offset);
   break;
  case 129:
   break;
  default:
   return -VAR_1;
  }
 }

 return 0;
}
