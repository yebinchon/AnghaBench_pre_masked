
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcmcia_device {int * resource; TYPE_1__* priv; } ;
struct TYPE_5__ {TYPE_3__* host; } ;
typedef TYPE_1__ scsi_info_t ;
struct TYPE_6__ {scalar_t__ MmioAddress; } ;
typedef TYPE_2__ nsp_hw_data ;
struct TYPE_7__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,struct pcmcia_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct pcmcia_device *VAR_2)
{
 scsi_info_t *VAR_3 = VAR_2->priv;
 nsp_hw_data *VAR_4 = ((void*)0);

 if (VAR_3->host == ((void*)0)) {
  FUNC_2(VAR_0, "unexpected card release call.");
 } else {
  VAR_4 = (nsp_hw_data *)VAR_3->host->hostdata;
 }

 FUNC_1(VAR_1, "link=0x%p", VAR_2);


 if (VAR_3->host != ((void*)0)) {
  FUNC_6(VAR_3->host);
 }

 if (FUNC_4(VAR_2->resource[2])) {
  if (VAR_4 != ((void*)0)) {
   FUNC_0((void *)(VAR_4->MmioAddress));
  }
 }
 FUNC_3(VAR_2);

 if (VAR_3->host != ((void*)0)) {
  FUNC_5(VAR_3->host);
 }
}
