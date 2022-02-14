
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rss_type {int ipv4; int ipv6; } ;
struct hinic_dev {int flags; int rss_tmpl_idx; struct hinic_rss_type rss_type; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct hinic_dev*,int ,struct hinic_rss_type*) ;
 int FUNC_1 (struct hinic_dev*,int ,struct hinic_rss_type) ;
 int FUNC_2 (struct ethtool_rxnfc*,struct hinic_rss_type*) ;

__attribute__((used)) static int FUNC_3(struct hinic_dev *VAR_8,
       struct ethtool_rxnfc *VAR_9)
{
 struct hinic_rss_type *VAR_10 = &VAR_8->rss_type;
 int VAR_11;

 if (!(VAR_8->flags & VAR_3)) {
  VAR_9->data = 0;
  return -VAR_2;
 }




 if (VAR_9->data & ~(VAR_5 | VAR_4 | VAR_6 |
  VAR_7))
  return -VAR_1;


 if (!(VAR_9->data & VAR_5) || !(VAR_9->data & VAR_4))
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_8,
     VAR_8->rss_tmpl_idx, VAR_10);
 if (VAR_11)
  return -VAR_0;

 switch (VAR_9->flow_type) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_11 = FUNC_2(VAR_9, VAR_10);
  if (VAR_11)
   return VAR_11;
  break;
 case 133:
  VAR_10->ipv4 = 1;
  break;
 case 132:
  VAR_10->ipv6 = 1;
  break;
 default:
  return -VAR_1;
 }

 VAR_11 = FUNC_1(VAR_8, VAR_8->rss_tmpl_idx,
     *VAR_10);
 if (VAR_11)
  return -VAR_0;

 return 0;
}
