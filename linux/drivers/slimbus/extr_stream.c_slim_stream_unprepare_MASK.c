
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_stream_runtime {int num_ports; int * ports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct slim_stream_runtime*,int *) ;

int FUNC_2(struct slim_stream_runtime *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++)
  FUNC_1(VAR_0, &VAR_0->ports[VAR_1]);

 FUNC_0(VAR_0->ports);
 VAR_0->ports = ((void*)0);
 VAR_0->num_ports = 0;

 return 0;
}
