
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bdc_sr {int * offset; } ;
struct TYPE_2__ {struct bdc_sr* sr_bds; int dqp_index; scalar_t__ dma_addr; } ;
struct bdc {int dev; TYPE_1__ srr; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bdc *VAR_1, u32 VAR_2)
{
 struct bdc_sr *VAR_3;
 dma_addr_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->srr.sr_bds;
 VAR_4 = VAR_1->srr.dma_addr;
 FUNC_0(VAR_1->dev, "bdc_dbg_srr sr:%p dqp_index:%d\n",
      VAR_3, VAR_1->srr.dqp_index);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = &VAR_1->srr.sr_bds[VAR_5];
  FUNC_0(VAR_1->dev, "%llx %08x %08x %08x %08x\n",
     (unsigned long long)VAR_4,
     FUNC_1(VAR_3->offset[0]),
     FUNC_1(VAR_3->offset[1]),
     FUNC_1(VAR_3->offset[2]),
     FUNC_1(VAR_3->offset[3]));
  VAR_4 += sizeof(*VAR_3);
 }
}
