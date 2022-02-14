
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cppi_descriptor {int dma; } ;
struct TYPE_2__ {int status; } ;
struct cppi_channel {int * freelist; scalar_t__ is_rndis; struct cppi* controller; TYPE_1__ channel; int * last_processed; int * tail; int * head; } ;
struct cppi {int pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cppi_channel*,struct cppi_descriptor*) ;
 struct cppi_descriptor* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct cppi *VAR_3, struct cppi_channel *VAR_4)
{
 int VAR_5;


 VAR_4->head = ((void*)0);
 VAR_4->tail = ((void*)0);
 VAR_4->last_processed = ((void*)0);
 VAR_4->channel.status = VAR_1;
 VAR_4->controller = VAR_3;
 VAR_4->is_rndis = 0;
 VAR_4->freelist = ((void*)0);


 for (VAR_5 = 0; VAR_5 < VAR_2 + 1; VAR_5++) {
  struct cppi_descriptor *VAR_6;
  dma_addr_t VAR_7;

  VAR_6 = FUNC_1(VAR_3->pool, VAR_0, &VAR_7);
  VAR_6->dma = VAR_7;
  FUNC_0(VAR_4, VAR_6);
 }
}
