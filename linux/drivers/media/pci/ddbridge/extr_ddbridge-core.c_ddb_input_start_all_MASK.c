
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ddb_output {TYPE_1__* port; } ;
struct ddb_input {struct ddb_output* redo; } ;
struct TYPE_2__ {struct ddb_input** input; } ;


 int FUNC_0 (struct ddb_input*) ;
 int FUNC_1 (struct ddb_output*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ddb_input *VAR_1)
{
 struct ddb_input *VAR_2 = VAR_1;
 struct ddb_output *VAR_3;

 FUNC_2(&VAR_0);
 while (VAR_2 && (VAR_3 = VAR_2->redo)) {
  FUNC_1(VAR_3);
  VAR_2 = VAR_3->port->input[0];
  if (VAR_2)
   FUNC_0(VAR_2);
 }
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0);
}
