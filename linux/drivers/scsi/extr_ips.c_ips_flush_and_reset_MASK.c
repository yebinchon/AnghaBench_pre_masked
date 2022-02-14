
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ reserved4; scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved; int state; int command_id; void* op_code; } ;
struct TYPE_18__ {TYPE_1__ flush_cache; } ;
struct TYPE_21__ {TYPE_2__ cmd; void** cdb; int timeout; int scb_busaddr; } ;
typedef TYPE_5__ ips_scb_t ;
struct TYPE_19__ {int (* reset ) (TYPE_6__*) ;} ;
struct TYPE_22__ {TYPE_4__* pcidev; TYPE_3__ func; } ;
typedef TYPE_6__ ips_ha_t ;
typedef int dma_addr_t ;
struct TYPE_20__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,TYPE_5__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(ips_ha_t *VAR_7)
{
 ips_scb_t *VAR_8;
 int VAR_9;
  int VAR_10;
 int VAR_11;
 dma_addr_t VAR_12;


 VAR_8 = FUNC_0(&VAR_7->pcidev->dev, sizeof(ips_scb_t),
   &VAR_12, VAR_0);
 if (VAR_8) {
     FUNC_5(VAR_8, 0, sizeof(ips_scb_t));
     FUNC_2(VAR_7, VAR_8);
     VAR_8->scb_busaddr = VAR_12;

     VAR_8->timeout = VAR_6;
     VAR_8->cdb[0] = VAR_1;

     VAR_8->cmd.flush_cache.op_code = VAR_1;
     VAR_8->cmd.flush_cache.command_id = VAR_2;
     VAR_8->cmd.flush_cache.state = VAR_3;
     VAR_8->cmd.flush_cache.reserved = 0;
     VAR_8->cmd.flush_cache.reserved2 = 0;
     VAR_8->cmd.flush_cache.reserved3 = 0;
     VAR_8->cmd.flush_cache.reserved4 = 0;

     VAR_9 = FUNC_4(VAR_7, VAR_8);

     if (VAR_9 == VAR_5) {
         VAR_10 = 60 * VAR_4;
         VAR_11 = 0;

         while ((VAR_10 > 0) && (!VAR_11)) {
     VAR_11 = FUNC_3(VAR_7);

            FUNC_7(1000);
            VAR_10--;
         }
        }
 }


 (*VAR_7->func.reset) (VAR_7);

 FUNC_1(&VAR_7->pcidev->dev, sizeof(ips_scb_t), VAR_8, VAR_12);
 return;
}
