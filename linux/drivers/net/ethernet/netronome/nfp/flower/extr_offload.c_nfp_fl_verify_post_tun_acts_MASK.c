
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_push_vlan {int dummy; } ;
struct nfp_fl_act_head {scalar_t__ jump_id; unsigned int len_lw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int
FUNC_0(char *VAR_4, int VAR_5, struct nfp_fl_push_vlan **VAR_6)
{
 struct nfp_fl_act_head *VAR_7;
 unsigned int VAR_8 = 0;

 while (VAR_8 < VAR_5) {
  VAR_7 = (struct nfp_fl_act_head *)&VAR_4[VAR_8];

  if (VAR_7->jump_id == VAR_2 && !VAR_8)
   *VAR_6 = (struct nfp_fl_push_vlan *)VAR_7;
  else if (VAR_7->jump_id != VAR_1)
   return -VAR_0;

  VAR_8 += VAR_7->len_lw << VAR_3;
 }


 if (*VAR_6 && VAR_8 <= sizeof(struct nfp_fl_push_vlan))
  return -VAR_0;

 return 0;
}
