
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_ctx; } ;
struct hva_ctx {int name; scalar_t__ aborting; TYPE_1__ fh; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct hva_ctx *VAR_1 = VAR_0;
 struct device *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_3(VAR_1->fh.m2m_ctx)) {
  FUNC_1(VAR_2, "%s job not ready: no frame buffers\n",
   VAR_1->name);
  return 0;
 }

 if (!FUNC_2(VAR_1->fh.m2m_ctx)) {
  FUNC_1(VAR_2, "%s job not ready: no stream buffers\n",
   VAR_1->name);
  return 0;
 }

 if (VAR_1->aborting) {
  FUNC_1(VAR_2, "%s job not ready: aborting\n", VAR_1->name);
  return 0;
 }

 return 1;
}
