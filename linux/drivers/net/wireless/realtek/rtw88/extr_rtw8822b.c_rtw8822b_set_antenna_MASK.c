
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtw_hal {void* antenna_rx; void* antenna_tx; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct rtw_dev*,void*,void*,int) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,void*,void*) ;
 int FUNC_3 (struct rtw_dev*,char*) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_2, u8 VAR_3,
     u8 VAR_4)
{
 struct rtw_hal *VAR_5 = &VAR_2->hal;

 FUNC_2(VAR_2, VAR_1, "config RF path, tx=0x%x rx=0x%x\n",
  VAR_3, VAR_4);

 if (!FUNC_0(VAR_3)) {
  FUNC_3(VAR_2, "unsupport tx path, set to default path ab\n");
  VAR_3 = VAR_0;
 }
 if (!FUNC_0(VAR_4)) {
  FUNC_3(VAR_2, "unsupport rx path, set to default path ab\n");
  VAR_4 = VAR_0;
 }
 VAR_5->antenna_tx = VAR_3;
 VAR_5->antenna_rx = VAR_4;
 FUNC_1(VAR_2, VAR_3, VAR_4, 0);
}
