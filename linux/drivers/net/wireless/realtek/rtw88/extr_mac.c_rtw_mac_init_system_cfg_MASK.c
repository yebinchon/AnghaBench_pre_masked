
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_dev {TYPE_1__* chip; } ;
struct TYPE_2__ {int sys_func_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,scalar_t__) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_9)
{
 u8 VAR_10 = VAR_9->chip->sys_func_en;
 u8 VAR_11;
 u32 VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_9, VAR_4);
 VAR_12 |= VAR_3 | VAR_1;
 FUNC_2(VAR_9, VAR_4, VAR_12);

 FUNC_3(VAR_9, VAR_8 + 1, VAR_10);
 VAR_11 = (FUNC_1(VAR_9, VAR_5 + 3) & 0xF0) | 0x0C;
 FUNC_3(VAR_9, VAR_5 + 3, VAR_11);


 VAR_13 = FUNC_0(VAR_9, VAR_7);
 if (VAR_13 & VAR_0) {
  FUNC_2(VAR_9, VAR_7, VAR_13 & (~VAR_0));
  VAR_12 = FUNC_0(VAR_9, VAR_6) & (~VAR_2);
  FUNC_2(VAR_9, VAR_6, VAR_12);
 }

 return 0;
}
