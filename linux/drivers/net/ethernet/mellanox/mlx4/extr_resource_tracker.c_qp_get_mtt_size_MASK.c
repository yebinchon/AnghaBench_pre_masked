
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_qp_context {int log_page_size; int sq_size_stride; int rq_size_stride; int params2; int flags; int srqn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_qp_context *VAR_1)
{
 int VAR_2 = (VAR_1->log_page_size & 0x3f) + 12;
 int VAR_3 = (VAR_1->sq_size_stride >> 3) & 0xf;
 int VAR_4 = VAR_1->sq_size_stride & 7;
 int VAR_5 = (VAR_1->rq_size_stride >> 3) & 0xf;
 int VAR_6 = VAR_1->rq_size_stride & 7;
 int VAR_7 = (FUNC_0(VAR_1->srqn) >> 24) & 1;
 int VAR_8 = (FUNC_0(VAR_1->flags) >> 13) & 1;
 u32 VAR_9 = (FUNC_0(VAR_1->flags) >> 16) & 0xff;
 int VAR_10 = (VAR_9 == VAR_0) ? 1 : 0;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = (FUNC_0(VAR_1->params2) >> 6) & 0x3f;
 int VAR_16;

 VAR_11 = 1 << (VAR_3 + VAR_4 + 4);
 VAR_12 = (VAR_7|VAR_8|VAR_10) ? 0 : (1 << (VAR_5 + VAR_6 + 4));
 VAR_14 = VAR_11 + VAR_12;
 VAR_16 = (VAR_14 + (VAR_15 << 6)) >> VAR_2;
 VAR_13 = !VAR_16 ? 1 : FUNC_1(VAR_16);

 return VAR_13;
}
