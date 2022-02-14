
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {void* ipv6_fragment_en; void* ipv6_sctp_en; void* ipv6_udp_en; void* ipv6_tcp_en; void* ipv4_fragment_en; void* ipv4_sctp_en; void* ipv4_udp_en; void* ipv4_tcp_en; } ;
struct hclgevf_rss_cfg {size_t rss_size; size_t* rss_indirection_tbl; TYPE_4__ rss_tuple_sets; int rss_hash_key; int hash_algo; } ;
struct TYPE_5__ {size_t rss_size; } ;
struct TYPE_6__ {TYPE_1__ kinfo; } ;
struct hclgevf_dev {TYPE_3__* pdev; TYPE_2__ nic; struct hclgevf_rss_cfg rss_cfg; } ;
struct TYPE_7__ {int revision; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hclgevf_dev*,int ,int ) ;
 int FUNC_1 (struct hclgevf_dev*) ;
 int FUNC_2 (struct hclgevf_dev*,struct hclgevf_rss_cfg*) ;
 int FUNC_3 (struct hclgevf_dev*,size_t) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hclgevf_dev *VAR_6)
{
 struct hclgevf_rss_cfg *VAR_7 = &VAR_6->rss_cfg;
 int VAR_8;
 u32 VAR_9;

 VAR_7->rss_size = VAR_6->nic.kinfo.rss_size;

 if (VAR_6->pdev->revision >= 0x21) {
  VAR_7->hash_algo = VAR_0;
  FUNC_4(VAR_7->rss_hash_key, VAR_5,
         VAR_4);

  VAR_8 = FUNC_0(VAR_6, VAR_7->hash_algo,
            VAR_7->rss_hash_key);
  if (VAR_8)
   return VAR_8;

  VAR_7->rss_tuple_sets.ipv4_tcp_en =
     VAR_2;
  VAR_7->rss_tuple_sets.ipv4_udp_en =
     VAR_2;
  VAR_7->rss_tuple_sets.ipv4_sctp_en =
     VAR_3;
  VAR_7->rss_tuple_sets.ipv4_fragment_en =
     VAR_2;
  VAR_7->rss_tuple_sets.ipv6_tcp_en =
     VAR_2;
  VAR_7->rss_tuple_sets.ipv6_udp_en =
     VAR_2;
  VAR_7->rss_tuple_sets.ipv6_sctp_en =
     VAR_3;
  VAR_7->rss_tuple_sets.ipv6_fragment_en =
     VAR_2;

  VAR_8 = FUNC_2(VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;

 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_7->rss_indirection_tbl[VAR_9] = VAR_9 % VAR_7->rss_size;

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_3(VAR_6, VAR_7->rss_size);
}
