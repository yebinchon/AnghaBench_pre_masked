
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct nvmet_ctrl {int cntlid; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *FUNC_3(struct trace_seq *VAR_0, struct nvmet_ctrl *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_0, "%d", VAR_1->cntlid);
 else
  FUNC_1(VAR_0, "_");
 FUNC_2(VAR_0, 0);

 return VAR_2;
}
