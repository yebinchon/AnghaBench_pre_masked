
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uic_command {int argument2; int done; } ;
struct ufs_hba {TYPE_1__* host; int * active_uic_cmd; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct ufs_hba *VAR_3, struct uic_command *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 if (FUNC_3(&VAR_4->done,
     FUNC_0(VAR_2)))
  VAR_5 = VAR_4->argument2 & VAR_1;
 else
  VAR_5 = -VAR_0;

 FUNC_1(VAR_3->host->host_lock, VAR_6);
 VAR_3->active_uic_cmd = ((void*)0);
 FUNC_2(VAR_3->host->host_lock, VAR_6);

 return VAR_5;
}
