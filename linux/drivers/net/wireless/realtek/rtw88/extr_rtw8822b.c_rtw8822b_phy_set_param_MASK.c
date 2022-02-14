
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtw_hal {int antenna_rx; int antenna_tx; } ;
struct TYPE_2__ {int crystal_cap; } ;
struct rtw_dev {TYPE_1__ efuse; struct rtw_hal hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;
 int FUNC_5 (struct rtw_dev*,int,int,int) ;
 int FUNC_6 (struct rtw_dev*,int ,int ) ;
 int FUNC_7 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rtw_dev *VAR_11)
{
 struct rtw_hal *VAR_12 = &VAR_11->hal;
 u8 VAR_13;
 bool VAR_14;


 FUNC_7(VAR_11, VAR_9,
         VAR_1 | VAR_0);
 FUNC_7(VAR_11, VAR_7,
         VAR_2 | VAR_3 | VAR_4);
 FUNC_6(VAR_11, VAR_10, VAR_6);


 FUNC_4(VAR_11, VAR_8, VAR_5);

 FUNC_3(VAR_11);

 VAR_13 = VAR_11->efuse.crystal_cap & 0x3F;
 FUNC_5(VAR_11, 0x24, 0x7e000000, VAR_13);
 FUNC_5(VAR_11, 0x28, 0x7e, VAR_13);


 FUNC_6(VAR_11, VAR_8, VAR_5);

 VAR_14 = 0;
 FUNC_0(VAR_11, VAR_12->antenna_tx, VAR_12->antenna_rx,
     VAR_14);
 FUNC_2(VAR_11);

 FUNC_1(VAR_11);
}
