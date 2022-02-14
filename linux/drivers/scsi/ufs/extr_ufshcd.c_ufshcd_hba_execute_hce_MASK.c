
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ufs_hba*,int ) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*,int) ;
 scalar_t__ FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct ufs_hba *VAR_4)
{
 int VAR_5;

 if (!FUNC_4(VAR_4))

  FUNC_3(VAR_4, 1);


 FUNC_5(VAR_4);

 FUNC_6(VAR_4, VAR_2);


 FUNC_2(VAR_4);
 FUNC_7(1000, 1100);


 VAR_5 = 10;
 while (FUNC_4(VAR_4)) {
  if (VAR_5) {
   VAR_5--;
  } else {
   FUNC_0(VAR_4->dev,
    "Controller enable failed\n");
   return -VAR_0;
  }
  FUNC_7(5000, 5100);
 }


 FUNC_1(VAR_4, VAR_3);

 FUNC_6(VAR_4, VAR_1);

 return 0;
}
