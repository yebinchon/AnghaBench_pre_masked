
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_timing {int io; int attr; int mem; } ;
struct soc_pcmcia_socket {int nr; } ;


 int FUNC_0 (int,int ,unsigned int) ;
 int FUNC_1 (int,int ,unsigned int) ;
 int FUNC_2 (int,int ,unsigned int) ;
 int FUNC_3 (struct soc_pcmcia_socket*,struct soc_pcmcia_timing*) ;

__attribute__((used)) static int FUNC_4(struct soc_pcmcia_socket *VAR_0, unsigned int VAR_1)
{
 struct soc_pcmcia_timing VAR_2;
 int VAR_3 = VAR_0->nr;

 FUNC_3(VAR_0, &VAR_2);

 FUNC_2(VAR_3, VAR_2.mem, VAR_1);
 FUNC_0(VAR_3, VAR_2.attr, VAR_1);
 FUNC_1(VAR_3, VAR_2.io, VAR_1);

 return 0;
}
