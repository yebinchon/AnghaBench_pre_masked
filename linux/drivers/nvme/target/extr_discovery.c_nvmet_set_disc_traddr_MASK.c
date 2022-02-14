
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_req {TYPE_1__* ops; } ;
struct TYPE_4__ {int traddr; } ;
struct nvmet_port {TYPE_2__ disc_addr; } ;
struct TYPE_3__ {int (* disc_traddr ) (struct nvmet_req*,struct nvmet_port*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct nvmet_req*,struct nvmet_port*,char*) ;

__attribute__((used)) static void FUNC_2(struct nvmet_req *VAR_1, struct nvmet_port *VAR_2,
  char *VAR_3)
{
 if (VAR_1->ops->disc_traddr)
  VAR_1->ops->disc_traddr(VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_3, VAR_2->disc_addr.traddr, VAR_0);
}
