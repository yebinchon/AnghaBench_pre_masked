
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int class; scalar_t__ p2; scalar_t__ p1; scalar_t__ ins; } ;
struct TYPE_3__ {int datalen; scalar_t__* params; scalar_t__ seq; scalar_t__ slot; int type; } ;
struct pn533_acr122_tx_frame {int datalen; TYPE_2__ apdu; int * data; TYPE_1__ ccid; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, u8 VAR_3)
{
 struct pn533_acr122_tx_frame *VAR_4 = VAR_2;

 VAR_4->ccid.type = VAR_0;

 VAR_4->ccid.datalen = sizeof(VAR_4->apdu) + 1;
 VAR_4->ccid.slot = 0;
 VAR_4->ccid.seq = 0;
 VAR_4->ccid.params[0] = 0;
 VAR_4->ccid.params[1] = 0;
 VAR_4->ccid.params[2] = 0;

 VAR_4->data[0] = VAR_1;
 VAR_4->data[1] = VAR_3;
 VAR_4->datalen = 2;

 VAR_4->apdu.class = 0xFF;
 VAR_4->apdu.ins = 0;
 VAR_4->apdu.p1 = 0;
 VAR_4->apdu.p2 = 0;
}
