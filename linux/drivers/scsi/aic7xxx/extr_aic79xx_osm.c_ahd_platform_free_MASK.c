
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_target {int dummy; } ;
struct ahd_softc {scalar_t__* tags; TYPE_2__* platform_data; TYPE_1__* bshs; } ;
struct TYPE_4__ {scalar_t__ irq; scalar_t__ host; int mem_busaddr; struct scsi_target** starget; } ;
struct TYPE_3__ {scalar_t__ ioport; int * maddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,struct ahd_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;

void
FUNC_6(struct ahd_softc *VAR_4)
{
 struct scsi_target *VAR_5;
 int VAR_6;

 if (VAR_4->platform_data != ((void*)0)) {

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_5 = VAR_4->platform_data->starget[VAR_6];
   if (VAR_5 != ((void*)0)) {
    VAR_4->platform_data->starget[VAR_6] = ((void*)0);
   }
  }

  if (VAR_4->platform_data->irq != VAR_0)
   FUNC_0(VAR_4->platform_data->irq, VAR_4);
  if (VAR_4->tags[0] == VAR_3
   && VAR_4->bshs[0].ioport != 0)
   FUNC_4(VAR_4->bshs[0].ioport, 256);
  if (VAR_4->tags[1] == VAR_3
   && VAR_4->bshs[1].ioport != 0)
   FUNC_4(VAR_4->bshs[1].ioport, 256);
  if (VAR_4->tags[0] == VAR_2
   && VAR_4->bshs[0].maddr != ((void*)0)) {
   FUNC_1(VAR_4->bshs[0].maddr);
   FUNC_3(VAR_4->platform_data->mem_busaddr,
        0x1000);
  }
  if (VAR_4->platform_data->host)
   FUNC_5(VAR_4->platform_data->host);

  FUNC_2(VAR_4->platform_data);
 }
}
