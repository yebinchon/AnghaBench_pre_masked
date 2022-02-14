
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int napi; } ;
struct mlx5e_rq {TYPE_2__* stats; TYPE_1__ cq; } ;
struct TYPE_4__ {int buff_alloc_err; } ;


 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,void*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct mlx5e_rq *VAR_0, void *VAR_1,
            u32 VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_0->cq.napi, VAR_2);
 if (FUNC_2(!VAR_3)) {
  VAR_0->stats->buff_alloc_err++;
  return ((void*)0);
 }

 FUNC_1(VAR_3, VAR_1, VAR_2);

 return VAR_3;
}
