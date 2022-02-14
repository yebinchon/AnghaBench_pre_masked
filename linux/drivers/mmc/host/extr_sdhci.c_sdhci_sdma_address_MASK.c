
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {TYPE_1__* data; int bounce_addr; scalar_t__ bounce_buffer; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int sg; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct sdhci_host *VAR_0)
{
 if (VAR_0->bounce_buffer)
  return VAR_0->bounce_addr;
 else
  return FUNC_0(VAR_0->data->sg);
}
