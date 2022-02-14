
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int type; int pf_id; int pf_split_id; int vf_id; int pf_split; } ;
struct nfp_eth_table_port {int label_port; int label_subport; int is_split; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct nfp_eth_table_port* FUNC_0 (struct nfp_port*) ;
 struct nfp_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,size_t,char*,int,...) ;

int
FUNC_3(struct net_device *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct nfp_eth_table_port *VAR_5;
 struct nfp_port *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6)
  return -VAR_1;

 switch (VAR_6->type) {
 case 129:
  VAR_5 = FUNC_0(VAR_6);
  if (!VAR_5)
   return -VAR_1;

  if (!VAR_5->is_split)
   VAR_7 = FUNC_2(VAR_3, VAR_4, "p%d", VAR_5->label_port);
  else
   VAR_7 = FUNC_2(VAR_3, VAR_4, "p%ds%d", VAR_5->label_port,
         VAR_5->label_subport);
  break;
 case 130:
  if (!VAR_6->pf_split)
   VAR_7 = FUNC_2(VAR_3, VAR_4, "pf%d", VAR_6->pf_id);
  else
   VAR_7 = FUNC_2(VAR_3, VAR_4, "pf%ds%d", VAR_6->pf_id,
         VAR_6->pf_split_id);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_3, VAR_4, "pf%dvf%d", VAR_6->pf_id, VAR_6->vf_id);
  break;
 default:
  return -VAR_1;
 }

 if (VAR_7 >= VAR_4)
  return -VAR_0;

 return 0;
}
