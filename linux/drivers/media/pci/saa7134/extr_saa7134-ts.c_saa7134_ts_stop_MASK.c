
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {size_t board; scalar_t__ ts_started; } ;
struct TYPE_2__ {int ts_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct saa7134_dev *VAR_3)
{
 FUNC_1("TS stop\n");

 if (!VAR_3->ts_started)
  return 0;


 switch (VAR_2[VAR_3->board].ts_type) {
 case 129:
  FUNC_0(VAR_0, 0x6c);
  VAR_3->ts_started = 0;
  break;
 case 128:
  FUNC_0(VAR_1, 0x40);
  VAR_3->ts_started = 0;
  break;
 }
 return 0;
}
