
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtw_dm_info {int* dack_adck; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct rtw_dev*,char*) ;
 int FUNC_5 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_1, u8 VAR_2)
{
 struct rtw_dm_info *VAR_3 = &VAR_1->dm_info;
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_2(VAR_2);

 FUNC_5(VAR_1, VAR_4 + 0x68, VAR_3->dack_adck[VAR_2]);
 FUNC_5(VAR_1, VAR_4 + 0x0c, 0xdff00220);
 if (VAR_2 == VAR_0) {
  FUNC_5(VAR_1, VAR_4 + 0x60, 0xf0040ff0);
  FUNC_5(VAR_1, 0x1c38, 0xffffffff);
 }
 FUNC_5(VAR_1, VAR_4 + 0x10, 0x02d508c5);
 FUNC_5(VAR_1, 0x9b4, 0xdb66db00);
 FUNC_5(VAR_1, VAR_4 + 0xb0, 0x0a11fb88);
 FUNC_5(VAR_1, VAR_4 + 0xbc, 0x0008ff81);
 FUNC_5(VAR_1, VAR_4 + 0xc0, 0x0003d208);
 FUNC_5(VAR_1, VAR_4 + 0xcc, 0x0a11fb88);
 FUNC_5(VAR_1, VAR_4 + 0xd8, 0x0008ff81);
 FUNC_5(VAR_1, VAR_4 + 0xdc, 0x0003d208);
 FUNC_5(VAR_1, VAR_4 + 0xb8, 0x60000000);
 FUNC_1(2);
 FUNC_5(VAR_1, VAR_4 + 0xbc, 0x000aff8d);
 FUNC_1(2);
 FUNC_5(VAR_1, VAR_4 + 0xb0, 0x0a11fb89);
 FUNC_5(VAR_1, VAR_4 + 0xcc, 0x0a11fb89);
 FUNC_1(1);
 FUNC_5(VAR_1, VAR_4 + 0xb8, 0x62000000);
 FUNC_5(VAR_1, VAR_4 + 0xd4, 0x62000000);
 FUNC_1(20);
 if (!FUNC_0(VAR_1, VAR_5 + 0x08, 0x7fff80, 0xffff) ||
     !FUNC_0(VAR_1, VAR_5 + 0x34, 0x7fff80, 0xffff))
  FUNC_4(VAR_1, "failed to wait for dack ready\n");
 FUNC_5(VAR_1, VAR_4 + 0xb8, 0x02000000);
 FUNC_1(1);
 FUNC_5(VAR_1, VAR_4 + 0xbc, 0x0008ff87);
 FUNC_5(VAR_1, 0x9b4, 0xdb6db600);
 FUNC_5(VAR_1, VAR_4 + 0x10, 0x02d508c5);
 FUNC_5(VAR_1, VAR_4 + 0xbc, 0x0008ff87);
 FUNC_5(VAR_1, VAR_4 + 0x60, 0xf0000000);
}
