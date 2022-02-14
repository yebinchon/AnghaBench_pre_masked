
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; TYPE_2__* priv; } ;
struct TYPE_4__ {int manf_id; } ;
typedef TYPE_2__ scsi_info_t ;
struct TYPE_3__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 scsi_info_t *VAR_3 = VAR_2->priv;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  return VAR_4;

 if ((VAR_3->manf_id == VAR_0) ||
     (VAR_3->manf_id == VAR_1) ||
     (VAR_3->manf_id == 0x0098)) {
  FUNC_0(0x80, VAR_2->resource[0]->start + 0xd);
  FUNC_0(0x24, VAR_2->resource[0]->start + 0x9);
  FUNC_0(0x04, VAR_2->resource[0]->start + 0xd);
 }

 FUNC_2(((void*)0));

 return 0;
}
