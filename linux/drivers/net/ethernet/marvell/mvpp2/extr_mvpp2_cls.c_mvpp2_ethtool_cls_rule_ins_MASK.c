
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mvpp2_port {int n_rfs_rules; struct mvpp2_ethtool_fs** rfs_rules; } ;
struct TYPE_6__ {int flow_type; scalar_t__ loc; int * flow; } ;
struct mvpp2_ethtool_fs {TYPE_2__ rule; int rxnfc; } ;
struct TYPE_5__ {scalar_t__ location; int flow_type; } ;
struct ethtool_rxnfc {TYPE_1__ fs; int rss_context; } ;
struct ethtool_rx_flow_spec_input {int rss_ctx; TYPE_1__* fs; } ;
struct ethtool_rx_flow_rule {int * rule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ethtool_rx_flow_rule*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ethtool_rx_flow_rule*) ;
 struct ethtool_rx_flow_rule* FUNC_2 (struct ethtool_rx_flow_spec_input*) ;
 int FUNC_3 (struct ethtool_rx_flow_rule*) ;
 int FUNC_4 (struct mvpp2_ethtool_fs*) ;
 struct mvpp2_ethtool_fs* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct ethtool_rxnfc*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct mvpp2_port*,TYPE_2__*) ;
 int FUNC_10 (struct mvpp2_port*,TYPE_2__*) ;

int FUNC_11(struct mvpp2_port *VAR_5,
          struct ethtool_rxnfc *VAR_6)
{
 struct ethtool_rx_flow_spec_input VAR_7 = {};
 struct ethtool_rx_flow_rule *VAR_8;
 struct mvpp2_ethtool_fs *VAR_9, *VAR_10;
 int VAR_11 = 0;

 if (VAR_6->fs.location >= VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_7.fs = &VAR_6->fs;




 if (VAR_6->fs.flow_type & VAR_2)
  VAR_7.rss_ctx = VAR_6->rss_context;

 VAR_8 = FUNC_2(&VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto clean_rule;
 }

 VAR_9->rule.flow = VAR_8->rule;
 VAR_9->rule.flow_type = FUNC_7(VAR_6->fs.flow_type);
 if (VAR_9->rule.flow_type < 0) {
  VAR_11 = VAR_9->rule.flow_type;
  goto clean_rule;
 }

 VAR_11 = FUNC_8(&VAR_9->rule);
 if (VAR_11)
  goto clean_eth_rule;

 VAR_9->rule.loc = VAR_6->fs.location;


 if (VAR_5->rfs_rules[VAR_9->rule.loc]) {
  VAR_10 = VAR_5->rfs_rules[VAR_9->rule.loc];
  VAR_11 = FUNC_9(VAR_5, &VAR_10->rule);
  if (VAR_11)
   goto clean_eth_rule;
  FUNC_4(VAR_10);
  VAR_5->n_rfs_rules--;
 }

 VAR_11 = FUNC_10(VAR_5, &VAR_9->rule);
 if (VAR_11)
  goto clean_eth_rule;

 FUNC_3(VAR_8);
 VAR_9->rule.flow = ((void*)0);

 FUNC_6(&VAR_9->rxnfc, VAR_6, sizeof(*VAR_6));
 VAR_5->rfs_rules[VAR_9->rule.loc] = VAR_9;
 VAR_5->n_rfs_rules++;

 return VAR_11;

clean_eth_rule:
 FUNC_3(VAR_8);
clean_rule:
 FUNC_4(VAR_9);
 return VAR_11;
}
