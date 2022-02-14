
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_ctrl*,int ,int ) ;
 int FUNC_2 (struct nvme_ctrl*,int ) ;
 int FUNC_3 (struct nvme_ctrl*) ;

__attribute__((used)) static int FUNC_4(struct nvme_ctrl *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(FUNC_3(VAR_1));
 if (VAR_2)
  goto out_free_queue;

 return 0;

out_free_queue:
 FUNC_2(VAR_1, 0);
 return VAR_2;
}
