
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dlm_reco_node_data {int node_num; int list; int state; } ;
struct TYPE_2__ {int node_data; int node_map; } ;
struct dlm_ctxt {TYPE_1__ reco; int spinlock; int domain_map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dlm_ctxt*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 struct dlm_reco_node_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dlm_ctxt *VAR_5, u8 VAR_6)
{
 int VAR_7=0;
 struct dlm_reco_node_data *VAR_8;

 FUNC_6(&VAR_5->spinlock);
 FUNC_5(VAR_5->reco.node_map, VAR_5->domain_map, sizeof(VAR_5->domain_map));


 FUNC_7(&VAR_5->spinlock);

 while (1) {
  VAR_7 = FUNC_2 (VAR_5->reco.node_map, VAR_3, VAR_7);
  if (VAR_7 >= VAR_3) {
   break;
  }
  FUNC_0(VAR_7 == VAR_6);

  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
  if (!VAR_8) {
   FUNC_1(VAR_5);
   return -VAR_1;
  }
  VAR_8->node_num = VAR_7;
  VAR_8->state = VAR_0;
  FUNC_6(&VAR_4);
  FUNC_4(&VAR_8->list, &VAR_5->reco.node_data);
  FUNC_7(&VAR_4);
  VAR_7++;
 }

 return 0;
}
