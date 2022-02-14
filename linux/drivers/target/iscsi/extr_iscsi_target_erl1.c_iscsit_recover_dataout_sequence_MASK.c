
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_cmd {int istate_lock; int cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iscsi_cmd*,int ,int ,int *,int *) ;
 int FUNC_1 (struct iscsi_cmd*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(
 struct iscsi_cmd *VAR_3,
 u32 VAR_4,
 u32 VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;

 FUNC_2(&VAR_3->istate_lock);
 VAR_3->cmd_flags |= VAR_2;
 FUNC_3(&VAR_3->istate_lock);

 if (FUNC_0(VAR_3, VAR_4, VAR_5,
   &VAR_7, &VAR_6) < 0)
  return VAR_0;

 FUNC_1(VAR_3, VAR_7, VAR_6);

 return VAR_1;
}
