
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcp_ipv6_ext; int ipv6_ext; int tcp_ipv6; int ipv6; int tcp_ipv4; int ipv4; int udp_ipv6; int udp_ipv4; } ;
struct hinic_dev {TYPE_1__ rss_type; int rss_hash_engine; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hinic_dev *VAR_1)
{
 VAR_1->rss_hash_engine = VAR_0;
 VAR_1->rss_type.tcp_ipv6_ext = 1;
 VAR_1->rss_type.ipv6_ext = 1;
 VAR_1->rss_type.tcp_ipv6 = 1;
 VAR_1->rss_type.ipv6 = 1;
 VAR_1->rss_type.tcp_ipv4 = 1;
 VAR_1->rss_type.ipv4 = 1;
 VAR_1->rss_type.udp_ipv6 = 1;
 VAR_1->rss_type.udp_ipv4 = 1;
}
