
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mci {TYPE_1__* dms; } ;
struct TYPE_2__ {int * ch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct dw_mci *VAR_0)
{
 if (VAR_0->dms) {
  if (VAR_0->dms->ch) {
   FUNC_0(VAR_0->dms->ch);
   VAR_0->dms->ch = ((void*)0);
  }
  FUNC_1(VAR_0->dms);
  VAR_0->dms = ((void*)0);
 }
}
