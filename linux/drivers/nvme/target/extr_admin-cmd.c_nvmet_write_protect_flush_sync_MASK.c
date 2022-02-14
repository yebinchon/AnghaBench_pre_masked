
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvmet_req {TYPE_1__* ns; } ;
struct TYPE_2__ {int nsid; scalar_t__ file; } ;


 scalar_t__ FUNC_0 (struct nvmet_req*) ;
 scalar_t__ FUNC_1 (struct nvmet_req*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static u16 FUNC_3(struct nvmet_req *VAR_0)
{
 u16 VAR_1;

 if (VAR_0->ns->file)
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_2("write protect flush failed nsid: %u\n", VAR_0->ns->nsid);
 return VAR_1;
}
