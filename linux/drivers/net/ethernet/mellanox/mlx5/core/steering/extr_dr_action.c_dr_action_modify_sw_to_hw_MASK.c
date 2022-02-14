
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct mlx5dr_domain {int dummy; } ;
struct dr_action_modify_field_conv {int end; int start; int hw_field; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dr_action_modify_field_conv* FUNC_2 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct mlx5dr_domain*,char*) ;
 int FUNC_4 (struct mlx5dr_domain*,char*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_5(struct mlx5dr_domain *VAR_13,
     __be64 *VAR_14,
     __be64 *VAR_15,
     const struct dr_action_modify_field_conv **VAR_16)
{
 const struct dr_action_modify_field_conv *VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21;
 u16 VAR_22;
 u8 VAR_23;
 u32 VAR_24;


 VAR_21 = FUNC_0(VAR_12, VAR_14, VAR_4);
 VAR_19 = FUNC_0(VAR_12, VAR_14, VAR_19);
 VAR_18 = FUNC_0(VAR_12, VAR_14, VAR_18);
 VAR_22 = FUNC_0(VAR_12, VAR_14, VAR_9);
 VAR_24 = FUNC_0(VAR_12, VAR_14, VAR_24);


 VAR_17 = FUNC_2(VAR_22);
 if (!VAR_17) {
  FUNC_3(VAR_13, "Modify action invalid field given\n");
  return -VAR_0;
 }

 VAR_20 = VAR_17->end - VAR_17->start + 1;

 switch (VAR_21) {
 case 128:
  VAR_23 = VAR_3;

  if (!VAR_19)
   VAR_19 = 32;

  if (VAR_19 + VAR_18 > VAR_20) {
   FUNC_3(VAR_13, "Modify action length + offset exceeds limit\n");
   return -VAR_0;
  }
  break;

 case 129:
  VAR_23 = VAR_2;
  VAR_18 = 0;
  VAR_19 = VAR_20;
  break;

 default:
  FUNC_4(VAR_13, "Unsupported action_type for modify action\n");
  return -VAR_1;
 }

 FUNC_1(VAR_8, VAR_15, VAR_11, VAR_23);

 FUNC_1(VAR_8, VAR_15, VAR_5,
   VAR_17->hw_field);

 FUNC_1(VAR_8, VAR_15, VAR_6,
   VAR_17->start + VAR_18);

 FUNC_1(VAR_8, VAR_15, VAR_7,
   VAR_19 == 32 ? 0 : VAR_19);

 FUNC_1(VAR_8, VAR_15, VAR_10, VAR_24);

 *VAR_16 = VAR_17;

 return 0;
}
