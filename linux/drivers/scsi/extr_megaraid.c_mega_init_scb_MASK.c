
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int idx; int list; int * cmd; int state; int dma_type; int * epthru; int epthru_dma_addr; int * pthru; int pthru_dma_addr; int * sgl; int * sgl64; int sgl_dma_addr; } ;
typedef TYPE_1__ scb_t ;
typedef int mega_sglist ;
typedef int mega_sgl64 ;
typedef int mega_passthru ;
typedef int mega_ext_passthru ;
struct TYPE_7__ {int max_cmds; int sglen; int free_list; TYPE_3__* dev; TYPE_1__* scb_list; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_3__*,int,int *) ;

__attribute__((used)) static int
FUNC_4(adapter_t *VAR_2)
{
 scb_t *VAR_3;
 int VAR_4;

 for( VAR_4 = 0; VAR_4 < VAR_2->max_cmds; VAR_4++ ) {

  VAR_3 = &VAR_2->scb_list[VAR_4];

  VAR_3->sgl64 = ((void*)0);
  VAR_3->sgl = ((void*)0);
  VAR_3->pthru = ((void*)0);
  VAR_3->epthru = ((void*)0);
 }

 for( VAR_4 = 0; VAR_4 < VAR_2->max_cmds; VAR_4++ ) {

  VAR_3 = &VAR_2->scb_list[VAR_4];

  VAR_3->idx = VAR_4;

  VAR_3->sgl64 = FUNC_3(VAR_2->dev,
    sizeof(mega_sgl64) * VAR_2->sglen,
    &VAR_3->sgl_dma_addr);

  VAR_3->sgl = (mega_sglist *)VAR_3->sgl64;

  if( !VAR_3->sgl ) {
   FUNC_0(&VAR_2->dev->dev, "RAID: Can't allocate sglist\n");
   FUNC_2(VAR_2);
   return -1;
  }

  VAR_3->pthru = FUNC_3(VAR_2->dev,
    sizeof(mega_passthru),
    &VAR_3->pthru_dma_addr);

  if( !VAR_3->pthru ) {
   FUNC_0(&VAR_2->dev->dev, "RAID: Can't allocate passthru\n");
   FUNC_2(VAR_2);
   return -1;
  }

  VAR_3->epthru = FUNC_3(VAR_2->dev,
    sizeof(mega_ext_passthru),
    &VAR_3->epthru_dma_addr);

  if( !VAR_3->epthru ) {
   FUNC_0(&VAR_2->dev->dev,
    "Can't allocate extended passthru\n");
   FUNC_2(VAR_2);
   return -1;
  }


  VAR_3->dma_type = VAR_0;






  VAR_3->state = VAR_1;
  VAR_3->cmd = ((void*)0);
  FUNC_1(&VAR_3->list, &VAR_2->free_list);
 }

 return 0;
}
