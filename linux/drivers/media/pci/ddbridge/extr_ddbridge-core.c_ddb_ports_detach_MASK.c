
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_port {int class; int * input; } ;
struct ddb {int port_num; struct ddb_port* port; } ;





 int FUNC_0 (struct ddb_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ddb*) ;

void FUNC_3(struct ddb *VAR_0)
{
 int VAR_1;
 struct ddb_port *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->port_num; VAR_1++) {
  VAR_2 = &VAR_0->port[VAR_1];

  switch (VAR_2->class) {
  case 128:
   FUNC_1(VAR_2->input[1]);
   FUNC_1(VAR_2->input[0]);
   break;
  case 130:
  case 129:
   FUNC_0(VAR_2);
   break;
  }
 }
 FUNC_2(VAR_0);
}
