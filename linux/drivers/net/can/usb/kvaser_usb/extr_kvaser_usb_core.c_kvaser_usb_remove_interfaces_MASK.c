
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvaser_usb {int nchannels; TYPE_1__** nets; } ;
struct TYPE_2__ {int netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvaser_usb*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvaser_usb *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nchannels; VAR_1++) {
  if (!VAR_0->nets[VAR_1])
   continue;

  FUNC_2(VAR_0->nets[VAR_1]->netdev);
 }

 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->nchannels; VAR_1++) {
  if (!VAR_0->nets[VAR_1])
   continue;

  FUNC_0(VAR_0->nets[VAR_1]->netdev);
 }
}
