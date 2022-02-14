
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns {int disk; int queue; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct nvme_ns *VAR_1)
{




 if (!VAR_1->disk || FUNC_3(VAR_0, &VAR_1->flags))
  return;
 FUNC_1(VAR_1->queue);

 FUNC_0(VAR_1->queue);



 FUNC_2(VAR_1->disk);
}
