
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rss_type; } ;
struct TYPE_5__ {TYPE_1__ kinfo; } ;
struct TYPE_6__ {scalar_t__ ipv6_fragment_en; scalar_t__ ipv4_fragment_en; scalar_t__ ipv6_sctp_en; scalar_t__ ipv6_udp_en; scalar_t__ ipv6_tcp_en; scalar_t__ ipv4_sctp_en; scalar_t__ ipv4_udp_en; scalar_t__ ipv4_tcp_en; } ;
struct hclge_vport {TYPE_2__ nic; TYPE_3__ rss_tuple_sets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hclge_vport *VAR_3)
{
 if (VAR_3->rss_tuple_sets.ipv4_tcp_en ||
     VAR_3->rss_tuple_sets.ipv4_udp_en ||
     VAR_3->rss_tuple_sets.ipv4_sctp_en ||
     VAR_3->rss_tuple_sets.ipv6_tcp_en ||
     VAR_3->rss_tuple_sets.ipv6_udp_en ||
     VAR_3->rss_tuple_sets.ipv6_sctp_en)
  VAR_3->nic.kinfo.rss_type = VAR_1;
 else if (VAR_3->rss_tuple_sets.ipv4_fragment_en ||
   VAR_3->rss_tuple_sets.ipv6_fragment_en)
  VAR_3->nic.kinfo.rss_type = VAR_0;
 else
  VAR_3->nic.kinfo.rss_type = VAR_2;
}
