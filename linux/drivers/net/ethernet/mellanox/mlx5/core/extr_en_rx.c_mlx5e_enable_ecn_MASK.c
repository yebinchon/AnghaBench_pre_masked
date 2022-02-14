
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* data; } ;
struct mlx5e_rq {TYPE_1__* stats; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int ecn_mark; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct ipv6hdr*) ;
 int FUNC_1 (struct iphdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct mlx5e_rq *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 __be16 VAR_4;
 void *VAR_5;
 int VAR_6;

 if (FUNC_4(!FUNC_3(VAR_2, &VAR_3, &VAR_4)))
  return;

 VAR_5 = VAR_2->data + VAR_3;
 VAR_6 = ((VAR_4 == FUNC_2(VAR_0)) ? FUNC_1((struct iphdr *)VAR_5) :
      FUNC_0(VAR_2, (struct ipv6hdr *)VAR_5));

 VAR_1->stats->ecn_mark += !!VAR_6;
}
