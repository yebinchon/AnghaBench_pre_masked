
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int * effects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvme_ctrl*,int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_ctrl *VAR_3)
{
 int VAR_4;

 if (!VAR_3->effects)
  VAR_3->effects = FUNC_1(sizeof(*VAR_3->effects), VAR_0);

 if (!VAR_3->effects)
  return 0;

 VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_1, 0,
   VAR_3->effects, sizeof(*VAR_3->effects), 0);
 if (VAR_4) {
  FUNC_0(VAR_3->effects);
  VAR_3->effects = ((void*)0);
 }
 return VAR_4;
}
