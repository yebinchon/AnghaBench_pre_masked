
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_timing {int io; int attr; int mem; } ;
struct soc_pcmcia_socket {int nr; int clk; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct soc_pcmcia_socket*,struct soc_pcmcia_timing*) ;
 int FUNC_6 (char*,char*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct soc_pcmcia_socket *VAR_1, char *VAR_2)
{
 struct soc_pcmcia_timing VAR_3;
 unsigned int VAR_4 = FUNC_3(VAR_1->clk) / 1000;
 unsigned long VAR_5 = VAR_0;
 char *VAR_6 = VAR_2;

 FUNC_5(VAR_1, &VAR_3);

 VAR_6+=FUNC_6(VAR_6, "I/O      : %uns (%uns)\n", VAR_3.io,
     FUNC_4(VAR_4, FUNC_1(VAR_5, VAR_1->nr)));

 VAR_6+=FUNC_6(VAR_6, "attribute: %uns (%uns)\n", VAR_3.attr,
     FUNC_4(VAR_4, FUNC_0(VAR_5, VAR_1->nr)));

 VAR_6+=FUNC_6(VAR_6, "common   : %uns (%uns)\n", VAR_3.mem,
     FUNC_4(VAR_4, FUNC_2(VAR_5, VAR_1->nr)));

 return VAR_6 - VAR_2;
}
