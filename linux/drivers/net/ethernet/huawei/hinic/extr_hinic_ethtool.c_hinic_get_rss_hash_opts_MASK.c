
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rss_type {int udp_ipv6; int udp_ipv4; int tcp_ipv6; int tcp_ipv4; int member_0; } ;
struct hinic_dev {int flags; int rss_tmpl_idx; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct hinic_dev*,int ,struct hinic_rss_type*) ;

__attribute__((used)) static int FUNC_1(struct hinic_dev *VAR_6,
       struct ethtool_rxnfc *VAR_7)
{
 struct hinic_rss_type VAR_8 = { 0 };
 int VAR_9;

 VAR_7->data = 0;

 if (!(VAR_6->flags & VAR_1))
  return 0;

 VAR_9 = FUNC_0(VAR_6, VAR_6->rss_tmpl_idx,
     &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7->data = VAR_3 | VAR_2;
 switch (VAR_7->flow_type) {
 case 131:
  if (VAR_8.tcp_ipv4)
   VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 130:
  if (VAR_8.tcp_ipv6)
   VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 129:
  if (VAR_8.udp_ipv4)
   VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 128:
  if (VAR_8.udp_ipv6)
   VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 133:
 case 132:
  break;
 default:
  VAR_7->data = 0;
  return -VAR_0;
 }

 return 0;
}
