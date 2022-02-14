
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uic_command {int dummy; } ;
struct ufs_hba {int uic_cmd_mutex; TYPE_1__* host; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (struct ufs_hba*,struct uic_command*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*,int) ;
 int FUNC_7 (struct ufs_hba*) ;
 int FUNC_8 (struct ufs_hba*,struct uic_command*) ;

int FUNC_9(struct ufs_hba *VAR_0, struct uic_command *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_6(VAR_0, 0);
 FUNC_1(&VAR_0->uic_cmd_mutex);
 FUNC_5(VAR_0);

 FUNC_3(VAR_0->host->host_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1, 1);
 FUNC_4(VAR_0->host->host_lock, VAR_3);
 if (!VAR_2)
  VAR_2 = FUNC_8(VAR_0, VAR_1);

 FUNC_2(&VAR_0->uic_cmd_mutex);

 FUNC_7(VAR_0);
 return VAR_2;
}
