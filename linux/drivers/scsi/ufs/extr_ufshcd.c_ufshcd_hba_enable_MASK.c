
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int quirks; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*,int ) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*,int ) ;

__attribute__((used)) static int FUNC_7(struct ufs_hba *VAR_4)
{
 int VAR_5;

 if (VAR_4->quirks & VAR_3) {
  FUNC_5(VAR_4);
  FUNC_6(VAR_4, VAR_1);


  FUNC_3(VAR_4, VAR_2);
  VAR_5 = FUNC_2(VAR_4);
  if (!VAR_5) {
   VAR_5 = FUNC_1(VAR_4);
   if (!VAR_5)
    FUNC_6(VAR_4, VAR_0);
   if (VAR_5)
    FUNC_0(VAR_4->dev,
     "Host controller enable failed with non-hce\n");
  }
 } else {
  VAR_5 = FUNC_4(VAR_4);
 }

 return VAR_5;
}
