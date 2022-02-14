
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int eth_port; int type; int eth_id; int flags; } ;
struct nfp_eth_table_port {scalar_t__ override_changed; } ;
struct nfp_eth_table {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct nfp_eth_table_port*,int) ;
 struct nfp_eth_table_port* FUNC_2 (struct nfp_eth_table*,int ) ;
 int FUNC_3 (struct nfp_cpp*,char*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct nfp_cpp *VAR_3, struct nfp_port *VAR_4,
   struct nfp_eth_table *VAR_5)
{
 struct nfp_eth_table_port *VAR_6;

 FUNC_0();

 VAR_6 = FUNC_2(VAR_5, VAR_4->eth_id);
 if (!VAR_6) {
  FUNC_4(VAR_1, &VAR_4->flags);
  FUNC_3(VAR_3, "Warning: port #%d not present after reconfig\n",
    VAR_4->eth_id);
  return -VAR_0;
 }
 if (VAR_6->override_changed) {
  FUNC_3(VAR_3, "Port #%d config changed, unregistering. Driver reload required before port will be operational again.\n", VAR_4->eth_id);
  VAR_4->type = VAR_2;
 }

 FUNC_1(VAR_4->eth_port, VAR_6, sizeof(*VAR_6));

 return 0;
}
