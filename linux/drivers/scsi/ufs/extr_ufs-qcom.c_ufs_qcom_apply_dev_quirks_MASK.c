
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev_quirks; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->dev_quirks & VAR_0)
  VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
