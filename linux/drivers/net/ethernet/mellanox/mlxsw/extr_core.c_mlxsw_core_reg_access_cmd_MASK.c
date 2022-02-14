
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_reg_info {scalar_t__ id; int len; } ;
struct mlxsw_core {TYPE_1__* bus_info; } ;
typedef enum mlxsw_emad_op_tlv_status { ____Placeholder_mlxsw_emad_op_tlv_status } mlxsw_emad_op_tlv_status ;
typedef enum mlxsw_core_reg_access_type { ____Placeholder_mlxsw_core_reg_access_type } mlxsw_core_reg_access_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,...) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct mlxsw_core*,int,char*,char*) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mlxsw_core*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,struct mlxsw_reg_info const*,int,int ) ;
 int FUNC_10 (char*,struct mlxsw_reg_info const*,char*) ;
 int FUNC_11 (char*,int*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct mlxsw_core *VAR_5,
         const struct mlxsw_reg_info *VAR_6,
         char *VAR_7,
         enum mlxsw_core_reg_access_type VAR_8)
{
 enum mlxsw_emad_op_tlv_status VAR_9;
 int VAR_10, VAR_11;
 bool VAR_12;
 char *VAR_13, *VAR_14, *VAR_15;

 FUNC_0(VAR_5->bus_info->dev, "Reg cmd access (reg_id=%x(%s),type=%s)\n",
  VAR_6->id, FUNC_13(VAR_6->id),
  FUNC_6(VAR_8));

 VAR_13 = FUNC_4();
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_4();
 if (!VAR_14) {
  VAR_10 = -VAR_1;
  goto free_in_mbox;
 }

 FUNC_9(VAR_13, VAR_6, VAR_8,
          FUNC_7(VAR_5));
 VAR_15 = VAR_13 + VAR_3 * sizeof(u32);
 FUNC_10(VAR_15, VAR_6, VAR_7);






 VAR_12 = VAR_6->id == VAR_4;

 VAR_11 = 0;
retry:
 VAR_10 = FUNC_3(VAR_5, VAR_12, VAR_13, VAR_14);
 if (!VAR_10) {
  VAR_10 = FUNC_11(VAR_14, &VAR_9);
  if (VAR_10) {
   if (VAR_10 == -VAR_0 && VAR_11++ < VAR_2)
    goto retry;
   FUNC_1(VAR_5->bus_info->dev, "Reg cmd access status failed (status=%x(%s))\n",
    VAR_9, FUNC_8(VAR_9));
  }
 }

 if (!VAR_10)
  FUNC_2(VAR_7, FUNC_12(VAR_14),
         VAR_6->len);

 FUNC_5(VAR_14);
free_in_mbox:
 FUNC_5(VAR_13);
 if (VAR_10)
  FUNC_1(VAR_5->bus_info->dev, "Reg cmd access failed (reg_id=%x(%s),type=%s)\n",
   VAR_6->id, FUNC_13(VAR_6->id),
   FUNC_6(VAR_8));
 return VAR_10;
}
