
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int tag; } ;
struct nvme_ctrl {int device; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_1__* FUNC_3 (struct request*) ;

bool FUNC_4(struct request *VAR_1, void *VAR_2, bool VAR_3)
{
 FUNC_2(((struct nvme_ctrl *) VAR_2)->device,
    "Cancelling I/O %d", VAR_1->tag);


 if (FUNC_1(VAR_1))
  return 1;

 FUNC_3(VAR_1)->status = VAR_0;
 FUNC_0(VAR_1);
 return 1;
}
