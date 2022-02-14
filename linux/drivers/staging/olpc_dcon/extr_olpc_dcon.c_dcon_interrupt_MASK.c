
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dcon_priv {int switched; int waitq; void* irq_time; int pending_src; int curr_src; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ (* read_status ) (int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int *) ;

irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct dcon_priv *VAR_5 = VAR_4;
 u8 VAR_6;

 if (VAR_2->read_status(&VAR_6))
  return VAR_1;

 switch (VAR_6 & 3) {
 case 3:
  FUNC_1("DCONLOAD_MISSED interrupt\n");
  break;

 case 2:
 case 1:
  VAR_5->switched = 1;
  VAR_5->irq_time = FUNC_0();
  FUNC_3(&VAR_5->waitq);
  break;

 case 0:







  if (VAR_5->curr_src != VAR_5->pending_src && !VAR_5->switched) {
   VAR_5->switched = 1;
   VAR_5->irq_time = FUNC_0();
   FUNC_3(&VAR_5->waitq);
   FUNC_1("switching w/ status 0/0\n");
  } else {
   FUNC_1("scanline interrupt w/CPU\n");
  }
 }

 return VAR_0;
}
