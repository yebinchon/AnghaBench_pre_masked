
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hisi_host {int caps; } ;
struct ufs_hba {int dev_quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ufs_hba*,int ,int) ;
 struct ufs_hisi_host* FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_5(struct ufs_hba *VAR_2)
{
 struct ufs_hisi_host *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->caps & VAR_1) {





  FUNC_3(VAR_2, FUNC_0((u32)0xD0A0), 0x13);

  FUNC_3(VAR_2, FUNC_0((u32)0x1552), 0x4f);

  FUNC_3(VAR_2, FUNC_0((u32)0x1554), 0x4f);

  FUNC_3(VAR_2, FUNC_0((u32)0x1556), 0x4f);

  FUNC_3(VAR_2, FUNC_0((u32)0x15a7), 0xA);

  FUNC_3(VAR_2, FUNC_0((u32)0x15a8), 0xA);
  FUNC_3(VAR_2, FUNC_1(0xd085, 0x0), 0x01);
 }

 if (VAR_2->dev_quirks & VAR_0) {
  FUNC_2("ufs flash device must set VS_DebugSaveConfigTime 0x10\n");

  FUNC_3(VAR_2, FUNC_0(0xD0A0), 0x10);

  FUNC_3(VAR_2, FUNC_0(0x1556), 0x48);
 }


 FUNC_3(VAR_2, FUNC_0(0x15A8), 0x1);

 FUNC_3(VAR_2, FUNC_0(0x155c), 0x0);

 FUNC_3(VAR_2, FUNC_0(0x15b0), 8191);

 FUNC_3(VAR_2, FUNC_0(0x15b1), 65535);

 FUNC_3(VAR_2, FUNC_0(0x15b2), 32767);

 FUNC_3(VAR_2, FUNC_0(0xd041), 8191);

 FUNC_3(VAR_2, FUNC_0(0xd042), 65535);

 FUNC_3(VAR_2, FUNC_0(0xd043), 32767);

 FUNC_3(VAR_2, FUNC_0(0x15b3), 8191);

 FUNC_3(VAR_2, FUNC_0(0x15b4), 65535);

 FUNC_3(VAR_2, FUNC_0(0x15b5), 32767);

 FUNC_3(VAR_2, FUNC_0(0xd044), 8191);

 FUNC_3(VAR_2, FUNC_0(0xd045), 65535);

 FUNC_3(VAR_2, FUNC_0(0xd046), 32767);
}
