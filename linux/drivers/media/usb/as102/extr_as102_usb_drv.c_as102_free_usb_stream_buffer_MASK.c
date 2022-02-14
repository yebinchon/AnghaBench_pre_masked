
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usb_dev; } ;
struct as102_dev_t {int dma_addr; int stream; TYPE_1__ bus_adap; int * stream_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct as102_dev_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(VAR_2->stream_urb[VAR_3]);

 FUNC_0(VAR_2->bus_adap.usb_dev,
   VAR_1 * VAR_0,
   VAR_2->stream,
   VAR_2->dma_addr);
}
