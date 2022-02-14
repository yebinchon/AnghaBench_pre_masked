
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t node; } ;
struct TYPE_4__ {int node; } ;
struct scifmsg {size_t* payload; TYPE_2__ dst; TYPE_1__ src; int uop; } ;
struct scif_dev {int node_remove_ack_pending; size_t node; int exit_ack_pending; } ;
struct TYPE_6__ {int nodeid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct scif_dev* VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (struct scif_dev*,struct scifmsg*) ;

void FUNC_1(struct scif_dev *VAR_5)
{
 struct scifmsg VAR_6;

 if (VAR_5->node_remove_ack_pending) {
  VAR_6.uop = VAR_2;
  VAR_6.src.node = VAR_4.nodeid;
  VAR_6.dst.node = VAR_1;
  VAR_6.payload[0] = VAR_5->node;
  FUNC_0(&VAR_3[VAR_1], &VAR_6);
  VAR_5->node_remove_ack_pending = 0;
 }
 if (VAR_5->exit_ack_pending) {
  VAR_6.uop = VAR_0;
  VAR_6.src.node = VAR_4.nodeid;
  VAR_6.dst.node = VAR_5->node;
  FUNC_0(VAR_5, &VAR_6);
  VAR_5->exit_ack_pending = 0;
 }
}
