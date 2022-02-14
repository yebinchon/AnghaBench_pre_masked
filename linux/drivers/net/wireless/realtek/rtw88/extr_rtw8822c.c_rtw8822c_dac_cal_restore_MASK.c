
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dm_info {scalar_t__*** dack_msbk; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int,int,int) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,char*) ;
 int FUNC_5 (struct rtw_dev*,int) ;
 int FUNC_6 (struct rtw_dev*,int,int ) ;
 int FUNC_7 (struct rtw_dev*,int,int ,int) ;

__attribute__((used)) static bool FUNC_8(struct rtw_dev *VAR_2)
{
 struct rtw_dm_info *VAR_3 = &VAR_2->dm_info;
 u32 VAR_4[3];


 if (VAR_3->dack_msbk[VAR_0][0][0] == 0 &&
     VAR_3->dack_msbk[VAR_0][1][0] == 0 &&
     VAR_3->dack_msbk[VAR_1][0][0] == 0 &&
     VAR_3->dack_msbk[VAR_1][1][0] == 0)
  return 0;

 VAR_4[0] = FUNC_5(VAR_2, 0x1860);
 VAR_4[1] = FUNC_5(VAR_2, 0x4160);
 VAR_4[2] = FUNC_5(VAR_2, 0x9b4);

 FUNC_3(VAR_2);
 if (!FUNC_2(VAR_2, 0x2808, 0x7fff80, 0xffff) ||
     !FUNC_2(VAR_2, 0x2834, 0x7fff80, 0xffff) ||
     !FUNC_2(VAR_2, 0x4508, 0x7fff80, 0xffff) ||
     !FUNC_2(VAR_2, 0x4534, 0x7fff80, 0xffff))
  return 0;

 if (!FUNC_1(VAR_2)) {
  FUNC_4(VAR_2, "failed to restore dack vectors\n");
  return 0;
 }

 FUNC_7(VAR_2, 0x1830, FUNC_0(30), 0x1);
 FUNC_7(VAR_2, 0x4130, FUNC_0(30), 0x1);
 FUNC_6(VAR_2, 0x1860, VAR_4[0]);
 FUNC_6(VAR_2, 0x4160, VAR_4[1]);
 FUNC_7(VAR_2, 0x18b0, FUNC_0(27), 0x1);
 FUNC_7(VAR_2, 0x18cc, FUNC_0(27), 0x1);
 FUNC_7(VAR_2, 0x41b0, FUNC_0(27), 0x1);
 FUNC_7(VAR_2, 0x41cc, FUNC_0(27), 0x1);
 FUNC_6(VAR_2, 0x9b4, VAR_4[2]);

 return 1;
}
