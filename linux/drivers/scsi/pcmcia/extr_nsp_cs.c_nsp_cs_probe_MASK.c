
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {struct pcmcia_device* priv; struct pcmcia_device* p_dev; } ;
typedef struct pcmcia_device scsi_info_t ;
struct TYPE_3__ {struct pcmcia_device* ScsiInfo; } ;
typedef TYPE_1__ nsp_hw_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcmcia_device* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_4)
{
 scsi_info_t *VAR_5;
 nsp_hw_data *VAR_6 = &VAR_3;
 int VAR_7;

 FUNC_2(VAR_2, "in");


 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0)) { return -VAR_0; }
 VAR_5->p_dev = VAR_4;
 VAR_4->priv = VAR_5;
 VAR_6->ScsiInfo = VAR_5;

 FUNC_2(VAR_2, "info=0x%p", VAR_5);

 VAR_7 = FUNC_1(VAR_4);

 FUNC_2(VAR_2, "link=0x%p", VAR_4);
 return VAR_7;
}
