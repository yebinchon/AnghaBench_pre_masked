
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_xrcdn {int dummy; } ;
struct res_srq {int dummy; } ;
struct res_qp {int dummy; } ;
struct res_mtt {int dummy; } ;
struct res_mpt {int dummy; } ;
struct res_fs_rule {int dummy; } ;
struct res_eq {int dummy; } ;
struct res_cq {int dummy; } ;
struct res_counter {int dummy; } ;
struct res_common {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct res_counter*) ;
 int FUNC_1 (struct res_cq*) ;
 int FUNC_2 (struct res_eq*) ;
 int FUNC_3 (struct res_fs_rule*) ;
 int FUNC_4 (struct res_mpt*) ;
 int FUNC_5 (struct res_mtt*,int) ;
 int FUNC_6 (struct res_qp*) ;
 int FUNC_7 (struct res_srq*) ;
 int FUNC_8 (struct res_xrcdn*) ;

__attribute__((used)) static int FUNC_9(struct res_common *VAR_2, enum mlx4_resource VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 130:
  return FUNC_6((struct res_qp *)VAR_2);
 case 136:
  return FUNC_1((struct res_cq *)VAR_2);
 case 129:
  return FUNC_7((struct res_srq *)VAR_2);
 case 132:
  return FUNC_4((struct res_mpt *)VAR_2);
 case 131:
  return FUNC_5((struct res_mtt *)VAR_2, VAR_4);
 case 133:
  return -VAR_1;
 case 135:
  return FUNC_2((struct res_eq *)VAR_2);
 case 137:
  return FUNC_0((struct res_counter *)VAR_2);
 case 128:
  return FUNC_8((struct res_xrcdn *)VAR_2);
 case 134:
  return FUNC_3((struct res_fs_rule *)VAR_2);
 default:
  return -VAR_0;
 }
}
