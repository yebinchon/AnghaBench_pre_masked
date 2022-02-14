
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_params {int dummy; } ;
struct rhashtable {int dummy; } ;
struct bnxt_tc_tunnel_node {scalar_t__ refcount; int node; } ;
struct bnxt {int dev; } ;


 int FUNC_0 (struct bnxt_tc_tunnel_node*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct rhashtable*,int *,struct rhashtable_params) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_1,
       struct rhashtable *VAR_2,
       struct rhashtable_params *VAR_3,
       struct bnxt_tc_tunnel_node *VAR_4)
{
 int VAR_5;

 if (--VAR_4->refcount == 0) {
  VAR_5 = FUNC_2(VAR_2, &VAR_4->node,
          *VAR_3);
  if (VAR_5) {
   FUNC_1(VAR_1->dev, "rhashtable_remove_fast rc=%d", VAR_5);
   VAR_5 = -1;
  }
  FUNC_0(VAR_4, VAR_0);
  return VAR_5;
 } else {
  return VAR_4->refcount;
 }
}
