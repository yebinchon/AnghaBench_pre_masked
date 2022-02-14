
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct TYPE_5__ {int type_control; int dir_in; int dir_out; int type_iso; int type_bulk; int type_int; } ;
struct TYPE_7__ {int* name; int ep_list; int * ops; TYPE_1__ caps; } ;
struct omap_ep {int* name; int bEndpointAddress; int bmAttributes; int double_buf; unsigned int maxpacket; TYPE_3__ ep; TYPE_4__* udc; int iso; int queue; int timer; } ;
struct TYPE_6__ {int ep_list; } ;
struct TYPE_8__ {TYPE_2__ gadget; struct omap_ep* ep; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,unsigned int,unsigned int,char*,unsigned int) ;
 int FUNC_3 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;




 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int VAR_4 ;
 int FUNC_8 (unsigned int,int ) ;
 int VAR_5 ;
 int FUNC_9 (int*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,int ,int ) ;
 TYPE_4__* VAR_6 ;
 int FUNC_12 (TYPE_3__*,unsigned int) ;
 int VAR_7 ;

__attribute__((used)) static unsigned
FUNC_13(char *VAR_8, u8 VAR_9, u8 VAR_10,
  unsigned VAR_11, unsigned VAR_12, int VAR_13)
{
 struct omap_ep *VAR_14;
 u16 VAR_15 = 0;


 VAR_14 = &VAR_6->ep[VAR_9 & 0xf];
 if (VAR_9 & VAR_3)
  VAR_14 += 16;


 FUNC_1(VAR_14->name[0]);


 if (VAR_10 == 128) {
  switch (VAR_12) {
  case 8:
   VAR_15 = 0 << 12;
   break;
  case 16:
   VAR_15 = 1 << 12;
   break;
  case 32:
   VAR_15 = 2 << 12;
   break;
  case 64:
   VAR_15 = 3 << 12;
   break;
  case 128:
   VAR_15 = 4 << 12;
   break;
  case 256:
   VAR_15 = 5 << 12;
   break;
  case 512:
   VAR_15 = 6 << 12;
   break;
  default:
   FUNC_0();
  }
  VAR_15 |= VAR_1;
  VAR_13 = 1;
 } else {




  if (!VAR_7 || FUNC_6())
   VAR_13 = 0;

  switch (VAR_12) {
  case 8:
   VAR_15 = 0 << 12;
   break;
  case 16:
   VAR_15 = 1 << 12;
   break;
  case 32:
   VAR_15 = 2 << 12;
   break;
  case 64:
   VAR_15 = 3 << 12;
   break;
  default:
   FUNC_0();
  }
  if (VAR_13 && VAR_9)
   VAR_15 |= VAR_0;
  FUNC_11(&VAR_14->timer, VAR_5, 0);
 }
 if (VAR_9)
  VAR_15 |= VAR_2;
 FUNC_1(VAR_11 & 0x07);
 VAR_15 |= VAR_11 >> 3;

 FUNC_2("%s addr %02x rxtx %04x maxp %d%s buf %d\n",
  VAR_8, VAR_9, VAR_15, VAR_12, VAR_13 ? "x2" : "", VAR_11);

 if (VAR_9 & VAR_3)
  FUNC_8(VAR_15, FUNC_5(VAR_9 & 0xf));
 else
  FUNC_8(VAR_15, FUNC_4(VAR_9));


 VAR_11 += VAR_12;
 if (VAR_13)
  VAR_11 += VAR_12;
 FUNC_1(VAR_11 > 2048);


 FUNC_1(FUNC_10(VAR_8) >= sizeof VAR_14->name);
 FUNC_9(VAR_14->name, VAR_8, sizeof VAR_14->name);
 FUNC_3(&VAR_14->queue);
 FUNC_3(&VAR_14->iso);
 VAR_14->bEndpointAddress = VAR_9;
 VAR_14->bmAttributes = VAR_10;
 VAR_14->double_buf = VAR_13;
 VAR_14->udc = VAR_6;

 switch (VAR_10) {
 case 130:
  VAR_14->ep.caps.type_control = 1;
  VAR_14->ep.caps.dir_in = 1;
  VAR_14->ep.caps.dir_out = 1;
  break;
 case 128:
  VAR_14->ep.caps.type_iso = 1;
  break;
 case 131:
  VAR_14->ep.caps.type_bulk = 1;
  break;
 case 129:
  VAR_14->ep.caps.type_int = 1;
  break;
 };

 if (VAR_9 & VAR_3)
  VAR_14->ep.caps.dir_in = 1;
 else
  VAR_14->ep.caps.dir_out = 1;

 VAR_14->ep.name = VAR_14->name;
 VAR_14->ep.ops = &VAR_4;
 VAR_14->maxpacket = VAR_12;
 FUNC_12(&VAR_14->ep, VAR_14->maxpacket);
 FUNC_7(&VAR_14->ep.ep_list, &VAR_6->gadget.ep_list);

 return VAR_11;
}
