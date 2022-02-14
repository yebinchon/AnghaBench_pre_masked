
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethsw_core {int learning; int dev; int dpsw_handle; int mc_io; } ;
typedef enum dpsw_fdb_learning_mode { ____Placeholder_dpsw_fdb_learning_mode } dpsw_fdb_learning_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ethsw_core *VAR_2, bool VAR_3)
{
 enum dpsw_fdb_learning_mode VAR_4;
 int VAR_5;

 if (VAR_3)
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_0;

 VAR_5 = FUNC_1(VAR_2->mc_io, 0, VAR_2->dpsw_handle, 0,
      VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "dpsw_fdb_set_learning_mode err %d\n", VAR_5);
  return VAR_5;
 }
 VAR_2->learning = VAR_3;

 return 0;
}
