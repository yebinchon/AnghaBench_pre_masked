
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int iotype; scalar_t__ mapbase; } ;
struct lpuart_port {TYPE_1__ port; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



__attribute__((used)) static dma_addr_t FUNC_0(struct lpuart_port *VAR_2)
{
 switch (VAR_2->port.iotype) {
 case 129:
  return VAR_2->port.mapbase + VAR_0;
 case 128:
  return VAR_2->port.mapbase + VAR_0 + sizeof(u32) - 1;
 }
 return VAR_2->port.mapbase + VAR_1;
}
