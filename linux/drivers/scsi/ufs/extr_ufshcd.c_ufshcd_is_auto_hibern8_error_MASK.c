
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ufs_hba {TYPE_1__* active_uic_cmd; } ;
struct TYPE_2__ {scalar_t__ command; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static bool FUNC_1(struct ufs_hba *VAR_3,
      u32 VAR_4)
{
 if (!FUNC_0(VAR_3))
  return 0;

 if (!(VAR_4 & VAR_0))
  return 0;

 if (VAR_3->active_uic_cmd &&
     (VAR_3->active_uic_cmd->command == VAR_1 ||
     VAR_3->active_uic_cmd->command == VAR_2))
  return 0;

 return 1;
}
