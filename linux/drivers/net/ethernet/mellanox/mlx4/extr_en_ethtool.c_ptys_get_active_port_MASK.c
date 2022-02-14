
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_ptys_reg {int eth_proto_cap; int eth_proto_oper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct mlx4_ptys_reg *VAR_21)
{
 u32 VAR_22 = FUNC_1(VAR_21->eth_proto_oper);

 if (!VAR_22)
  VAR_22 = FUNC_1(VAR_21->eth_proto_cap);

 if (VAR_22 & (FUNC_0(VAR_8)
    | FUNC_0(VAR_2)
    | FUNC_0(VAR_3))) {
   return VAR_20;
 }

 if (VAR_22 & (FUNC_0(VAR_7)
    | FUNC_0(VAR_15)
    | FUNC_0(VAR_12)
    | FUNC_0(VAR_0))) {
   return VAR_17;
 }

 if (VAR_22 & (FUNC_0(VAR_4)
    | FUNC_0(VAR_13)
    | FUNC_0(VAR_10))) {
   return VAR_16;
 }

 if (VAR_22 & (FUNC_0(VAR_14)
    | FUNC_0(VAR_11)
    | FUNC_0(VAR_9)
    | FUNC_0(VAR_5)
    | FUNC_0(VAR_6)
    | FUNC_0(VAR_1))) {
   return VAR_18;
 }
 return VAR_19;
}
