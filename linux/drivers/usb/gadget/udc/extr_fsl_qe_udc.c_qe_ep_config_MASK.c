
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int ep_list; } ;
struct qe_udc {TYPE_2__ gadget; struct qe_ep* eps; } ;
struct TYPE_4__ {int type_control; int type_iso; int type_bulk; int type_int; int dir_in; int dir_out; } ;
struct TYPE_6__ {int ep_list; int * desc; int * ops; TYPE_1__ caps; int name; } ;
struct qe_ep {int stopped; int dir; TYPE_2__* gadget; TYPE_3__ ep; int queue; scalar_t__ has_data; int state; int * tx_req; int * txframe; int * rxframe; scalar_t__ init; scalar_t__ last; scalar_t__ sent; scalar_t__ epnum; int name; struct qe_udc* udc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,unsigned short) ;

__attribute__((used)) static int FUNC_4(struct qe_udc *VAR_3, unsigned char VAR_4)
{
 struct qe_ep *VAR_5 = &VAR_3->eps[VAR_4];

 VAR_5->udc = VAR_3;
 FUNC_2(VAR_5->name, VAR_1[VAR_4]);
 VAR_5->ep.name = VAR_1[VAR_4];

 if (VAR_4 == 0) {
  VAR_5->ep.caps.type_control = 1;
 } else {
  VAR_5->ep.caps.type_iso = 1;
  VAR_5->ep.caps.type_bulk = 1;
  VAR_5->ep.caps.type_int = 1;
 }

 VAR_5->ep.caps.dir_in = 1;
 VAR_5->ep.caps.dir_out = 1;

 VAR_5->ep.ops = &VAR_2;
 VAR_5->stopped = 1;
 FUNC_3(&VAR_5->ep, (unsigned short) ~0);
 VAR_5->ep.desc = ((void*)0);
 VAR_5->dir = 0xff;
 VAR_5->epnum = (u8)VAR_4;
 VAR_5->sent = 0;
 VAR_5->last = 0;
 VAR_5->init = 0;
 VAR_5->rxframe = ((void*)0);
 VAR_5->txframe = ((void*)0);
 VAR_5->tx_req = ((void*)0);
 VAR_5->state = VAR_0;
 VAR_5->has_data = 0;


 FUNC_0(&VAR_5->queue);


 if (VAR_4 != 0)
  FUNC_1(&VAR_5->ep.ep_list, &VAR_3->gadget.ep_list);

 VAR_5->gadget = &VAR_3->gadget;

 return 0;
}
