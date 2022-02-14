
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvobj_priv {int * RtOutPipe; int * Queue2Pipe; } ;
struct adapter {int dummy; } ;


 struct dvobj_priv* FUNC_0 (struct adapter*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 struct dvobj_priv *VAR_1 = FUNC_0(VAR_0);

 VAR_1->Queue2Pipe[0] = VAR_1->RtOutPipe[0];
 VAR_1->Queue2Pipe[1] = VAR_1->RtOutPipe[0];
 VAR_1->Queue2Pipe[2] = VAR_1->RtOutPipe[0];
 VAR_1->Queue2Pipe[3] = VAR_1->RtOutPipe[0];

 VAR_1->Queue2Pipe[4] = VAR_1->RtOutPipe[0];
 VAR_1->Queue2Pipe[5] = VAR_1->RtOutPipe[0];
 VAR_1->Queue2Pipe[6] = VAR_1->RtOutPipe[0];
 VAR_1->Queue2Pipe[7] = VAR_1->RtOutPipe[0];
}
