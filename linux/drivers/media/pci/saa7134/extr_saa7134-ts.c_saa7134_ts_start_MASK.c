
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dma; } ;
struct TYPE_7__ {TYPE_2__ pt; } ;
struct TYPE_5__ {int nr_packets; } ;
struct saa7134_dev {int ts_started; size_t board; TYPE_3__ ts_q; TYPE_1__ ts; } ;
struct TYPE_8__ {int ts_type; int ts_force_val; } ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_4__* VAR_10 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct saa7134_dev *VAR_11)
{
 FUNC_5("TS start\n");

 if (FUNC_2(VAR_11->ts_started))
  return 0;


 FUNC_3(VAR_2, (VAR_11->ts.nr_packets - 1) & 0xff);
 FUNC_3(VAR_3,
  ((VAR_11->ts.nr_packets - 1) >> 8) & 0xff);

 FUNC_3(VAR_4,
  (((VAR_11->ts.nr_packets - 1) >> 16) & 0x3f) | 0x00);
 FUNC_4(FUNC_1(5), VAR_9);
 FUNC_4(FUNC_0(5), VAR_0 |
       VAR_1 |
       (VAR_11->ts_q.pt.dma >> 12));


 FUNC_3(VAR_8, 0x00);
 FUNC_3(VAR_8, 0x03);
 FUNC_3(VAR_8, 0x00);
 FUNC_3(VAR_8, 0x01);


 FUNC_3(VAR_8, 0x00);


 switch (VAR_10[VAR_11->board].ts_type) {
 case 129:
  FUNC_3(VAR_7, 0x40);
  FUNC_3(VAR_5, 0xec |
   (VAR_10[VAR_11->board].ts_force_val << 4));
  break;
 case 128:
  FUNC_3(VAR_7, 0xd8);
  FUNC_3(VAR_5, 0x6c |
   (VAR_10[VAR_11->board].ts_force_val << 4));
  FUNC_3(VAR_6, 0xbc);
  FUNC_3(VAR_8, 0x02);
  break;
 }

 VAR_11->ts_started = 1;

 return 0;
}
