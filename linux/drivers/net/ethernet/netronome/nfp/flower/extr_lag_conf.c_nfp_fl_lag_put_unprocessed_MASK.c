
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_lag_config {int group_id; } ;
struct nfp_fl_lag {int retrans_skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nfp_flower_cmsg_lag_config* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct nfp_fl_lag *VAR_4, struct sk_buff *VAR_5)
{
 struct nfp_flower_cmsg_lag_config *VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (FUNC_1(VAR_6->group_id) >= VAR_2)
  return -VAR_0;





 if (FUNC_3(&VAR_4->retrans_skbs) >= VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_4->retrans_skbs, VAR_5);

 return 0;
}
