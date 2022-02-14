
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int config_regs; TYPE_1__* priv; int dev; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ scsi_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_5)
{
    scsi_info_t *VAR_6;

    FUNC_1(&VAR_5->dev, "aha152x_attach()\n");


    VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_3);
    if (!VAR_6) return -VAR_2;
    VAR_6->p_dev = VAR_5;
    VAR_5->priv = VAR_6;

    VAR_5->config_flags |= VAR_1 | VAR_0;
    VAR_5->config_regs = VAR_4;

    return FUNC_0(VAR_5);
}
