
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ep_list; TYPE_3__* ep0; } ;
struct isp1760_udc {TYPE_1__ gadget; struct isp1760_ep* ep; } ;
struct TYPE_5__ {int type_control; int dir_in; int dir_out; int type_iso; int type_bulk; int type_int; } ;
struct TYPE_6__ {TYPE_2__ caps; int ep_list; int name; int * ops; } ;
struct isp1760_ep {unsigned int addr; int maxpacket; TYPE_3__ ep; int name; int * desc; int queue; struct isp1760_udc* udc; } ;


 unsigned int FUNC_0 (struct isp1760_ep*) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,unsigned int,char*) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_5(struct isp1760_udc *VAR_3)
{
 unsigned int VAR_4;

 FUNC_1(&VAR_3->gadget.ep_list);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->ep); ++VAR_4) {
  struct isp1760_ep *VAR_5 = &VAR_3->ep[VAR_4];
  unsigned int VAR_6 = (VAR_4 + 1) / 2;
  bool VAR_7 = !(VAR_4 & 1);

  VAR_5->udc = VAR_3;

  FUNC_1(&VAR_5->queue);

  VAR_5->addr = (VAR_6 && VAR_7 ? VAR_0 : VAR_1)
    | VAR_6;
  VAR_5->desc = ((void*)0);

  FUNC_3(VAR_5->name, "ep%u%s", VAR_6,
   VAR_6 ? (VAR_7 ? "in" : "out") : "");

  VAR_5->ep.ops = &VAR_2;
  VAR_5->ep.name = VAR_5->name;






  if (VAR_6 == 0) {
   FUNC_4(&VAR_5->ep, 64);
   VAR_5->ep.caps.type_control = 1;
   VAR_5->ep.caps.dir_in = 1;
   VAR_5->ep.caps.dir_out = 1;
   VAR_5->maxpacket = 64;
   VAR_3->gadget.ep0 = &VAR_5->ep;
  } else {
   FUNC_4(&VAR_5->ep, 512);
   VAR_5->ep.caps.type_iso = 1;
   VAR_5->ep.caps.type_bulk = 1;
   VAR_5->ep.caps.type_int = 1;
   VAR_5->maxpacket = 0;
   FUNC_2(&VAR_5->ep.ep_list, &VAR_3->gadget.ep_list);
  }

  if (VAR_7)
   VAR_5->ep.caps.dir_in = 1;
  else
   VAR_5->ep.caps.dir_out = 1;
 }
}
