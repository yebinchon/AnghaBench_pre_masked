
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ns {int ref; } ;
struct nvmet_ctrl {int dummy; } ;
typedef int __le32 ;


 struct nvmet_ns* FUNC_0 (struct nvmet_ctrl*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct nvmet_ns *FUNC_4(struct nvmet_ctrl *VAR_0, __le32 VAR_1)
{
 struct nvmet_ns *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->ref);
 FUNC_3();

 return VAR_2;
}
