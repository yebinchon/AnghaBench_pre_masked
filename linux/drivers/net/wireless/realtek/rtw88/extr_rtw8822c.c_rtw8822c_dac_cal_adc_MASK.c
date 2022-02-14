
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dm_info {int* dack_adck; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtw_dev*,int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rtw_dev*,int ,char*,int,...) ;
 int FUNC_5 (struct rtw_dev*,int,int) ;
 int FUNC_6 (struct rtw_dev*,int,int ,int) ;
 int FUNC_7 (struct rtw_dev*,int const,int,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rtw_dev *VAR_2,
     u8 VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct rtw_dm_info *VAR_6 = &VAR_2->dm_info;
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_4(VAR_2, VAR_1, "[DACK] ADCK path(%d)\n", VAR_3);

 VAR_10 = FUNC_3(VAR_3);
 switch (VAR_3) {
 case 129:
  VAR_11 = 0xa0000;
  break;
 case 128:
  VAR_11 = 0x80000;
  break;
 default:
  FUNC_1(1);
  return;
 }


 FUNC_6(VAR_2, VAR_10 + 0x30, FUNC_0(30), 0x0);
 if (VAR_3 == 128)
  FUNC_5(VAR_2, VAR_10 + 0x30, 0x30db8041);
 FUNC_5(VAR_2, VAR_10 + 0x60, 0xf0040ff0);
 FUNC_5(VAR_2, VAR_10 + 0x0c, 0xdff00220);
 FUNC_5(VAR_2, VAR_10 + 0x10, 0x02dd08c4);
 FUNC_5(VAR_2, VAR_10 + 0x0c, 0x10000260);
 FUNC_7(VAR_2, 129, 0x0, VAR_0, 0x10000);
 FUNC_7(VAR_2, 128, 0x0, VAR_0, 0x10000);
 for (VAR_12 = 0; VAR_12 < 10; VAR_12++) {
  FUNC_4(VAR_2, VAR_1, "[DACK] ADCK count=%d\n", VAR_12);
  FUNC_5(VAR_2, 0x1c3c, VAR_11 + 0x8003);
  FUNC_5(VAR_2, 0x1c24, 0x00010002);
  FUNC_2(VAR_2, &VAR_7, &VAR_8);
  FUNC_4(VAR_2, VAR_1,
   "[DACK] before: i=0x%x, q=0x%x\n", VAR_7, VAR_8);


  if (VAR_7 != 0x0) {
   VAR_7 = 0x400 - VAR_7;
   *VAR_4 = VAR_7;
  }
  if (VAR_8 != 0x0) {
   VAR_8 = 0x400 - VAR_8;
   *VAR_5 = VAR_8;
  }
  VAR_9 = (VAR_7 & 0x3ff) | ((VAR_8 & 0x3ff) << 10);
  FUNC_5(VAR_2, VAR_10 + 0x68, VAR_9);
  VAR_6->dack_adck[VAR_3] = VAR_9;
  FUNC_4(VAR_2, VAR_1, "[DACK] ADCK 0x%08x=0x08%x\n",
   VAR_10 + 0x68, VAR_9);

  FUNC_5(VAR_2, 0x1c3c, VAR_11 + 0x8103);
  FUNC_2(VAR_2, &VAR_7, &VAR_8);
  FUNC_4(VAR_2, VAR_1,
   "[DACK] after:  i=0x%08x, q=0x%08x\n", VAR_7, VAR_8);
  if (VAR_7 >= 0x200)
   VAR_7 = 0x400 - VAR_7;
  if (VAR_8 >= 0x200)
   VAR_8 = 0x400 - VAR_8;
  if (VAR_7 < 5 && VAR_8 < 5)
   break;
 }


 FUNC_5(VAR_2, 0x1c3c, 0x00000003);
 FUNC_5(VAR_2, VAR_10 + 0x0c, 0x10000260);
 FUNC_5(VAR_2, VAR_10 + 0x10, 0x02d508c4);


 FUNC_7(VAR_2, VAR_3, 0x8f, FUNC_0(13), 0x1);
}
