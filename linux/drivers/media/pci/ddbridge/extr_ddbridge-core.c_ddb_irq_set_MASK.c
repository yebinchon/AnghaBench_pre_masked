
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ddb_irq {void (* handler ) (void*) ;void* data; } ;
struct ddb {TYPE_1__* link; } ;
struct TYPE_2__ {struct ddb_irq* irq; } ;



struct ddb_irq *FUNC_0(struct ddb *VAR_0, u32 VAR_1, u32 VAR_2,
       void (*VAR_3)(void *), void *VAR_4)
{
 struct ddb_irq *VAR_5 = &VAR_0->link[VAR_1].irq[VAR_2];

 VAR_5->handler = VAR_3;
 VAR_5->data = VAR_4;
 return VAR_5;
}
