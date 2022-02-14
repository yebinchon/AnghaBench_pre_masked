
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int type_control; int type_iso; int type_bulk; int type_int; int dir_in; int dir_out; } ;
struct TYPE_8__ {TYPE_3__ caps; int * ops; int name; int ep_list; } ;
struct dwc2_hsotg_ep {int dir_in; int index; TYPE_4__ ep; int name; struct dwc2_hsotg* parent; int queue; } ;
struct TYPE_6__ {scalar_t__ speed; } ;
struct TYPE_5__ {int ep_list; } ;
struct dwc2_hsotg {TYPE_2__ params; TYPE_1__ gadget; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int,char*,int,char*) ;
 int FUNC_7 (TYPE_4__*,int) ;
 scalar_t__ FUNC_8 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_9(struct dwc2_hsotg *VAR_3,
         struct dwc2_hsotg_ep *VAR_4,
           int VAR_5,
           bool VAR_6)
{
 char *VAR_7;

 if (VAR_5 == 0)
  VAR_7 = "";
 else if (VAR_6)
  VAR_7 = "in";
 else
  VAR_7 = "out";

 VAR_4->dir_in = VAR_6;
 VAR_4->index = VAR_5;

 FUNC_6(VAR_4->name, sizeof(VAR_4->name), "ep%d%s", VAR_5, VAR_7);

 FUNC_3(&VAR_4->queue);
 FUNC_3(&VAR_4->ep.ep_list);


 if (VAR_5)
  FUNC_5(&VAR_4->ep.ep_list, &VAR_3->gadget.ep_list);

 VAR_4->parent = VAR_3;
 VAR_4->ep.name = VAR_4->name;

 if (VAR_3->params.speed == VAR_0)
  FUNC_7(&VAR_4->ep, 8);
 else
  FUNC_7(&VAR_4->ep,
        VAR_5 ? 1024 : VAR_1);
 VAR_4->ep.ops = &VAR_2;

 if (VAR_5 == 0) {
  VAR_4->ep.caps.type_control = 1;
 } else {
  if (VAR_3->params.speed != VAR_0) {
   VAR_4->ep.caps.type_iso = 1;
   VAR_4->ep.caps.type_bulk = 1;
  }
  VAR_4->ep.caps.type_int = 1;
 }

 if (VAR_6)
  VAR_4->ep.caps.dir_in = 1;
 else
  VAR_4->ep.caps.dir_out = 1;






 if (FUNC_8(VAR_3)) {
  u32 VAR_8 = FUNC_2((VAR_5 + 1) % 15);

  if (VAR_6)
   FUNC_4(VAR_3, VAR_8, FUNC_0(VAR_5));
  else
   FUNC_4(VAR_3, VAR_8, FUNC_1(VAR_5));
 }
}
