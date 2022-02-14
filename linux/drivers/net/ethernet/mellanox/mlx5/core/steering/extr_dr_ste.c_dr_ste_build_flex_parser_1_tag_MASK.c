
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5dr_ste_build {TYPE_1__* caps; } ;
struct mlx5dr_match_misc3 {int icmpv4_header_data; int icmpv4_type; int icmpv4_code; int icmpv6_header_data; int icmpv6_type; int icmpv6_code; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc3 misc3; } ;
struct dr_hw_ste_format {int * tag; } ;
struct TYPE_2__ {int flex_parser_id_icmp_dw0; int flex_parser_id_icmp_dw1; int flex_parser_id_icmpv6_dw0; int flex_parser_id_icmpv6_dw1; } ;


 int FUNC_0 (struct mlx5dr_match_misc3*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct mlx5dr_match_param *VAR_7,
       struct mlx5dr_ste_build *VAR_8,
       u8 *VAR_9)
{
 struct dr_hw_ste_format *VAR_10 = (struct dr_hw_ste_format *)VAR_9;
 struct mlx5dr_match_misc3 *VAR_11 = &VAR_7->misc3;
 u8 *VAR_12 = VAR_10->tag;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 bool VAR_18;

 VAR_18 = FUNC_0(VAR_11);
 if (VAR_18) {
  VAR_13 = VAR_11->icmpv4_header_data;
  VAR_16 = VAR_11->icmpv4_type;
  VAR_17 = VAR_11->icmpv4_code;
  VAR_14 = VAR_8->caps->flex_parser_id_icmp_dw0;
  VAR_15 = VAR_8->caps->flex_parser_id_icmp_dw1;
 } else {
  VAR_13 = VAR_11->icmpv6_header_data;
  VAR_16 = VAR_11->icmpv6_type;
  VAR_17 = VAR_11->icmpv6_code;
  VAR_14 = VAR_8->caps->flex_parser_id_icmpv6_dw0;
  VAR_15 = VAR_8->caps->flex_parser_id_icmpv6_dw1;
 }

 switch (VAR_14) {
 case 4:
  if (VAR_16) {
   FUNC_2(VAR_6, VAR_12, VAR_4,
     (VAR_16 << VAR_3));
   if (VAR_18)
    VAR_11->icmpv4_type = 0;
   else
    VAR_11->icmpv6_type = 0;
  }

  if (VAR_17) {
   u32 VAR_19 = FUNC_1(VAR_6, VAR_12,
            VAR_4);
   FUNC_2(VAR_6, VAR_12, VAR_4,
     VAR_19 | (VAR_17 << VAR_1));
   if (VAR_18)
    VAR_11->icmpv4_code = 0;
   else
    VAR_11->icmpv6_code = 0;
  }
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15) {
 case 5:
  if (VAR_13) {
   FUNC_2(VAR_6, VAR_12, VAR_5,
     (VAR_13 << VAR_2));
   if (VAR_18)
    VAR_11->icmpv4_header_data = 0;
   else
    VAR_11->icmpv6_header_data = 0;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
