
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa; } ;
struct TYPE_10__ {int qos_bw_op; int total_bb_cr; int state; } ;
struct TYPE_7__ {int low; int med; int high; } ;
struct TYPE_8__ {scalar_t__ topology; TYPE_2__ qos_bw; } ;
struct bfa_fcport_s {scalar_t__ topology; TYPE_5__ qos_attr; TYPE_3__ cfg; } ;
struct TYPE_6__ {int low; int med; int high; } ;
struct TYPE_9__ {int qos_bw_op; TYPE_1__ qos_bw; int total_bb_cr; int state; } ;
struct bfa_bsg_qos_attr_s {int status; TYPE_4__ attr; } ;


 struct bfa_fcport_s* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_qos_attr_s *VAR_5 = (struct bfa_bsg_qos_attr_s *)VAR_4;
 struct bfa_fcport_s *VAR_6 = FUNC_0(&VAR_3->bfa);
 unsigned long VAR_7;

 FUNC_2(&VAR_3->bfad_lock, VAR_7);
 if ((VAR_6->cfg.topology == VAR_0) &&
  (VAR_6->topology == VAR_0))
  VAR_5->status = VAR_2;
 else {
  VAR_5->attr.state = VAR_6->qos_attr.state;
  VAR_5->attr.total_bb_cr =
   FUNC_1(VAR_6->qos_attr.total_bb_cr);
  VAR_5->attr.qos_bw.high = VAR_6->cfg.qos_bw.high;
  VAR_5->attr.qos_bw.med = VAR_6->cfg.qos_bw.med;
  VAR_5->attr.qos_bw.low = VAR_6->cfg.qos_bw.low;
  VAR_5->attr.qos_bw_op = VAR_6->qos_attr.qos_bw_op;
  VAR_5->status = VAR_1;
 }
 FUNC_3(&VAR_3->bfad_lock, VAR_7);

 return 0;
}
