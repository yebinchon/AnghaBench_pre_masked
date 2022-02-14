
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int func; int socket; } ;
struct pcmcia_cfg_mem {int (* conf_check ) (struct pcmcia_device*,void*) ;int parse; void* priv_data; struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_cfg_mem*) ;
 struct pcmcia_cfg_mem* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,int *,struct pcmcia_cfg_mem*,int ) ;
 int VAR_3 ;

int FUNC_3(struct pcmcia_device *VAR_4,
         int (*VAR_5) (struct pcmcia_device *VAR_6,
       void *VAR_7),
         void *VAR_8)
{
 struct pcmcia_cfg_mem *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(sizeof(struct pcmcia_cfg_mem), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_9->p_dev = VAR_4;
 VAR_9->conf_check = VAR_5;
 VAR_9->priv_data = VAR_8;

 VAR_10 = FUNC_2(VAR_4->socket, VAR_4->func,
    VAR_0, &VAR_9->parse,
    VAR_9, VAR_3);

 FUNC_0(VAR_9);
 return VAR_10;
}
