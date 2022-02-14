
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5e_cq {int wq; } ;
struct devlink_fmsg {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_2 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct devlink_fmsg*) ;
 int FUNC_6 (struct devlink_fmsg*,char*) ;

int FUNC_7(struct mlx5e_cq *VAR_0, struct devlink_fmsg *VAR_1)
{
 u8 VAR_2;
 u32 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(&VAR_0->wq);
 VAR_2 = FUNC_3(&VAR_0->wq);

 VAR_4 = FUNC_6(VAR_1, "CQ");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, "stride size", FUNC_0(VAR_2));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, "size", VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
  return VAR_4;

 return 0;
}
