
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; int status; int rx_mpdu_cmd; } ;
struct fw_img {int dummy; } ;
struct TYPE_2__ {int (* start_fw ) (struct iwl_trans*,struct fw_img const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct iwl_trans*,struct fw_img const*,int) ;

__attribute__((used)) static inline int FUNC_4(struct iwl_trans *VAR_1,
         const struct fw_img *VAR_2,
         bool VAR_3)
{
 FUNC_2();

 FUNC_0(!VAR_1->rx_mpdu_cmd);

 FUNC_1(VAR_0, &VAR_1->status);
 return VAR_1->ops->start_fw(VAR_1, VAR_2, VAR_3);
}
