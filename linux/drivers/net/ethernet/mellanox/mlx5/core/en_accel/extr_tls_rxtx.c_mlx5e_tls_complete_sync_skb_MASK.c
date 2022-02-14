
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* first_seq; } ;
struct TYPE_7__ {TYPE_2__ send; } ;
struct mlx5e_tls_metadata {TYPE_3__ content; } ;
typedef struct mlx5e_tls_metadata u8 ;
typedef int u32 ;
typedef int syndrome ;
struct tcphdr {int seq; } ;
struct sk_buff {int len; int queue_mapping; int ip_summed; struct mlx5e_tls_metadata* data; TYPE_1__* dev; } ;
struct iphdr {void* tot_len; } ;
struct ethhdr {int dummy; } ;
typedef int rcd_sn ;
typedef struct mlx5e_tls_metadata __be64 ;
struct TYPE_8__ {int gso_size; int gso_type; int gso_segs; } ;
struct TYPE_5__ {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 struct mlx5e_tls_metadata VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mlx5e_tls_metadata*,struct mlx5e_tls_metadata*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct tcphdr* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct sk_buff *VAR_2,
     struct sk_buff *VAR_3, u32 VAR_4,
     int VAR_5, __be64 VAR_6)
{
 struct mlx5e_tls_metadata *VAR_7;
 u8 VAR_8 = VAR_1;
 struct iphdr *VAR_9;
 struct tcphdr *VAR_10;
 int VAR_11, VAR_12;

 VAR_3->dev = VAR_2->dev;
 FUNC_6(VAR_3);
 FUNC_7(VAR_3, FUNC_5(VAR_2));
 FUNC_8(VAR_3, FUNC_10(VAR_2));
 FUNC_4(VAR_3->data, VAR_2->data, VAR_5);
 FUNC_4(VAR_3->data + VAR_5, &VAR_6, sizeof(VAR_6));

 VAR_9 = FUNC_3(VAR_3);
 VAR_9->tot_len = FUNC_2(VAR_3->len - FUNC_5(VAR_3));
 VAR_10 = FUNC_11(VAR_3);
 VAR_11 = VAR_3->len - VAR_5;
 VAR_4 -= VAR_11;
 VAR_10->seq = FUNC_1(VAR_4);

 VAR_12 = VAR_3->dev->mtu - (VAR_5 - FUNC_5(VAR_3));
 FUNC_9(VAR_3)->gso_size = 0;
 if (VAR_11 > VAR_12) {
  FUNC_9(VAR_3)->gso_size = VAR_12;
  FUNC_9(VAR_3)->gso_segs = FUNC_0(VAR_11, VAR_12);
 }
 FUNC_9(VAR_3)->gso_type = FUNC_9(VAR_2)->gso_type;

 VAR_7 = (struct mlx5e_tls_metadata *)(VAR_3->data + sizeof(struct ethhdr));
 FUNC_4(VAR_7, &VAR_8, sizeof(VAR_8));
 VAR_7->content.send.first_seq = FUNC_2(VAR_4);




 VAR_3->ip_summed = VAR_0;

 VAR_3->queue_mapping = VAR_2->queue_mapping;
}
