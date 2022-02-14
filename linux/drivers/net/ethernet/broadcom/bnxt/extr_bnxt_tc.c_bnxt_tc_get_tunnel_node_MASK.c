
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_params {int dummy; } ;
struct rhashtable {int dummy; } ;
struct ip_tunnel_key {int dummy; } ;
struct bnxt_tc_tunnel_node {int refcount; int node; int tunnel_handle; struct ip_tunnel_key key; } ;
struct bnxt {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt_tc_tunnel_node*,int ) ;
 struct bnxt_tc_tunnel_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct rhashtable*,int *,struct rhashtable_params) ;
 struct bnxt_tc_tunnel_node* FUNC_4 (struct rhashtable*,struct ip_tunnel_key*,struct rhashtable_params) ;

__attribute__((used)) static struct bnxt_tc_tunnel_node *
FUNC_5(struct bnxt *VAR_4, struct rhashtable *VAR_5,
   struct rhashtable_params *VAR_6,
   struct ip_tunnel_key *VAR_7)
{
 struct bnxt_tc_tunnel_node *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_5, VAR_7, *VAR_6);
 if (!VAR_8) {
  VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
  if (!VAR_8) {
   VAR_9 = -VAR_0;
   goto err;
  }

  VAR_8->key = *VAR_7;
  VAR_8->tunnel_handle = VAR_2;
  VAR_9 = FUNC_3(VAR_5, &VAR_8->node,
         *VAR_6);
  if (VAR_9) {
   FUNC_0(VAR_8, VAR_3);
   goto err;
  }
 }
 VAR_8->refcount++;
 return VAR_8;
err:
 FUNC_2(VAR_4->dev, "error rc=%d", VAR_9);
 return ((void*)0);
}
