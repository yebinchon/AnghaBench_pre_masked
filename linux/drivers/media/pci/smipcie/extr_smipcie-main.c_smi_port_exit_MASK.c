
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_port {scalar_t__ enable; int tasklet; } ;


 int FUNC_0 (struct smi_port*) ;
 int FUNC_1 (struct smi_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct smi_port *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->tasklet);
 FUNC_1(VAR_0);
 VAR_0->enable = 0;
}
