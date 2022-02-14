
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5dr_domain {int dummy; } ;
struct dr_action_modify_field_conv {int l3_type; int l4_type; scalar_t__ hw_field; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5dr_domain*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5dr_domain*,int *,int *,struct dr_action_modify_field_conv const**) ;
 int FUNC_3 (struct mlx5dr_domain*,char*) ;

__attribute__((used)) static int FUNC_4(struct mlx5dr_domain *VAR_4,
         u32 VAR_5,
         u32 VAR_6,
         __be64 VAR_7[],
         __be64 VAR_8[],
         u32 *VAR_9,
         bool *VAR_10)
{
 const struct dr_action_modify_field_conv *VAR_11;
 u16 VAR_12 = VAR_1;
 u32 VAR_13 = VAR_2;
 u32 VAR_14 = VAR_3;
 int VAR_15, VAR_16, VAR_17 = 0;
 __be64 *VAR_18;
 __be64 VAR_19;

 *VAR_10 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_18 = &VAR_7[VAR_16];

  VAR_15 = FUNC_0(VAR_4, VAR_18);
  if (VAR_15)
   return VAR_15;

  if (!(*VAR_10))
   *VAR_10 = FUNC_1(VAR_18);


  VAR_15 = FUNC_2(VAR_4,
      VAR_18,
      &VAR_19,
      &VAR_11);
  if (VAR_15)
   return VAR_15;


  if (VAR_13 && VAR_11->l3_type &&
      VAR_11->l3_type != VAR_13) {
   FUNC_3(VAR_4, "Action list can't support two different L3 types\n");
   return -VAR_0;
  }
  if (VAR_11->l3_type)
   VAR_13 = VAR_11->l3_type;


  if (VAR_14 && VAR_11->l4_type &&
      VAR_11->l4_type != VAR_14) {
   FUNC_3(VAR_4, "Action list can't support two different L4 types\n");
   return -VAR_0;
  }
  if (VAR_11->l4_type)
   VAR_14 = VAR_11->l4_type;




  if ((VAR_17 % 2) && VAR_12 == VAR_11->hw_field) {



   VAR_17++;
   if ((VAR_6 + VAR_17 - VAR_16) >= VAR_5) {
    FUNC_3(VAR_4, "Modify header action number exceeds HW limit\n");
    return -VAR_0;
   }
  }
  VAR_12 = VAR_11->hw_field;

  VAR_8[VAR_17] = VAR_19;
  VAR_17++;
 }

 *VAR_9 = VAR_17;

 return 0;
}
