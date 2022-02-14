
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct mlx5e_ipsec_metadata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct xfrm_state* FUNC_2 (struct net_device*,struct sk_buff*,struct mlx5e_ipsec_metadata*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

struct sk_buff *FUNC_5(struct net_device *VAR_2,
       struct sk_buff *VAR_3, u32 *VAR_4)
{
 struct mlx5e_ipsec_metadata *VAR_5;
 struct xfrm_state *VAR_6;

 if (!FUNC_0(VAR_3))
  return VAR_3;


 VAR_5 = (struct mlx5e_ipsec_metadata *)(VAR_3->data + VAR_0);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_5);
 if (FUNC_4(!VAR_6)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 FUNC_3(VAR_3);
 *VAR_4 -= VAR_1;

 return VAR_3;
}
