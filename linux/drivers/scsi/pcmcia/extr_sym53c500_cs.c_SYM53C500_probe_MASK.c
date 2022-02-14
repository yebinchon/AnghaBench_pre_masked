
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info_t {struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int config_flags; struct scsi_info_t* priv; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int *,char*) ;
 struct scsi_info_t* FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct pcmcia_device *VAR_4)
{
 struct scsi_info_t *VAR_5;

 FUNC_1(&VAR_4->dev, "SYM53C500_attach()\n");


 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return -VAR_2;
 VAR_5->p_dev = VAR_4;
 VAR_4->priv = VAR_5;
 VAR_4->config_flags |= VAR_1 | VAR_0;

 return FUNC_0(VAR_4);
}
