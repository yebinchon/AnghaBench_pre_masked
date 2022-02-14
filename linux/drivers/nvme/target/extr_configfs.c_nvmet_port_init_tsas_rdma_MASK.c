
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cms; int prtype; int qptype; } ;
struct TYPE_5__ {TYPE_1__ rdma; } ;
struct TYPE_6__ {TYPE_2__ tsas; } ;
struct nvmet_port {TYPE_3__ disc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct nvmet_port *VAR_3)
{
 VAR_3->disc_addr.tsas.rdma.qptype = VAR_2;
 VAR_3->disc_addr.tsas.rdma.prtype = VAR_1;
 VAR_3->disc_addr.tsas.rdma.cms = VAR_0;
}
