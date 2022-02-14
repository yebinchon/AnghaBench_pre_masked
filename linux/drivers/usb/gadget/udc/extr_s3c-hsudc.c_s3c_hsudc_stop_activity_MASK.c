
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3c_hsudc_ep {int stopped; } ;
struct TYPE_3__ {int speed; } ;
struct s3c_hsudc {struct s3c_hsudc_ep* ep; TYPE_2__* pd; TYPE_1__ gadget; } ;
struct TYPE_4__ {int epnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s3c_hsudc_ep*,int ) ;

__attribute__((used)) static void FUNC_1(struct s3c_hsudc *VAR_2)
{
 struct s3c_hsudc_ep *VAR_3;
 int VAR_4;

 VAR_2->gadget.speed = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_2->pd->epnum; VAR_4++) {
  VAR_3 = &VAR_2->ep[VAR_4];
  VAR_3->stopped = 1;
  FUNC_0(VAR_3, -VAR_0);
 }
}
