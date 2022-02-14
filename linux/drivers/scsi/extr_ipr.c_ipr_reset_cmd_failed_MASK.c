
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct ipr_ioa_cfg {TYPE_7__* pdev; } ;
struct TYPE_8__ {int * cdb; } ;
struct TYPE_9__ {TYPE_1__ cmd_pkt; } ;
struct TYPE_11__ {int ioasc; } ;
struct TYPE_12__ {TYPE_4__ hdr; } ;
struct TYPE_13__ {TYPE_5__ ioasa; } ;
struct ipr_cmnd {TYPE_3__* hrrq; int queue; TYPE_2__ ioarcb; TYPE_6__ s; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_10__ {int hrrq_free_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_2)
{
 struct ipr_ioa_cfg *VAR_3 = VAR_2->ioa_cfg;
 u32 VAR_4 = FUNC_0(VAR_2->s.ioasa.hdr.ioasc);

 FUNC_1(&VAR_3->pdev->dev,
  "0x%02X failed with IOASC: 0x%08X\n",
  VAR_2->ioarcb.cmd_pkt.cdb[0], VAR_4);

 FUNC_2(VAR_3, VAR_1);
 FUNC_3(&VAR_2->queue, &VAR_2->hrrq->hrrq_free_q);
 return VAR_0;
}
