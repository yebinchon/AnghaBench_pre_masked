
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct TYPE_3__ {int list; } ;
struct nfp_fl_payload_link {TYPE_2__ sub_flow; TYPE_1__ merge_flow; } ;


 int FUNC_0 (struct nfp_fl_payload_link*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfp_fl_payload_link *VAR_0)
{
 FUNC_1(&VAR_0->merge_flow.list);
 FUNC_1(&VAR_0->sub_flow.list);
 FUNC_0(VAR_0);
}
