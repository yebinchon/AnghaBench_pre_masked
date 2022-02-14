
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * base_addr; int crq_token; } ;
struct scsi_info {int state; TYPE_2__ cmd_q; TYPE_1__* dma_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct scsi_info *VAR_3)
{
 FUNC_0(&VAR_3->dma_dev->dev, VAR_3->cmd_q.crq_token,
    VAR_2, VAR_0);
 FUNC_1((unsigned long)VAR_3->cmd_q.base_addr);
 VAR_3->cmd_q.base_addr = ((void*)0);
 VAR_3->state = VAR_1;
}
