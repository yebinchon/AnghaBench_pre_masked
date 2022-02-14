
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct musb_hw_ep {int max_packet_sz_tx; int max_packet_sz_rx; scalar_t__ is_shared_fifo; } ;
struct TYPE_5__ {int type_control; int type_iso; int type_bulk; int type_int; int dir_in; int dir_out; } ;
struct TYPE_6__ {TYPE_2__ caps; int ep_list; int * ops; int name; } ;
struct musb_ep {int current_epnum; int is_in; TYPE_3__ end_point; int name; int req_list; struct musb_hw_ep* hw_ep; struct musb* musb; } ;
struct TYPE_4__ {int ep_list; TYPE_3__* ep0; } ;
struct musb {TYPE_1__ g; struct musb_hw_ep* endpoints; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct musb_ep*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int,char*) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_5(struct musb *VAR_2, struct musb_ep *VAR_3, u8 VAR_4, int VAR_5)
{
 struct musb_hw_ep *VAR_6 = VAR_2->endpoints + VAR_4;

 FUNC_2(VAR_3, 0, sizeof *VAR_3);

 VAR_3->current_epnum = VAR_4;
 VAR_3->musb = VAR_2;
 VAR_3->hw_ep = VAR_6;
 VAR_3->is_in = VAR_5;

 FUNC_0(&VAR_3->req_list);

 FUNC_3(VAR_3->name, "ep%d%s", VAR_4,
   (!VAR_4 || VAR_6->is_shared_fifo) ? "" : (
    VAR_5 ? "in" : "out"));
 VAR_3->end_point.name = VAR_3->name;
 FUNC_0(&VAR_3->end_point.ep_list);
 if (!VAR_4) {
  FUNC_4(&VAR_3->end_point, 64);
  VAR_3->end_point.caps.type_control = 1;
  VAR_3->end_point.ops = &VAR_1;
  VAR_2->g.ep0 = &VAR_3->end_point;
 } else {
  if (VAR_5)
   FUNC_4(&VAR_3->end_point, VAR_6->max_packet_sz_tx);
  else
   FUNC_4(&VAR_3->end_point, VAR_6->max_packet_sz_rx);
  VAR_3->end_point.caps.type_iso = 1;
  VAR_3->end_point.caps.type_bulk = 1;
  VAR_3->end_point.caps.type_int = 1;
  VAR_3->end_point.ops = &VAR_0;
  FUNC_1(&VAR_3->end_point.ep_list, &VAR_2->g.ep_list);
 }

 if (!VAR_4 || VAR_6->is_shared_fifo) {
  VAR_3->end_point.caps.dir_in = 1;
  VAR_3->end_point.caps.dir_out = 1;
 } else if (VAR_5)
  VAR_3->end_point.caps.dir_in = 1;
 else
  VAR_3->end_point.caps.dir_out = 1;
}
