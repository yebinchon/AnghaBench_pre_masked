
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int ep_list; TYPE_1__* ep0; } ;
struct s3c2410_udc {TYPE_2__ gadget; struct s3c2410_ep* ep; int ep0state; } ;
struct TYPE_6__ {int maxpacket; int * desc; int ep_list; } ;
struct s3c2410_ep {TYPE_3__ ep; int queue; scalar_t__ halted; struct s3c2410_udc* dev; } ;
struct TYPE_4__ {int ep_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_udc *VAR_2)
{
 u32 VAR_3;


 FUNC_0(&VAR_2->gadget.ep_list);
 FUNC_0(&VAR_2->gadget.ep0->ep_list);
 VAR_2->ep0state = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct s3c2410_ep *VAR_4 = &VAR_2->ep[VAR_3];

  if (VAR_3 != 0)
   FUNC_1(&VAR_4->ep.ep_list, &VAR_2->gadget.ep_list);

  VAR_4->dev = VAR_2;
  VAR_4->ep.desc = ((void*)0);
  VAR_4->halted = 0;
  FUNC_0(&VAR_4->queue);
  FUNC_2(&VAR_4->ep, VAR_4->ep.maxpacket);
 }
}
