
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_misc3 {scalar_t__ icmpv6_header_data; scalar_t__ icmpv6_code; scalar_t__ icmpv6_type; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_misc3 *VAR_0)
{
 return (VAR_0->icmpv6_type || VAR_0->icmpv6_code ||
  VAR_0->icmpv6_header_data);
}
