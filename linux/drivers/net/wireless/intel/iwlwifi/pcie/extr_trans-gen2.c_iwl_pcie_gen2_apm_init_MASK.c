
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {int status; TYPE_2__* trans_cfg; TYPE_1__* cfg; } ;
struct TYPE_4__ {scalar_t__ device_family; } ;
struct TYPE_3__ {scalar_t__ integrated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct iwl_trans *VAR_8)
{
 int VAR_9 = 0;

 FUNC_0(VAR_8, "Init card's basic functions\n");
 FUNC_4(VAR_8, VAR_2,
      VAR_3);


 FUNC_4(VAR_8, VAR_0, VAR_1);





 FUNC_4(VAR_8, VAR_4,
      VAR_5);

 FUNC_2(VAR_8);

 if (VAR_8->trans_cfg->device_family == VAR_6 &&
     VAR_8->cfg->integrated) {
  VAR_9 = FUNC_3(VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_8, VAR_8->trans_cfg);
 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_7, &VAR_8->status);

 return 0;
}
