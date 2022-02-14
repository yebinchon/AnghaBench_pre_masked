
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ptd {int dw5; int dw2; int dw4; } ;
struct isp1760_qtd {TYPE_2__* urb; } ;
struct isp1760_qh {int dummy; } ;
struct TYPE_4__ {int interval; TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct isp1760_qh *VAR_1,
   struct isp1760_qtd *VAR_2, struct ptd *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 if (VAR_2->urb->dev->speed == VAR_0) {

  VAR_5 = VAR_2->urb->interval >> 3;

  if (VAR_2->urb->interval > 4)
   VAR_4 = 0x01;

  else if (VAR_2->urb->interval > 2)
   VAR_4 = 0x22;
  else if (VAR_2->urb->interval > 1)
   VAR_4 = 0x55;
  else
   VAR_4 = 0xff;
 } else {

  VAR_5 = VAR_2->urb->interval;
  VAR_4 = 0x0f;
  VAR_3->dw5 = 0xff;
 }

 VAR_5 = VAR_5 >> 1;
 VAR_5 &= 0xf8;

 VAR_3->dw2 |= VAR_5;
 VAR_3->dw4 = VAR_4;
}
