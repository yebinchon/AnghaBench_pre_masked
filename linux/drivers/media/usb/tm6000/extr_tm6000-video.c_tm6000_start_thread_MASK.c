
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm6000_dmaqueue {int wq; int ini_jiffies; scalar_t__ frame; } ;
struct TYPE_2__ {int num_bufs; int * urb; } ;
struct tm6000_core {TYPE_1__ isoc_ctl; struct tm6000_dmaqueue vidq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct tm6000_core*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tm6000_core *VAR_2)
{
 struct tm6000_dmaqueue *VAR_3 = &VAR_2->vidq;
 int VAR_4;

 VAR_3->frame = 0;
 VAR_3->ini_jiffies = VAR_1;

 FUNC_0(&VAR_3->wq);


 for (VAR_4 = 0; VAR_4 < VAR_2->isoc_ctl.num_bufs; VAR_4++) {
  int VAR_5 = FUNC_3(VAR_2->isoc_ctl.urb[VAR_4], VAR_0);
  if (VAR_5) {
   FUNC_1("submit of urb %i failed (error=%i)\n", VAR_4,
       VAR_5);
   FUNC_2(VAR_2);
   return VAR_5;
  }
 }

 return 0;
}
