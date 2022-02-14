
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int da; int len; } ;
struct rproc_debug_trace {int node; int tfile; struct rproc* rproc; TYPE_1__ trace_mem; } ;
struct device {int dummy; } ;
struct rproc {int num_traces; int traces; struct device dev; } ;
struct fw_rsc_trace {int len; int da; scalar_t__ reserved; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char*,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct rproc_debug_trace*) ;
 struct rproc_debug_trace* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,struct rproc*,struct rproc_debug_trace*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_7(struct rproc *VAR_3, struct fw_rsc_trace *VAR_4,
         int VAR_5, int VAR_6)
{
 struct rproc_debug_trace *VAR_7;
 struct device *VAR_8 = &VAR_3->dev;
 char VAR_9[15];

 if (sizeof(*VAR_4) > VAR_6) {
  FUNC_1(VAR_8, "trace rsc is truncated\n");
  return -VAR_0;
 }


 if (VAR_4->reserved) {
  FUNC_1(VAR_8, "trace rsc has non zero reserved bytes\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 VAR_7->trace_mem.len = VAR_4->len;
 VAR_7->trace_mem.da = VAR_4->da;


 VAR_7->rproc = VAR_3;


 FUNC_6(VAR_9, sizeof(VAR_9), "trace%d", VAR_3->num_traces);


 VAR_7->tfile = FUNC_5(VAR_9, VAR_3, VAR_7);
 if (!VAR_7->tfile) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 FUNC_4(&VAR_7->node, &VAR_3->traces);

 VAR_3->num_traces++;

 FUNC_0(VAR_8, "%s added: da 0x%x, len 0x%x\n",
  VAR_9, VAR_4->da, VAR_4->len);

 return 0;
}
