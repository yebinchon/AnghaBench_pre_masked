
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {scalar_t__ trust_state; } ;
struct mlx5e_priv {TYPE_1__ dcbx_dp; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_8,
      struct mlx5_flow_spec *VAR_9, u8 *VAR_10,
      struct netlink_ext_ack *VAR_11)
{
 void *VAR_12, *VAR_13;
 u8 VAR_14, VAR_15 = 0;
 bool VAR_16;
 VAR_12 = FUNC_0(VAR_5, VAR_9->match_criteria, VAR_7);
 VAR_13 = FUNC_0(VAR_5, VAR_9->match_value, VAR_7);

 VAR_16 = FUNC_1(VAR_6, VAR_13, VAR_3);
 if (VAR_16) {
  VAR_15 = FUNC_1(VAR_6, VAR_12, VAR_4);
  VAR_14 = FUNC_1(VAR_6, VAR_13, VAR_4);
 }

 if (!VAR_16 || !VAR_15) {
  VAR_14 = VAR_2;
 } else if (VAR_15 != 0x7) {
  FUNC_2(VAR_11,
       "masked priority match not supported for hairpin");
  return -VAR_0;
 }

 *VAR_10 = VAR_14;
 return 0;
}
