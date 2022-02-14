
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_trc {int enable; int * buf; } ;
struct TYPE_2__ {struct snic_trc trc; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 struct snic_trc *VAR_1 = &VAR_0->trc;

 VAR_1->enable = 0;
 FUNC_1();

 if (VAR_1->buf) {
  FUNC_2(VAR_1->buf);
  VAR_1->buf = ((void*)0);
 }

 FUNC_0("Trace Facility Disabled.\n");
}
