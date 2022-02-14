
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int csum; } ;
struct mlx5e_rq_stats {int csum_complete_tail; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (void*,int,int ) ;
 void* FUNC_2 (struct sk_buff*,int,int,int *) ;
 int FUNC_3 (struct sk_buff*,int,int,struct mlx5e_rq_stats*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct sk_buff *VAR_1, int VAR_2,
    struct mlx5e_rq_stats *VAR_3)
{
 u8 VAR_4[VAR_0];
 int VAR_5 = VAR_1->len - VAR_2;
 void *VAR_6;

 if (FUNC_4(VAR_5 > VAR_0)) {
  FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3);
  return;
 }

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_5, VAR_4);
 if (FUNC_4(!VAR_6)) {
  FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3);
  return;
 }

 VAR_3->csum_complete_tail++;
 VAR_1->csum = FUNC_0(VAR_1->csum, FUNC_1(VAR_6, VAR_5, 0), VAR_2);
}
