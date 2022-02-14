
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mac_header; scalar_t__ data; } ;
struct TYPE_2__ {int raw; } ;
struct mlx5e_ipsec_metadata {TYPE_1__ content; } ;
struct ethhdr {int h_proto; } ;


 int VAR_0 ;
 struct mlx5e_ipsec_metadata* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static struct mlx5e_ipsec_metadata *FUNC_7(struct sk_buff *VAR_3)
{
 struct mlx5e_ipsec_metadata *VAR_4;
 struct ethhdr *VAR_5;

 if (FUNC_6(FUNC_4(VAR_3, sizeof(*VAR_4))))
  return FUNC_0(-VAR_0);

 VAR_5 = (struct ethhdr *)FUNC_5(VAR_3, sizeof(*VAR_4));
 VAR_3->mac_header -= sizeof(*VAR_4);
 VAR_4 = (struct mlx5e_ipsec_metadata *)(VAR_5 + 1);

 FUNC_2(VAR_3->data, VAR_3->data + sizeof(*VAR_4),
  2 * VAR_1);

 VAR_5->h_proto = FUNC_1(VAR_2);

 FUNC_3(VAR_4->content.raw, 0, sizeof(VAR_4->content.raw));
 return VAR_4;
}
