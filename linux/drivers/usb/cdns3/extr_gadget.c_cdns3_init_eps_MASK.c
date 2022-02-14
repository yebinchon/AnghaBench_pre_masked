
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int dir_in; int dir_out; int type_iso; int type_bulk; int type_int; } ;
struct TYPE_8__ {TYPE_3__ caps; int ep_list; int * ops; int max_streams; int name; } ;
struct cdns3_endpoint {int num; int wa2_descmiss_req_list; int deferred_req_list; int pending_req_list; TYPE_4__ endpoint; int name; scalar_t__ flags; int dir; struct cdns3_device* cdns3_dev; } ;
struct TYPE_6__ {int ep_list; } ;
struct cdns3_device {int dev; TYPE_2__ gadget; struct cdns3_endpoint** eps; TYPE_1__* regs; } ;
struct TYPE_5__ {int usb_cap4; int usb_cap3; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cdns3_device*) ;
 int VAR_7 ;
 int FUNC_3 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ,char*,char*) ;
 struct cdns3_endpoint* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,char*,int,char*) ;
 int FUNC_11 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_12(struct cdns3_device *VAR_8)
{
 u32 VAR_9, VAR_10;
 struct cdns3_endpoint *VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14;
 int VAR_15 = 0;
 int VAR_16;


 VAR_9 = FUNC_9(&VAR_8->regs->usb_cap3);
 VAR_10 = FUNC_9(&VAR_8->regs->usb_cap4);

 FUNC_4(VAR_8->dev, "Initializing non-zero endpoints\n");

 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_12 = VAR_16 >> 4;
  VAR_13 = VAR_16 & 0xF;
  VAR_14 = FUNC_0(VAR_16);

  if (!(VAR_9 & VAR_14))
   continue;

  if (VAR_12 && !VAR_13) {
   VAR_8->eps[VAR_16] = VAR_8->eps[0];
   continue;
  }

  VAR_11 = FUNC_7(VAR_8->dev, sizeof(*VAR_11),
           VAR_4);
  if (!VAR_11)
   goto err;


  VAR_11->cdns3_dev = VAR_8;
  VAR_8->eps[VAR_16] = VAR_11;
  VAR_11->num = VAR_13;
  VAR_11->dir = VAR_12 ? VAR_5 : VAR_6;

  if (!VAR_13) {
   VAR_15 = FUNC_3(VAR_8, VAR_11);
   if (VAR_15) {
    FUNC_5(VAR_8->dev, "Failed to init ep0\n");
    goto err;
   }
  } else {
   FUNC_10(VAR_11->name, sizeof(VAR_11->name), "ep%d%s",
     VAR_13, !!VAR_12 ? "in" : "out");
   VAR_11->endpoint.name = VAR_11->name;

   FUNC_11(&VAR_11->endpoint,
         VAR_1);
   VAR_11->endpoint.max_streams = VAR_2;
   VAR_11->endpoint.ops = &VAR_7;
   if (VAR_12)
    VAR_11->endpoint.caps.dir_in = 1;
   else
    VAR_11->endpoint.caps.dir_out = 1;

   if (VAR_10 & VAR_14)
    VAR_11->endpoint.caps.type_iso = 1;

   VAR_11->endpoint.caps.type_bulk = 1;
   VAR_11->endpoint.caps.type_int = 1;

   FUNC_8(&VAR_11->endpoint.ep_list,
          &VAR_8->gadget.ep_list);
  }

  VAR_11->flags = 0;

  FUNC_6(VAR_8->dev, "Initialized  %s support: %s %s\n",
    VAR_11->name,
    VAR_11->endpoint.caps.type_bulk ? "BULK, INT" : "",
    VAR_11->endpoint.caps.type_iso ? "ISO" : "");

  FUNC_1(&VAR_11->pending_req_list);
  FUNC_1(&VAR_11->deferred_req_list);
  FUNC_1(&VAR_11->wa2_descmiss_req_list);
 }

 return 0;
err:
 FUNC_2(VAR_8);
 return -VAR_3;
}
