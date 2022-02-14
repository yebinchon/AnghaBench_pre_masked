
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm2835_host {scalar_t__ blocks; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ error; } ;


 int FUNC_0 (struct bcm2835_host*) ;

__attribute__((used)) static void FUNC_1(struct bcm2835_host *VAR_0)
{
 if (!VAR_0->data)
  return;
 if ((VAR_0->blocks == 0) || VAR_0->data->error)
  FUNC_0(VAR_0);
}
