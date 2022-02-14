
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ufshcd_lrb {TYPE_1__* cmd; int command_type; } ;
struct ufs_hba {scalar_t__ ufs_version; } ;
struct TYPE_2__ {int sc_data_direction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ufshcd_lrb*,int *,int ) ;
 int FUNC_2 (struct ufshcd_lrb*,int ) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_5, struct ufshcd_lrb *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 if ((VAR_5->ufs_version == VAR_1) ||
     (VAR_5->ufs_version == VAR_2))
  VAR_6->command_type = VAR_3;
 else
  VAR_6->command_type = VAR_4;

 if (FUNC_0(VAR_6->cmd)) {
  FUNC_1(VAR_6, &VAR_7,
      VAR_6->cmd->sc_data_direction);
  FUNC_2(VAR_6, VAR_7);
 } else {
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
