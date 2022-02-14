
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm2835_host {scalar_t__ blocks; TYPE_1__* data; int dma_desc; } ;
struct TYPE_2__ {int flags; scalar_t__ error; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (struct bcm2835_host*) ;
 int FUNC_3 (struct bcm2835_host*) ;

__attribute__((used)) static void FUNC_4(struct bcm2835_host *VAR_1)
{
 if (FUNC_0(!VAR_1->data)) {
  FUNC_1(VAR_1);
  return;
 }

 if (!VAR_1->dma_desc) {
  FUNC_0(!VAR_1->blocks);
  if (VAR_1->data->error || (--VAR_1->blocks == 0))
   FUNC_2(VAR_1);
  else
   FUNC_3(VAR_1);
 } else if (VAR_1->data->flags & VAR_0) {
  FUNC_2(VAR_1);
 }
}
