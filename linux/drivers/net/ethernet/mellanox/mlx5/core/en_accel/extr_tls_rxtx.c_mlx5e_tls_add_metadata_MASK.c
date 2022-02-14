
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int mac_header; scalar_t__ data; } ;
struct TYPE_3__ {int syndrome_swid; } ;
struct TYPE_4__ {TYPE_1__ send; } ;
struct mlx5e_tls_metadata {TYPE_2__ content; } ;
struct ethhdr {int h_proto; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, __be32 VAR_5)
{
 struct mlx5e_tls_metadata *VAR_6;
 struct ethhdr *VAR_7;

 if (FUNC_3(VAR_4, sizeof(struct mlx5e_tls_metadata)))
  return -VAR_0;

 VAR_7 = (struct ethhdr *)FUNC_4(VAR_4, sizeof(struct mlx5e_tls_metadata));
 VAR_4->mac_header -= sizeof(struct mlx5e_tls_metadata);
 VAR_6 = (struct mlx5e_tls_metadata *)(VAR_7 + 1);

 FUNC_2(VAR_4->data, VAR_4->data + sizeof(struct mlx5e_tls_metadata),
  2 * VAR_1);

 VAR_7->h_proto = FUNC_0(VAR_2);
 VAR_6->content.send.syndrome_swid =
  FUNC_1(VAR_3 << 24) | VAR_5;

 return 0;
}
