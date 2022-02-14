
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct brcmf_msgbuf {int flow; int * flowring_dma_handle; TYPE_3__* drvr; TYPE_1__** flowrings; } ;
struct TYPE_6__ {TYPE_2__* bus_if; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {void* buf_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int,void*,int ) ;

__attribute__((used)) static void
FUNC_3(struct brcmf_msgbuf *VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 void *VAR_6;

 FUNC_0(VAR_2, "Removing flowring %d\n", VAR_4);

 VAR_5 = VAR_1 * VAR_0;
 VAR_6 = VAR_3->flowrings[VAR_4]->buf_addr;
 FUNC_2(VAR_3->drvr->bus_if->dev, VAR_5, VAR_6,
     VAR_3->flowring_dma_handle[VAR_4]);

 FUNC_1(VAR_3->flow, VAR_4);
}
