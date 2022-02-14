
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mlx5e_rq {TYPE_1__* stats; } ;
struct TYPE_2__ {int buff_alloc_err; } ;


 struct sk_buff* FUNC_0 (void*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline
struct sk_buff *FUNC_4(struct mlx5e_rq *VAR_0, void *VAR_1,
           u32 VAR_2, u16 VAR_3,
           u32 VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_0(VAR_1, VAR_2);

 if (FUNC_3(!VAR_5)) {
  VAR_0->stats->buff_alloc_err++;
  return ((void*)0);
 }

 FUNC_2(VAR_5, VAR_3);
 FUNC_1(VAR_5, VAR_4);

 return VAR_5;
}
