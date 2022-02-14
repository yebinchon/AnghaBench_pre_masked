
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ddb_output {TYPE_2__* dma; } ;
struct ddb_input {int dma; TYPE_1__* port; } ;
struct TYPE_4__ {int stat; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ddb_output *VAR_0,
        struct ddb_input *VAR_1)
{
 FUNC_1(VAR_1->port->dev,
    VAR_0->dma->stat, FUNC_0(VAR_1->dma));
}
