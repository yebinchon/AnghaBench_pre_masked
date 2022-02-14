
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ufshcd_lrb {int command_type; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ufs_hba {scalar_t__ ufs_version; TYPE_1__ dev_cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ufshcd_lrb*,int *,int ) ;
 int FUNC_1 (struct ufshcd_lrb*) ;
 int FUNC_2 (struct ufs_hba*,struct ufshcd_lrb*,int ) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_8, struct ufshcd_lrb *VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;

 if ((VAR_8->ufs_version == VAR_4) ||
     (VAR_8->ufs_version == VAR_5))
  VAR_9->command_type = VAR_6;
 else
  VAR_9->command_type = VAR_7;

 FUNC_0(VAR_9, &VAR_10, VAR_2);
 if (VAR_8->dev_cmd.type == VAR_1)
  FUNC_2(VAR_8, VAR_9, VAR_10);
 else if (VAR_8->dev_cmd.type == VAR_0)
  FUNC_1(VAR_9);
 else
  VAR_11 = -VAR_3;

 return VAR_11;
}
