
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_port {scalar_t__ stp_state; scalar_t__ member; } ;
struct ksz_device {int port_cnt; int cpu_port; int member; TYPE_1__* dev_ops; struct ksz_port* ports; } ;
struct TYPE_2__ {int (* cfg_port_member ) (struct ksz_device*,int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ksz_device*,int,scalar_t__) ;

void FUNC_1(struct ksz_device *VAR_1, int VAR_2)
{
 struct ksz_port *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->port_cnt; VAR_4++) {
  if (VAR_4 == VAR_2 || VAR_4 == VAR_1->cpu_port)
   continue;
  VAR_3 = &VAR_1->ports[VAR_4];
  if (!(VAR_1->member & (1 << VAR_4)))
   continue;


  if (VAR_3->stp_state == VAR_0 &&
      VAR_3->member != VAR_1->member)
   VAR_1->dev_ops->cfg_port_member(VAR_1, VAR_4, VAR_1->member);
 }
}
