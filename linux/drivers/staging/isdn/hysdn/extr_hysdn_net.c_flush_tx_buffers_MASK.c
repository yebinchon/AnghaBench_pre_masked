
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {scalar_t__ out_idx; scalar_t__ sk_count; int * skbs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct net_local *VAR_1)
{

 while (VAR_1->sk_count) {
  FUNC_0(VAR_1->skbs[VAR_1->out_idx++]);
  if (VAR_1->out_idx >= VAR_0)
   VAR_1->out_idx = 0;
  VAR_1->sk_count--;
 }
}
