
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int * priv; } ;
struct TYPE_2__ {int stop; } ;
typedef TYPE_1__ scsi_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int ,char*,struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_1)
{
 FUNC_2(VAR_0, "in, link=0x%p", VAR_1);

 ((scsi_info_t *)VAR_1->priv)->stop = 1;
 FUNC_1(VAR_1);

 FUNC_0(VAR_1->priv);
 VAR_1->priv = ((void*)0);
}
