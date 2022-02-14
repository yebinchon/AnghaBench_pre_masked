
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5dr_match_misc3 {int icmpv4_header_data; int icmpv4_type; int icmpv4_code; int icmpv6_header_data; int icmpv6_type; int icmpv6_code; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc3 misc3; } ;
struct mlx5dr_cmd_caps {int flex_parser_id_icmp_dw0; int flex_parser_id_icmp_dw1; int flex_parser_id_icmpv6_dw0; int flex_parser_id_icmpv6_dw1; } ;


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
            struct mlx5dr_cmd_caps *VAR_8,
            u8 *VAR_9)
{
 struct mlx5dr_match_misc3 *VAR_10 = &VAR_7->misc3;
 bool VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_11) {
  VAR_12 = VAR_10->icmpv4_header_data;
  VAR_13 = VAR_10->icmpv4_type;
  VAR_14 = VAR_10->icmpv4_code;
  VAR_15 = VAR_8->flex_parser_id_icmp_dw0;
  VAR_16 = VAR_8->flex_parser_id_icmp_dw1;
 } else {
  VAR_12 = VAR_10->icmpv6_header_data;
  VAR_13 = VAR_10->icmpv6_type;
  VAR_14 = VAR_10->icmpv6_code;
  VAR_15 = VAR_8->flex_parser_id_icmpv6_dw0;
  VAR_16 = VAR_8->flex_parser_id_icmpv6_dw1;
 }

 switch (VAR_15) {
 case 4:
  if (VAR_13) {
   FUNC_2(VAR_6, VAR_9, VAR_4,
     (VAR_13 << VAR_3));
   if (VAR_11)
    VAR_10->icmpv4_type = 0;
   else
    VAR_10->icmpv6_type = 0;
  }
  if (VAR_14) {
   u32 VAR_17 = FUNC_1(VAR_6, VAR_9,
            VAR_4);
   FUNC_2(VAR_6, VAR_9, VAR_4,
     VAR_17 | (VAR_14 << VAR_1));
   if (VAR_11)
    VAR_10->icmpv4_code = 0;
   else
    VAR_10->icmpv6_code = 0;
  }
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_16) {
 case 5:
  if (VAR_12) {
   FUNC_2(VAR_6, VAR_9, VAR_5,
     (VAR_12 << VAR_2));
   if (VAR_11)
    VAR_10->icmpv4_header_data = 0;
   else
    VAR_10->icmpv6_header_data = 0;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
