
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int datalen; } ;
struct pn533_acr122_rx_frame {int* data; TYPE_1__ ccid; } ;
struct pn533 {int dummy; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, struct pn533 *VAR_1)
{
 struct pn533_acr122_rx_frame *VAR_2 = VAR_0;

 if (VAR_2->ccid.type != 0x83)
  return 0;

 if (!VAR_2->ccid.datalen)
  return 0;

 if (VAR_2->data[VAR_2->ccid.datalen - 2] == 0x63)
  return 0;

 return 1;
}
