
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int ops_mutex; scalar_t__ functions; int * fake_cis; int dev; } ;


 int FUNC_0 (struct pcmcia_socket*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_socket *VAR_0)
{
 if (!FUNC_7(VAR_0))
  return 0;

 FUNC_1(&VAR_0->dev, "cis mismatch - different card\n");


 FUNC_6(VAR_0);

 FUNC_3(&VAR_0->ops_mutex);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->fake_cis);
 VAR_0->fake_cis = ((void*)0);
 VAR_0->functions = 0;
 FUNC_4(&VAR_0->ops_mutex);


 FUNC_5(VAR_0);
 return 0;
}
