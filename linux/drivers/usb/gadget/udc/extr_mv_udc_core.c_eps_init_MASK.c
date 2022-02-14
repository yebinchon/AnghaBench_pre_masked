
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ep_list; } ;
struct mv_udc {int max_eps; int * ep_dqh; TYPE_2__ gadget; struct mv_ep* eps; } ;
struct TYPE_4__ {int type_control; int dir_in; int dir_out; int type_iso; int type_bulk; int type_int; } ;
struct TYPE_6__ {int ep_list; int * ops; TYPE_1__ caps; int name; int * desc; } ;
struct mv_ep {int ep_num; int * dqh; TYPE_3__ ep; int queue; scalar_t__ stopped; int name; struct mv_udc* udc; int direction; int ep_type; scalar_t__ wedge; } ;
typedef int name ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_3__*,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct mv_udc *VAR_6)
{
 struct mv_ep *VAR_7;
 char VAR_8[14];
 int VAR_9;


 VAR_7 = &VAR_6->eps[0];
 VAR_7->udc = VAR_6;
 FUNC_3(VAR_7->name, "ep0", sizeof(VAR_7->name));
 VAR_7->ep.name = VAR_7->name;
 VAR_7->ep.ops = &VAR_5;
 VAR_7->wedge = 0;
 VAR_7->stopped = 0;
 FUNC_4(&VAR_7->ep, VAR_0);
 VAR_7->ep.caps.type_control = 1;
 VAR_7->ep.caps.dir_in = 1;
 VAR_7->ep.caps.dir_out = 1;
 VAR_7->ep_num = 0;
 VAR_7->ep.desc = &VAR_4;
 FUNC_0(&VAR_7->queue);

 VAR_7->ep_type = VAR_3;


 for (VAR_9 = 2; VAR_9 < VAR_6->max_eps * 2; VAR_9++) {
  VAR_7 = &VAR_6->eps[VAR_9];
  if (VAR_9 % 2) {
   FUNC_2(VAR_8, sizeof(VAR_8), "ep%din", VAR_9 / 2);
   VAR_7->direction = VAR_1;
   VAR_7->ep.caps.dir_in = 1;
  } else {
   FUNC_2(VAR_8, sizeof(VAR_8), "ep%dout", VAR_9 / 2);
   VAR_7->direction = VAR_2;
   VAR_7->ep.caps.dir_out = 1;
  }
  VAR_7->udc = VAR_6;
  FUNC_3(VAR_7->name, VAR_8, sizeof(VAR_7->name));
  VAR_7->ep.name = VAR_7->name;

  VAR_7->ep.caps.type_iso = 1;
  VAR_7->ep.caps.type_bulk = 1;
  VAR_7->ep.caps.type_int = 1;

  VAR_7->ep.ops = &VAR_5;
  VAR_7->stopped = 0;
  FUNC_4(&VAR_7->ep, (unsigned short) ~0);
  VAR_7->ep_num = VAR_9 / 2;

  FUNC_0(&VAR_7->queue);
  FUNC_1(&VAR_7->ep.ep_list, &VAR_6->gadget.ep_list);

  VAR_7->dqh = &VAR_6->ep_dqh[VAR_9];
 }

 return 0;
}
