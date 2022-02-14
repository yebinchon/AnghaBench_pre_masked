
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uic_command {int command; int member_0; } ;
struct ufs_hba {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ufs_hba*,struct uic_command*) ;

__attribute__((used)) static int FUNC_2(struct ufs_hba *VAR_1)
{
 struct uic_command VAR_2 = {0};
 int VAR_3;

 VAR_2.command = VAR_0;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1->dev,
   "dme-reset: error code %d\n", VAR_3);

 return VAR_3;
}
