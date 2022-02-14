
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct local_info* priv; int dev; } ;
struct local_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int *,char*) ;
 struct local_info* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 struct local_info *VAR_3;

 FUNC_1(&VAR_2->dev, "atmel_attach()\n");


 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->priv = VAR_3;

 return FUNC_0(VAR_2);
}
