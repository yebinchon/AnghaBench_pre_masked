
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type_control; int dir_in; int dir_out; int type_iso; int type_bulk; int type_int; } ;
struct TYPE_6__ {int maxpacket; TYPE_2__ caps; int * desc; int * ops; int name; int ep_list; } ;
struct s3c_hsudc_ep {int bEndpointAddress; TYPE_3__ ep; scalar_t__ wedge; scalar_t__ stopped; scalar_t__ fifo; int name; struct s3c_hsudc* dev; int queue; } ;
struct TYPE_4__ {int ep_list; } ;
struct s3c_hsudc {scalar_t__ regs; TYPE_1__ gadget; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct s3c_hsudc*,int) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct s3c_hsudc *VAR_4,
    struct s3c_hsudc_ep *VAR_5, int VAR_6)
{
 char *VAR_7;

 if ((VAR_6 % 2) == 0) {
  VAR_7 = "out";
 } else {
  VAR_7 = "in";
  VAR_5->bEndpointAddress = VAR_1;
 }

 VAR_5->bEndpointAddress |= VAR_6;
 if (VAR_6)
  FUNC_4(VAR_5->name, sizeof(VAR_5->name), "ep%d%s", VAR_6, VAR_7);
 else
  FUNC_4(VAR_5->name, sizeof(VAR_5->name), "%s", VAR_2);

 FUNC_0(&VAR_5->queue);
 FUNC_0(&VAR_5->ep.ep_list);
 if (VAR_6)
  FUNC_2(&VAR_5->ep.ep_list, &VAR_4->gadget.ep_list);

 VAR_5->dev = VAR_4;
 VAR_5->ep.name = VAR_5->name;
 FUNC_5(&VAR_5->ep, VAR_6 ? 512 : 64);
 VAR_5->ep.ops = &VAR_3;
 VAR_5->fifo = VAR_4->regs + FUNC_1(VAR_6);
 VAR_5->ep.desc = ((void*)0);
 VAR_5->stopped = 0;
 VAR_5->wedge = 0;

 if (VAR_6 == 0) {
  VAR_5->ep.caps.type_control = 1;
  VAR_5->ep.caps.dir_in = 1;
  VAR_5->ep.caps.dir_out = 1;
 } else {
  VAR_5->ep.caps.type_iso = 1;
  VAR_5->ep.caps.type_bulk = 1;
  VAR_5->ep.caps.type_int = 1;
 }

 if (VAR_6 & 1)
  VAR_5->ep.caps.dir_in = 1;
 else
  VAR_5->ep.caps.dir_out = 1;

 FUNC_3(VAR_4, VAR_6);
 FUNC_6(VAR_5->ep.maxpacket, VAR_4->regs + VAR_0);
}
