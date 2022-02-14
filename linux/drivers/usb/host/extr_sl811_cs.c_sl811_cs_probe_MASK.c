
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_2)
{
 local_info_t *VAR_3;

 VAR_3 = FUNC_0(sizeof(local_info_t), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_3->p_dev = VAR_2;
 VAR_2->priv = VAR_3;

 return FUNC_1(VAR_2);
}
