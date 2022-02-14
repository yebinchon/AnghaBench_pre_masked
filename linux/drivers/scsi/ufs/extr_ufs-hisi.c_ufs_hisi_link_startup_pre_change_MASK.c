
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ufs_hisi_host {int caps; } ;
struct ufs_hba {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*,int ,int*) ;
 int FUNC_5 (struct ufs_hba*,int ,int) ;
 struct ufs_hisi_host* FUNC_6 (struct ufs_hba*) ;
 int FUNC_7 (struct ufs_hba*,int ) ;
 int FUNC_8 (struct ufs_hba*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct ufs_hba *VAR_5)
{
 struct ufs_hisi_host *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;


 FUNC_5(VAR_5, FUNC_0(0xD0C1, 0x0), 0x1);

 FUNC_5(VAR_5, FUNC_0(0x156A, 0x0), 0x2);

 FUNC_5(VAR_5, FUNC_0(0x8114, 0x0), 0x1);

 FUNC_5(VAR_5, FUNC_0(0x8121, 0x0), 0x2D);

 FUNC_5(VAR_5, FUNC_0(0x8122, 0x0), 0x1);

 if (VAR_6->caps & VAR_3) {

  FUNC_5(VAR_5, FUNC_0(0x8127, 0x0), 0x98);

  FUNC_5(VAR_5, FUNC_0(0x8128, 0x0), 0x1);
 }


 FUNC_5(VAR_5, FUNC_0(0xD085, 0x0), 0x1);

 FUNC_5(VAR_5, FUNC_0(0x800D, 0x4), 0x58);

 FUNC_5(VAR_5, FUNC_0(0x800D, 0x5), 0x58);

 FUNC_5(VAR_5, FUNC_0(0x800E, 0x4), 0xB);

 FUNC_5(VAR_5, FUNC_0(0x800E, 0x5), 0xB);

 FUNC_5(VAR_5, FUNC_0(0x8009, 0x4), 0x1);

 FUNC_5(VAR_5, FUNC_0(0x8009, 0x5), 0x1);

 FUNC_5(VAR_5, FUNC_0(0xD085, 0x0), 0x1);

 FUNC_5(VAR_5, FUNC_0(0x8113, 0x0), 0x1);
 FUNC_5(VAR_5, FUNC_0(0xD085, 0x0), 0x1);

 if (VAR_6->caps & VAR_3) {

  FUNC_5(VAR_5, FUNC_0(0x0092, 0x4), 0xA);

  FUNC_5(VAR_5, FUNC_0(0x0092, 0x5), 0xA);

  FUNC_5(VAR_5, FUNC_0(0x008f, 0x4), 0xA);

  FUNC_5(VAR_5, FUNC_0(0x008f, 0x5), 0xA);
 } else {

  FUNC_5(VAR_5, FUNC_0(0x008F, 0x4), 0x7);

  FUNC_5(VAR_5, FUNC_0(0x008F, 0x5), 0x7);
 }


 FUNC_5(VAR_5, FUNC_0(0x0095, 0x4), 0x4F);

 FUNC_5(VAR_5, FUNC_0(0x0095, 0x5), 0x4F);

 FUNC_5(VAR_5, FUNC_0(0x0094, 0x4), 0x4F);

 FUNC_5(VAR_5, FUNC_0(0x0094, 0x5), 0x4F);

 FUNC_5(VAR_5, FUNC_0(0x008B, 0x4), 0x4F);

 FUNC_5(VAR_5, FUNC_0(0x008B, 0x5), 0x4F);

 FUNC_5(VAR_5, FUNC_0(0x000F, 0x0), 0x5);

 FUNC_5(VAR_5, FUNC_0(0x000F, 0x1), 0x5);

 FUNC_5(VAR_5, FUNC_0(0xD085, 0x0), 0x1);

 FUNC_4(VAR_5, FUNC_0(0xD0C1, 0x0), &VAR_8);
 if (VAR_8 != 0x1)
  FUNC_2(VAR_5->dev,
      "Warring!!! Unipro VS_mphy_disable is 0x%x\n", VAR_8);


 FUNC_5(VAR_5, FUNC_0(0xD0C1, 0x0), 0x0);
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  FUNC_1(VAR_5->dev, "ufs_hisi_check_hibern8 error\n");

 if (!(VAR_6->caps & VAR_3))
  FUNC_8(VAR_5, VAR_2, VAR_4);


 VAR_9 = FUNC_7(VAR_5, VAR_0);
 VAR_9 = VAR_9 & (~VAR_1);
 FUNC_8(VAR_5, VAR_9, VAR_0);


 FUNC_5(VAR_5, FUNC_0(0x155E, 0x0), 0x0);

 FUNC_5(VAR_5, FUNC_0(0xD0AB, 0x0), 0x0);
 FUNC_4(VAR_5, FUNC_0(0xD0AB, 0x0), &VAR_8);
 if (VAR_8 != 0) {

  FUNC_2(VAR_5->dev, "WARN: close VS_Mk2ExtnSupport failed\n");
 }

 return VAR_7;
}
