
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uic_command {int done; } ;
struct ufs_hba {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ufs_hba*,struct uic_command*) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static int
FUNC_4(struct ufs_hba *VAR_1, struct uic_command *VAR_2,
        bool VAR_3)
{
 if (!FUNC_3(VAR_1)) {
  FUNC_0(VAR_1->dev,
   "Controller not ready to accept UIC commands\n");
  return -VAR_0;
 }

 if (VAR_3)
  FUNC_1(&VAR_2->done);

 FUNC_2(VAR_1, VAR_2);

 return 0;
}
