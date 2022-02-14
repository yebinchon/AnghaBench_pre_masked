
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; struct nfp_fl_payload* flow; } ;
struct TYPE_3__ {int list; struct nfp_fl_payload* flow; } ;
struct nfp_fl_payload_link {TYPE_2__ sub_flow; TYPE_1__ merge_flow; } ;
struct nfp_fl_payload {int linked_flows; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_fl_payload_link* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct nfp_fl_payload *VAR_2,
     struct nfp_fl_payload *VAR_3)
{
 struct nfp_fl_payload_link *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->merge_flow.flow = VAR_2;
 FUNC_1(&VAR_4->merge_flow.list, &VAR_2->linked_flows);
 VAR_4->sub_flow.flow = VAR_3;
 FUNC_1(&VAR_4->sub_flow.list, &VAR_3->linked_flows);

 return 0;
}
