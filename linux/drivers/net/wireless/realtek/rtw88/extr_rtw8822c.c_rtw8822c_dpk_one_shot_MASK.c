
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct rtw_dev*,int,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct rtw_dev*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,int) ;
 int FUNC_5 (struct rtw_dev*,int ,char*) ;
 int FUNC_6 (struct rtw_dev*,int ,scalar_t__) ;
 int FUNC_7 (struct rtw_dev*,int ,int,int) ;
 int FUNC_8 (struct rtw_dev*,int,int) ;

__attribute__((used)) static u8 FUNC_9(struct rtw_dev *VAR_10, u8 VAR_11, u8 VAR_12)
{
 u16 VAR_13;
 u8 VAR_14 = 0;

 FUNC_4(VAR_10, 1);

 if (VAR_12 == VAR_9) {
  FUNC_7(VAR_10, VAR_3, FUNC_0(12), 0x1);
  FUNC_7(VAR_10, VAR_3, FUNC_0(12), 0x0);
  FUNC_7(VAR_10, VAR_5, VAR_1, 0x0);
  FUNC_2(10);
  if (!FUNC_1(VAR_10, VAR_7, FUNC_0(31), 0x1)) {
   VAR_14 = 1;
   FUNC_5(VAR_10, VAR_8, "[DPK] one-shot over 20ms\n");
  }
 } else {
  FUNC_7(VAR_10, VAR_4, VAR_2,
     0x8 | (VAR_11 << 1));
  FUNC_7(VAR_10, VAR_6, VAR_0, 0x9);

  VAR_13 = FUNC_3(VAR_10, VAR_12, VAR_11);
  FUNC_6(VAR_10, VAR_4, VAR_13);
  FUNC_6(VAR_10, VAR_4, VAR_13 + 1);
  FUNC_2(10);
  if (!FUNC_1(VAR_10, 0x2d9c, 0xff, 0x55)) {
   VAR_14 = 1;
   FUNC_5(VAR_10, VAR_8, "[DPK] one-shot over 20ms\n");
  }
  FUNC_7(VAR_10, VAR_4, VAR_2,
     0x8 | (VAR_11 << 1));
  FUNC_7(VAR_10, VAR_6, VAR_0, 0x0);
 }

 FUNC_4(VAR_10, 0);

 FUNC_8(VAR_10, 0x1b10, 0x0);

 return VAR_14;
}
