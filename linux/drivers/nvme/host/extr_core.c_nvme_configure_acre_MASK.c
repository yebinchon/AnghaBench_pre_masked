
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_feat_host_behavior {int acre; } ;
struct nvme_ctrl {int * crdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvme_feat_host_behavior*) ;
 struct nvme_feat_host_behavior* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvme_ctrl*,int ,int ,struct nvme_feat_host_behavior*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct nvme_ctrl *VAR_3)
{
 struct nvme_feat_host_behavior *VAR_4;
 int VAR_5;


 if (!VAR_3->crdt[0])
  return 0;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return 0;

 VAR_4->acre = VAR_1;
 VAR_5 = FUNC_2(VAR_3, VAR_2, 0,
    VAR_4, sizeof(*VAR_4), ((void*)0));
 FUNC_0(VAR_4);
 return VAR_5;
}
