
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*,int ,int) ;

int FUNC_5(struct ufs_hba *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_2->dev, "Configuring Test Chip 40-bit RMMI\n");
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Configuration failed\n");
  goto out;
 }


 VAR_3 = FUNC_4(VAR_2, FUNC_0(VAR_1), 0x01);
 if (VAR_3)
  goto out;


 VAR_3 = FUNC_4(VAR_2, FUNC_0(VAR_0), 0x01);

out:
 return VAR_3;
}
