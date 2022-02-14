
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct mlx4_wqe_inline_seg {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct sk_buff *VAR_2)
{
 if (VAR_2->len + VAR_0 + sizeof(struct mlx4_wqe_inline_seg)
     <= VAR_1)
  return FUNC_0(VAR_2->len + VAR_0 +
        sizeof(struct mlx4_wqe_inline_seg), 16);
 else
  return FUNC_0(VAR_2->len + VAR_0 + 2 *
        sizeof(struct mlx4_wqe_inline_seg), 16);
}
