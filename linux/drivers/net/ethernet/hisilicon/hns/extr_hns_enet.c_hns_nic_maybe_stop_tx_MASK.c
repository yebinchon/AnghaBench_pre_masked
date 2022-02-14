
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hnae_ring {int max_desc_num_per_pkt; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hnae_ring*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(
 struct sk_buff **VAR_3, int *VAR_4, struct hnae_ring *VAR_5)
{
 struct sk_buff *VAR_6 = *VAR_3;
 struct sk_buff *VAR_7 = ((void*)0);
 int VAR_8;


 VAR_8 = FUNC_3(VAR_6)->nr_frags + 1;

 if (FUNC_4(VAR_8 > VAR_5->max_desc_num_per_pkt)) {
  if (FUNC_1(VAR_5) < 1)
   return -VAR_0;

  VAR_7 = FUNC_2(VAR_6, VAR_2);
  if (!VAR_7)
   return -VAR_1;

  FUNC_0(VAR_6);
  *VAR_3 = VAR_7;
  VAR_8 = 1;
 } else if (VAR_8 > FUNC_1(VAR_5)) {
  return -VAR_0;
 }

 *VAR_4 = VAR_8;
 return 0;
}
