
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int datalen; } ;
struct pn533_acr122_rx_frame {TYPE_1__ ccid; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0)
{
 struct pn533_acr122_rx_frame *VAR_1 = VAR_0;


 return sizeof(struct pn533_acr122_rx_frame) + VAR_1->ccid.datalen;
}
