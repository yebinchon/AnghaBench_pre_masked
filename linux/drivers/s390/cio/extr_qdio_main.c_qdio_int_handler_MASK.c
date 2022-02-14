
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct subchannel_id {int sch_no; } ;
struct TYPE_7__ {int sch_no; } ;
struct TYPE_6__ {int qdio_int; } ;
struct qdio_irq {int state; TYPE_2__ schid; TYPE_1__ perf_stat; scalar_t__ perf_stat_enabled; } ;
struct TYPE_8__ {int cstat; int dstat; } ;
struct TYPE_9__ {TYPE_3__ cmd; } ;
struct irb {TYPE_4__ scsw; } ;
struct ccw_device {TYPE_5__* private; } ;
struct TYPE_10__ {int wait_q; struct qdio_irq* qdio_data; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct irb*) ;


 int const VAR_0 ;



 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_4 (struct ccw_device*,int,int) ;
 int FUNC_5 (struct ccw_device*,unsigned long,int,int) ;
 int FUNC_6 (struct qdio_irq*) ;
 int FUNC_7 (struct qdio_irq*,struct irb*) ;
 int FUNC_8 (struct qdio_irq*,int const) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct ccw_device *VAR_2, unsigned long VAR_3,
        struct irb *VAR_4)
{
 struct qdio_irq *VAR_5 = VAR_2->private->qdio_data;
 struct subchannel_id VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_3 || !VAR_5) {
  FUNC_3(VAR_2, &VAR_6);
  FUNC_0("qint:%4x", VAR_6.sch_no);
  return;
 }

 if (VAR_5->perf_stat_enabled)
  VAR_5->perf_stat.qdio_int++;

 if (FUNC_1(VAR_4)) {
  FUNC_0("%4x IO error", VAR_5->schid.sch_no);
  FUNC_8(VAR_5, VAR_0);
  FUNC_9(&VAR_2->private->wait_q);
  return;
 }
 FUNC_7(VAR_5, VAR_4);
 VAR_7 = VAR_4->scsw.cmd.cstat;
 VAR_8 = VAR_4->scsw.cmd.dstat;

 switch (VAR_5->state) {
 case 129:
  FUNC_4(VAR_2, VAR_7, VAR_8);
  break;
 case 131:
  FUNC_8(VAR_5, 129);
  break;
 case 130:
 case 132:
  if (VAR_7 & VAR_1) {
   FUNC_6(VAR_5);
   return;
  }
  if (VAR_7 || VAR_8)
   FUNC_5(VAR_2, VAR_3, VAR_7,
         VAR_8);
  break;
 case 128:
  break;
 default:
  FUNC_2(1);
 }
 FUNC_9(&VAR_2->private->wait_q);
}
